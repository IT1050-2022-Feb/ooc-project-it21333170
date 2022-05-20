#include "Nutritionists.h"
#include <cstring>
using namespace std;

//Aggregation between dietPlans

Nutritionists::Nutritionists(){
	strcpy(n_name,"");
	strcpy(n_email,"");
	n_id=0;
	strcpy(n_qualification,"");
	strcpy(n_address,"");
}

Nutritionists::Nutritionists(char nutriName[],char nutriEmail[],int nutriId,char nutriQualification[],char nutriAddress[]){
	strcpy(n_name,nutriName);
	strcpy(n_email,"");
	n_id=nutriId;
	strcpy(n_qualification,nutriQualification);
	strcpy(n_address,nutriAddress);
}

void Nutritionists::displayDetails(){
	
}
void Nutritionists::enroll(){
	
}
void Nutritionists::uploadNutritionPlans(){
	
}
void Nutritionists::createProfile(){
	
}
Nutritionists::~Nutritionists(){
	cout << "Destructor runs" << endl;
}
