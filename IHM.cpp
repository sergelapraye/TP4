/***************************************************************************************/
/*D�velopp� par Dherbomez Arthur, Hugo Louvel et Adrien Mercier en classe de BTSSN1 ***/
/*le 18/05/2018																	  ****/
/*																				 ****/
/*Langage C++ : Projet Station de Ski  								   			****/
/* 																			   ****/
/*********************************************************************************/

#include <vcl.h>
#pragma hdrstop
  #include "IHM.h"





//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------

__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
i=0;
fichier = new TIniFile("C:\\Users\\adherbomez\\Desktop\\Station ski\\Lecture.ini");
// definition du fichier ini
carte1 = new Carte(0);                //definition de l'objet carte

SQL = new MySQL();                   //definition de l'objet mysql

  SQL->connexion("127.0.0.1","root","","stationski");             //connexion � la BDD

	Etat=SQL->getEtat();
		if (Etat==true)
		{
		Shape2->Brush->Color=clLime;                          //vert si connect�
		}
		else
		{
        Shape2->Brush->Color=clRed;
		}

}
//---------------------------------------------------------------------------




void __fastcall TForm2::Button1Click(TObject *Sender)
{
Label3->Visible=True;


}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button3Click(TObject *Sender)
{
Timer1->Enabled=true;

carte1->connexion();
carre=carte1->getEtat();                    //le carre rouge indique la connexion

if (carre == true)
	{
	   Shape1->Brush->Color=clLime;            // vert si connect�
	}
	else
	{
		Shape1->Brush->Color=clRed;            //rouge si deconnect�
	}


}
//---------------------------------------------------------------------------

void __fastcall TForm2::Timer1Timer(TObject *Sender)
{

a=carte1->lecture_analog(2);	   // lire les valeurs de temp�rature de la carte

SQL->Enregistrer(a);               // on enregistre la valeur re�u
Series1->Active=true;
Series1->AddXY(i,a);         // on donne au graph i++ en asbcisses et a en ordonn�es
i++;

if(a>20 || a<16)
{
Shape3->Brush->Color=clRed;
}



}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button5Click(TObject *Sender)
{
Label4->Visible=true;
Chart1->Visible=true;
Button3->Visible=true;
Button4->Visible=true;


}
//---------------------------------------------------------------------------

void __fastcall TForm2::Enregistrer1Click(TObject *Sender)
{
	int freq;
	freq=Edit1->Text.ToInt();
	freq*=1000;
	fichier->WriteInteger("Section int", "Cle int",freq );
   //On enregistre la temp�rature dans le fichier ini
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
Timer1->Enabled=false;
Chart1->Enabled=false;
carre=carte1->getEtat();
if (carre==true)
	{
	   Shape1->Brush->Color=clLime;
	}
	else
	{
		Shape1->Brush->Color=clRed;
	}
}
//---------------------------------------------------------------------------




void __fastcall TForm2::Button7Click(TObject *Sender)
{
	if(SQL->deconnexion())
	{
	Shape2->Brush->Color=clRed;
	}
}
//---------------------------------------------------------------------------




void __fastcall TForm2::Edit1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
if(Key == VK_RETURN)
{
 int var=Edit1->Text.ToInt();                   //le timer prend la periode indiqu�
 Timer1->Interval= var* 1000;                   //var*1000 car on converti en secondes
}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Ouvrir1Click(TObject *Sender)
{
Timer1->Interval=fichier->ReadInteger("Section int","Cle int",0);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Timer2Timer(TObject *Sender)
{
      break;
}
//---------------------------------------------------------------------------

