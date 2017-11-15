#include <iostream>
using namespace std;
 
main()
{
	int greatest, smallest, angka[10];
	
	for(int i=0; i<10; i++){
		cout<< "Tulis Angka Ke" <<i + 1 <<":";
		cin>> angka [i];
		
		if(i == 0) {
			greatest = angka [0];
			smallest = angka [0];
		}
		else if(angka [i] > greatest) {
			greatest = angka [i];
		}
		else if(angka [i] < smallest) {
			smallest = angka [i];
		}
	}
	
	cout<< " Angka greatest: " <<greatest<<endl;
	cout<< " Angka smallest: " <<smallest<<endl;
}
