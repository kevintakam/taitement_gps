#ifndef GPS_TOOLS_H
#define GPS_TOOLS_H

/**
* \name       GPS_TOOLS
* \brief      Ensemble de fonction permettant l'extraction de coordonees et 
*             de calcul gps. Ce fichier se fonde sur la transmission de type
*             NMEA0183 XGGA ou XRMC:
*                (https://fr.wikipedia.org/wiki/NMEA_0183)
*                (https://gpsd.gitlab.io/gpsd/NMEA.html)
* \author     ???
* \version    V1.0
* \date       2022/11/21
**/        

#include "math.h"
enum GPS_FRAME_TYPE{ UNKNOWN_FRAME=0,XRMC_FRAME,XGGA_FRAME, XGLL_FRAME, 
XGNS_FRAME};
struct GPS_DATA
{
	char *frame;
	int frame_type;
	int is_valid;
	double seconde;
	int year,month,day,hours,minutes;
	double latitude;
	double longitude;
	double altitude;
};
//declarez vos fonctions ici
char* findChar(const char *str, char c, int pos);
char* findStr(const char *str, const char *s, int pos);
fonction qui retourne la position d'un caractère dans une chaine
char* findChar(const char *str, char c,int pos)
{
	for (pos = 0;str[pos]!='\0';pos++){
			if(str[pos] == c)
			    return str;
	}
	return 0;
}

//fonction qui retourne la position du premier caractère de la première occurence d'une chaine 
char* findStr(const char *str, const char *s,int pos)
{
                    char *cm;
        while(pos<strlen(str)){
            if(strncmp(str,s,strlen(s))){
                cm[pos] =s[pos];
                pos++;
            }
        }
        if(strlen(cm)>0){return cm;}
        else{ return NULL;}
        	return NULL;
	}

#endif //doit etre la derniere ligne du fichier
