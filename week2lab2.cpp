// week2lab2.cpp : Defines the entry point for the application.
//

#include"iostream"

using namespace std;

namespace cst8219 {

	class Vehicle {
		// initlaizing two integer varibales by private defualt access

	private:
		int numWheels;
		int numDoors;




		// this first method/constractor talks no parameters 
	public:
		Vehicle() : Vehicle(4)
		{
			cout << "Constructor with 0 parameter" << endl;

		}

		// this second method/constractor talks one integer parameters 
		Vehicle(int w) :Vehicle(w, 2)
		{
			cout << "Constructor with 1 parameter, where wheel" << w << endl;
		}


		// this third method/constractor talks two integer parameters 
		Vehicle(int w, int d)
		{
			// and store them in w,d that present numWheels,numDoors
			numWheels = w;
			numDoors = d;
			cout << "Constructor with 2 parameter" << endl;
		}
		Finished constructor
		//that is the deconstractore calling automatically fuction
		~Vehicle()
		{
			cout << " In destructo" << endl;
		}
	}; 	Finished destructor 
};

// the main method
int main(int argc, char** argv)
{

	cst8219::Vehicle myVehicle();

	//An object will be created by calling Vehicle(), two intermediate object, total three objects
	cout << "I made a Vehicle" << endl;
	return 0;

}
