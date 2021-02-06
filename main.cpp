#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>

using namespace std;

string randomizer(){
	unsigned long long int Pass = 0;
	int value = 0;
	
	for(int i = 1; i < 9.5*pow(10, 24) ; i = i*100){
		Pass+=(random()%94)*i;
	}
	if(checkPass(Pass)){
		return passFix(Pass);
	}
	else{
		return "failed";
	}	
}
bool checkPass(long long int Pass){
	int letter = 0;
	int bigLetter = 0;
	int didgit = 0;
	int symbol = 0;
	
	return true;
}
string passFix(long long int Pass){
	string pass = to_string(Pass);
	return pass;
}

int main(){
	cout<<randomizer()<<endl;

	return 0;
}
