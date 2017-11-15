#include<iostream>
using namespace std;

int main()
{
	int a[5],n;
	bool status = false;
	
	for(n=0;n<5;n++){
		cout<< "Angka Ke-" <<n + 1 <<":";
		cin>>a[n];
	}
	for(n=4;n>=0;n--){
		if(a[n]%2==0){
			cout<<" "<<a[n];
			status = true;
		}	
	}
	
	if (status == false){
		cout<< "Even number not found in array"<<a[n];
	}
	
	
}
