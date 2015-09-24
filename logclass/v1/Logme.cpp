#include "stdafx.h"
#include "Logme.h"
#include <stdio.h>
#include <iostream>

#include <windows.h>
#include <time.h>
#include <string>
#include <stdlib.h>

using namespace std;

Logme::Logme()
{
   //gx = x;
}

void Logme::writeLogMS(int x)
{
	FILE *fp;
	char logfile[] = "FCM_Code_LogFile.log";

	SYSTEMTIME t;

	GetLocalTime(&t);

	fp = fopen(logfile, "a");

	if(fp)
	{
		//fprintf(fp,"%04d-%02d-%02d %02d:%02d:%02d.%03d - %s- %s \n",
		//	    t.wYear, t.wMonth, t.wDay,
        //        t.wHour, t.wMinute, t.wSecond, t.wMilliseconds , loc, msg );

		fprintf(fp,"%04d-%02d-%02d %02d:%02d:%02d.%03d - %d \n",
			    t.wYear, t.wMonth, t.wDay,
                t.wHour, t.wMinute, t.wSecond, t.wMilliseconds , x);
       fclose(fp);  
	}
	else
	{
		printf("error opening logfile %s\n", logfile);
	}

  
}
