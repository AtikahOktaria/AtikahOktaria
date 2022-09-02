#include <iostream>
using namespace std;

int main(){
	string a;
	string b;
	string c;
	string d;
	cout<<"Masukan nama anda : ";
	getline(cin,a);
	
	cout<<"Masukan NPM anda : ";
	getline(cin,b);	
	
	cout<<"Masukan alamat anda : ";
	getline(cin,c);
	
	cout<<"Masukan hobi anda : ";
	getline(cin,d);
	
	cout<<"Nama saya adalah : "<<a;
	getline(cin,a);
	cout<<"NPM sayaa adalah : "<<b;
	getline(cin,b);
	cout<<"ALamat saya adalah : "<<c;
	getline(cin,c);
	cout<<"Hobi saya adalah : "<<d;
	
	return 0;
}
