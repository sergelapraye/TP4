/***************************************************************************************/
/*D�velopp� par Dherbomez Arthur, Hugo Louvel et Adrien Mercier en classe de BTSSN1 ***/
/*le 18/05/2018																	  ****/
/*																				 ****/
/*Langage C++ : Projet Station de Ski  								   			****/
/* 																			   ****/
/*********************************************************************************/

#pragma hdrstop
#include "Carte.h"
#include "K8055D.h"

//------------------------------------------------------------------------------
#pragma package(smart_init)

//------------------------------------------------------------------------------

  Carte::Carte(int adresse)
  {

   adr=adresse;            // adresse de la carte donn�e en param�tre


  }

  Carte::~Carte()
  {
   CloseDevice;         // commande pour fermer la connexion
  }
//------------------------------------------------------------------------------

  bool Carte::connexion()
  {

	int var;
	var=OpenDevice(adr);   //ouvre la connexion
	if(var==-1)                 //si l'etat est � -1, la carte n'est pas connect�e
	 etat=false;
	 else
	 etat=true;              //sinon la carte est connect�e

	return etat;

  }

//------------------------------------------------------------------------------

 bool Carte::getEtat()
  {

   return etat;             //retourne l'etat de la carte

  }

//------------------------------------------------------------------------------

  int Carte::lecture_analog(int channel)
  {

	res=ReadAnalogChannel(channel);           //res retourne une valeur entre 0 et 255
	res=res*90;
	res=res/255;                           //90 car la carte �tudie entre -30�C et 60�C
	res=res-30;                               //car elle va jusqu'� -30�C

	return res;
  }

//------------------------------------------------------------------------------
