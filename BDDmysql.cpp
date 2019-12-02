/***************************************************************************************/
/*D�velopp� par Dherbomez Arthur, Hugo Louvel et Adrien Mercier en classe de BTSSN1 ***/
/*le 18/05/2018																	  ****/
/*																				 ****/
/*Langage C++ : Projet Station de Ski  								   			****/
/* 																			   ****/
/*********************************************************************************/
#pragma hdrstop

#include "BDDmysql.h"
//------------------------------------------------------------------------------
#pragma package(smart_init)

//------------------------------------------------------------------------------

 MySQL ::MySQL()
 {
	 SQL = mysql_init(NULL);       //initialise la connexion
 }

//------------------------------------------------------------------------------

 bool MySQL :: connexion(char*adre,char*id,char*mdp,char*table)
 {

	 if (!mysql_real_connect(SQL,adre,id,mdp,table, 0, NULL, 0))
	 {                                                        //si la connexion �choue
	   Etat=false;
	 }
	 else
	 {
	   Etat=true;
	 }

	 return Etat;
 }

//------------------------------------------------------------------------------

 bool MySQL :: deconnexion()
 {

	mysql_close(SQL);
 }

//------------------------------------------------------------------------------

 bool MySQL :: getEtat()
 {
   return Etat;         //retourne etat
 }

//------------------------------------------------------------------------------

 bool MySQL::Enregistrer(float temp)
{
	 String S="INSERT INTO `temperature`(`temperature`) VALUES ('";
	 S+=temp;
	 S+="')";         					//on ajoute la temp�rature � la commande SQL du dessus

	 char *req=new char[S.Length()+1];           //convertion du sting en char
	 wcstombs(req,S.c_str(),S.Length()+1);
	 mysql_query(SQL,req);					//enregistre les temp�ratures dans la BDD
  }



