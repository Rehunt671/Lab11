#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	string data;
	dest << "-------------------- BOOM ---------------------\n";
	while(getline(source , data)){
		dest << data << "\n";
	}
	dest << "-------------------- HA!! ---------------------\n";

    source.close();
    dest.close();
	return 0;
}
