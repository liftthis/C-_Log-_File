#include "stdafx.h"
#include "Logme.h"
#include <stdio.h>
#include <iostream>

#include <windows.h>
#include <time.h>
#include <string>
#include <stdlib.h>

using namespace std;

Logme * Logme::theInstance = NULL;

Logme::Logme()
{
   //gx = x;
}
Logme::~Logme()
{
	//default destructor.
}

void Logme::writeLogMS(char loc[], char msg[])
{
	FILE *fp;
	char logfile[] = "FCM_Code.log";

	SYSTEMTIME t;

	GetLocalTime(&t);

	fp = fopen(logfile, "a");

	if(fp)
	{
		fprintf(fp,"%04d-%02d-%02d %02d:%02d:%02d.%03d - %s- %s \n",
			    t.wYear, t.wMonth, t.wDay,
                t.wHour, t.wMinute, t.wSecond, t.wMilliseconds , loc, msg );

       fclose(fp);  
	}
	else
	{
		printf("error opening logfile %s\n", logfile);
	}

  
}
