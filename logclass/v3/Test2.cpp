
#include "stdafx.h"
#include "Logme.h"


void capture()
{
    Logme *log = Logme::GetInstance();
	log->writeLogMS("LA", "Lakers suck");

}