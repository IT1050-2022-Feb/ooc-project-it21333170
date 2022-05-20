#include "UnregisteredUser.h"
#include<cstring>
using namespace std;

UnregisteredUser::UnregisteredUser()
{
	strcpy( fullName,"");
	strcpy( address,"");
	strcpy( email,"");
	contactNo = 0;
}

UnregisteredUser::UnregisteredUser( char u_fname[], char u_address[], char u_email[],int u_cno )
{
	strcpy(fullName,u_fname);
	strcpy(address,u_address);
	strcpy(email,u_email);
	contactNo = u_cno;
}

void UnregisteredUser::DisplayDetails()
{
	
}

void UnregisteredUser::overViewPlans()
{
	
}

void UnregisteredUser::registerUser()
{
	
}

UnregisteredUser::~UnregisteredUser()
{
	cout << "Destructor runs" << endl;
	
}
