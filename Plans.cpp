#include "Plans.h"
#include<cstring> 
using namespace std;

Plans::Plans()
{
	p_identificationCode=0;
	strcpy(p_name,"");
	strcpy(p_type,"");
	p_price=0;
}

Plans::Plans (int plans_identificationcode,char plans_name[],char plans_type[],int plans_price)
{
	p_identificationCode=plans_identificationcode;
	strcpy(p_name,plans_name);
	strcpy(p_type,plans_type);
	p_price=plans_price;
}

void Plans::displayDetails()
{
	
}

void Plans::calculatePrice()
{
	
}

void Plans::addRegisteredUser (RegisteredUser *rg1, RegisteredUser *rg2, RegisteredUser *rg3, RegisteredUser *rg4, RegisteredUser *rg5)
{
	rg[0] = rg1;
	rg[1] = rg2;
	rg[2] = rg3;
	rg[3] = rg4;
	rg[4] = rg5;
	
}

Plans::~Plans()
{
	cout << "Destructor runs" << endl;
	
}
