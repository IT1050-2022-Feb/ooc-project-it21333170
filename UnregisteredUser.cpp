//Dependency with fitnessPlans
//Inheritance with RegisteredUser

#include "fitnessPlans.h"

class UnregisteredUser
{
	protected:
		char fullName[20];
		int contactNo;
		char address[200];
		char email[50];
	public:
		UnregisteredUser();
		UnregisteredUser( char u_fname[], char u_address[], char u_email[],int u_cno );
    void overViewPlans();
		void addfitnessPlans (fitnessPlans *f);
		void overviewPlans();
		void DisplayDetails();
		void registerUser();
		~UnregisteredUser();
};
