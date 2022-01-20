//This program demonstrates hierarchical functions calls.
#include<iostream> 
using namespace std;

void deep();
void deeper();
void deepdeeper();

int main()
	{
		cout << "I am starting in main." << endl;
		
	    //Looping the deep function in main function four times. 
		for (int i = 0; i < 4; i++)
		{
			deep();
			cout << "Now I am back in main." << endl;
		}
		
		system("pause");
		return 0;
	}

	//The deep function displays a message and then calls the deeper function.
	 void deep()
	{	
		//Looping the deeper function in deep function three times.
		for (int i = 0; i < 3; i++)
		{
			cout << "I am now in deep." << endl;
			deeper();
			cout << "Now I am back in deep." << endl;
		}

	}
	
	 //The deeper function displays a message and then calls the deepdeeper function.
	 void deeper()
	{
		//Looping the deepdeeper function in deeper function two times.
		for (int i = 0; i < 2; i++)
		{
			cout << "I am now in deeper." << endl;
			deepdeeper();
			cout << "Now I am back in deeper." << endl;
		}
		
	}

	 //The deepdeeper function simply displays a message.
	 void deepdeeper()
	 {
		 cout << "I am now in deepdeeper." << endl;
	 }

