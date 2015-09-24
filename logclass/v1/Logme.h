#pragma once

#ifndef LOGME_H
#define LOGME_H


class Logme
{
	int gx;

public:
	//~Logme(void);

	/*static Logme * GetInstance()
	{
       if(theInstance == NULL)
		   theInstance = new Logme();
	   return theInstance;
	};*/
    Logme();
	void writeLogMS(int x);

//Private:
	//static Logme * theInstance;

//Pivate:
	//Logme(void);



};

#endif