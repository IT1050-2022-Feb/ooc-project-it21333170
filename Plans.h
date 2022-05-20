#include "Plans.h"
#include"Payment.h"

//Inheritance with fitnessPlans
//Inheritance with dietPlans
//Association with Payment
//Aggregation with RegisteredUser
class Plans{
	protected:
		int p_identificationCode;
		char p_name[20];
		char p_type[20];
		int p_price;
		Payment *pay;
		RegisteredUser *rg [ 5 ];
	public:
		Plans();
		Plans(int plans_identificationcode,char plans_name[],char plans_type[],int plans_price);
		void addRegisteredUser (RegisteredUser *rg1, RegisteredUser *rg2, RegisteredUser *rg3, RegisteredUser *rg4, RegisteredUser *rg5);
		void displayDetails();
		void calculatePrice();
		~Plans();
};
