#include<iostream>
using namespace std;

int main(){
	int f,s,res;
	char opt;
	
	cout<<"Enter your first Number: \n";
	cin>>f;
	cout<<"Enter your operator: \n";
	cin>>opt;
	cout<<"Enter your second Number: \n";
	cin>>s;
	
	switch(opt) {
	case '+' : res=f+s; cout<<res;break;
	case '-' : res=f-s; cout<<res;break;
	case '*' : res=f*s; cout<<res;break;
	case '/' : res=f/s; cout<<res;break;
	 default:cout<<"Invalid Eorror!";break;
	}
	return 0;
}
