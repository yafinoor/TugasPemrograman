#include <iostream>
#include <cmath>
using namespace std;

int main (){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
		cout << "MATRIKS X : "<< endl;
	double a1c[5]={4,4,5,3,3};
	double a2c[5]={3,3,4,2,3};
	double a3c[5]={5,4,2,2,2};
	
	cout << a1c[0] <<" | "<<a1c[1]<<" | "<<a1c[2]<<" | "<<a1c[3]<<" | "<<a1c[4]<<endl;
	cout << a2c[0] <<" | "<<a2c[1]<<" | "<<a2c[2]<<" | "<<a2c[3]<<" | "<<a2c[4]<<endl;
	cout << a3c[0] <<" | "<<a3c[1]<<" | "<<a3c[2]<<" | "<<a3c[3]<<" | "<<a3c[4]<<endl;		
	cout << endl;

}
	
