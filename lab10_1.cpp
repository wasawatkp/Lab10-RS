#include<iostream>
#include<string>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	string grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n" ;
	count[5] = 1;
	do{
		cout << "Student [" << count[5] << "]: ";
		cin >> grade; 
		if(grade == "A" ){ // if grade is A
			//Do something
			count[0]++;
		}
		else if(grade == "B"){ // if grade is B
			//Do something
			count[1]++;
		}
		else if(grade == "C"){ // if grade is C
			//Do something
			count[2]++;
		}
		else if(grade == "D"){ // if grade is D
			//Do something
			count[3]++;
		}
		else if(grade == "F"){ // if grade is F
			//Do something
			count[4]++;
		}
		else if(grade == "0"){ 
			break;
		}
		else{ 
			cout << "Wrong input. Please input again.\n" ;
			count[5]--;
		} 
		count[5]++;

	} while(true);
	
	
	cout << "In total " << count[5]-1 <<  " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";		
	cout << "F = " << count[4] ;		
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
