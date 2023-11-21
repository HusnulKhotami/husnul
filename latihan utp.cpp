#include <iostream>
using namespace std;
int maiin(){
	int a,b;
	cin>>a>>b;
	int data [a];
	
	for (int i=0; i < a; i++){
		cin >> data [i];
		
	}
	int counter=0;
	for(int i=0;i<b;i++){
		if (a == data [i]){
			counter++;
		}
	}
	cout<<counter<<endl;
	
	
	return 0;
}
