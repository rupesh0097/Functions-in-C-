#include <iostream>
using namespace std;

//Declaring and creating a Function.
void greet(){
	cout << "Hello BOB" << endl;
}
void print(int mark) {
	cout << "The mark obtained is: " << mark;
}
void name_age(string name, int age){
	cout << "The name is :" << name<< endl;
	cout << "The age is : " << age << endl;
}

//Calling the Function greet created above.
int main(){
	string name = "ave ave";
	int age = 19;
	int mark =45;

	//Calling the function name_age
	name_age(name, age);
	greet();
	print(mark);


	





 return 0;
}