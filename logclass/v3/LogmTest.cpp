// Logme.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Logme.h"
#include "Test2.h"


int _tmain(int argc, _TCHAR* argv[])
{

	Logme *log = Logme::GetInstance();
	log->writeLogMS("Phx", "suns suck");

	capture();
	return 0;

}

