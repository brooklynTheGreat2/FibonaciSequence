//Library iostream inorder for cout & cin
#include <iostream>
//Setting up The intial variables N1 & N2 for calculating Fibonaci sequence I am using Double since int is having overflow issues calculating this and creating negative numbers which is impossible for the fibonaci sequence
double N1 = 0;
double N2 = 1;
//This variable is used as a temporary variable inorder to exchange numbers
double bucket;
//This variable keeps the record of how many terms the user wants to see
int count;
//This is just to avoid using std:: again and again cause i hate to do that
using namespace std;
//Main Loop
int main(){
	//Asks the user how many terms they would like to see
	cout<<"How many number of terms would you like to see"<<endl;
	//Records the number of terms they would like to see
	cin>>count;
	//This is to avoid users from using 0 or charachters for their input
	if (count == 0)
	{
		cout<<"error the following is not a number or is equal to zero try again"<<endl;
	}
	//This is so i can show 0 because i have to display it first and in total it has to be exactly how the user wants
	int countf = count-1;
	cout<<N1<<",";
	//This is to show 1 because i lost my mind trying to do it anyway else
		if (countf > 1)
		{
			cout<<N2<<",";
		}
		//The loop to calculate Fibonaci
	for (int i = 0; i < countf; ++i)
	{
		//First shows the sum of the two numbers
		 cout<<N1 + N2<<",";
		 //Temporary get the contents of N2 into our variable
		 bucket = N2;
		 //N2 becomes the next number
		 N2 = N1 + N2;
		 //N1 can finally become previous N2
		 N1 = bucket;
	}
//I don't know why i put this here
	return 0;
}
//Please show me mercy as i am ever learning