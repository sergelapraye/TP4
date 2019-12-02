/***************************************************************************************/
/*D�velopp� par Dherbomez Arthur, Hugo Louvel et Adrien Mercier en classe de BTSSN1 ***/
/*le 18/05/2018																	  ****/
/*																				 ****/
/*Langage C++ : Projet Station de Ski  								   			****/
/* 																			   ****/
/*********************************************************************************/

#ifndef IHMH
#define IHMH
#include "Carte.h"
#include "BDDmysql.h"

//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

//---------------------------------------------------------------------------
#include <Vcl.ExtCtrls.hpp>
#include <VCLTee.Chart.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
#include <VCLTee.Series.hpp>
#include <IniFiles.hpp>
#include <Vcl.Menus.hpp>

class TForm2 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TChart *Chart1;
	TButton *Button3;
	TButton *Button4;
	TLabel *Label3;
	TLabel *Label4;
	TTimer *Timer1;
	TShape *Shape1;
	TLabel *Label7;
	TButton *Button5;
	TMainMenu *MainMenu1;
	TMenuItem *Ficher1;
	TMenuItem *Ouvrir1;
	TMenuItem *Enregistrer1;
	TLabel *Label8;
	TLineSeries *Series1;
	TLabel *Label2;
	TShape *Shape2;
	TEdit *Edit1;
	TLabel *Label1;
	TTimer *Timer2;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Enregistrer1Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Edit1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall Ouvrir1Click(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);





private:

   int frequence;
   int a;
   bool carre;
   bool Etat;


  public:

   Carte*carte1;       //objet carte
   MySQL*SQL;           //objet sql
   TIniFile *fichier;     //objet fichier(.ini)
   int port;
   int i;

	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
