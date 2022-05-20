//Aggregation with dietPlans

#ipragma once
class Nutritionists
{
	private:
		char n_name[20];
		char n_email[50];
		int n_id;
		char n_qualification[100];
		char n_address[100];
	public:
		Nutritionists();
		Nutritionists(char nutriName[],char nutriEmail[],int nutriId,char nutriQualification[],char nutriAddress[]);
		void displayDetails();
		void enroll();
		void createProfile();
		void uploadNutritionPlans();
		~Nutritionists();
};
