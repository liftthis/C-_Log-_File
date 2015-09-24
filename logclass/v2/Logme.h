#pragma once

#ifndef LOGME_H
#define LOGME_H


class Logme
{
	//int gx;

public:
	

	static Logme * GetInstance()
	{
       if(theInstance == NULL)
		   theInstance = new Logme();
	   return theInstance;
	};

    ~Logme();

	void writeLogMS( char *, char * );

private:
	Logme();  //private constructor
	static Logme * theInstance;

};

#endif