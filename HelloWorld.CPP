#include <iostream>
#include <cmath>
#include "string"
#include <sstream>


using namespace std;

//declaration of a function is: <return Datatype> <programName>() { }
// a statemet needs at the end ;
// main is the main-Method is where the programm starts...


//Variables

//methods
void sayHi(){
    cout << "This is a function designed outside of the main-method but called there..." << endl;
}
//method with parameter
void sayName(string Name){
  cout << "hello " << Name << endl;
}

int getMax(int num1, int num2){
  int result;
  if(num1>num2){
    result = num1;
  }else if(num2>num1){
    result = num2;
  } else{
    result = 0;
  }
  return result;
}

string getDayOfTheWeek(int tagesZahl){
  //Switch-Case
  string dayName;
  int dayNum=tagesZahl;

  switch(dayNum){
    case 0:
      dayName="Monday";
      break; //break -> if case 0 is a match the programm will skip checking the other cases 
      //and continue executing the code after the switch case statement....
    case 1:
      dayName="Tuesday";
      break;
    case 2:
      dayName="Wednesday";
      break;
    case 3:
      dayName="Thurseday";
      break;
    case 4:
      dayName="Frieday";
      break;
    case 5:
      dayName="Saturday";
      break; 
    case 6:
      dayName="Sunday";
      break;   
    default:
      dayName="Invalid Day Number";       

  }
  return dayName;

}





//sth u can do is only make signature of funciton on top and define swhere else...
void sayNameAlternative(string Name, int age);

//return


int main() {
  //cout to print sth in the terminal endl -> endLine keyword to say that no more printing to terminal
  cout << "    /|" <<endl;
  cout << "   / |" <<endl;
  cout << "  /  |" <<endl;
  cout << " /___|" <<endl;

  //Variables
  string chracterName = "John";
  int characterAge;
  characterAge = 20;

  cout << "There once was a man named " << chracterName << "" << endl;
  cout << "He was "<< characterAge << " years old " << endl;

  //Different Datatypes

  char grade ='B';
  string phrase = "Ich lerne und bin cool";
  int age = 50;
  double gpa = 2.3;
  bool isMale = false;

  cout << grade << endl;
  cout << phrase << endl;
  cout << age << endl;
  cout << gpa << endl;
  cout << isMale << endl;


  //Strings

  cout << "cout without endl"
  << "2nd Line" << endl;

   cout << "cout without endl \n"
  << "2nd Line" << endl;

  //String functions
  //to modify string or give information about it
  string phrase2 = "I am an example phrase";
  cout << phrase2.length() << endl;

  //access characters of a string starting at zero
  cout << phrase2[0] << endl;
  cout << phrase2[2] << endl;

  phrase2[0]= 'B';
  cout << phrase2 << endl;

  //find out information of String
  //is character in a string? transfer parameters: <what string we search>,<from which index to start the search>
  //returns the index of the match
  cout << phrase2.find("example",0) << endl;

  //Substring-Method
  // Substring lets us take a part of the String
  //transfer parameters: <index where to start the substring>,<how many characters to take>
  string phraseSub =  phrase2.substr(8,3);
  cout << phraseSub << endl;

  //Working with numbers
  //two types of numbers integers (full numbers) and decimal numbers like 2.3 this can be floats or doubles
  int wnum =5;
  double dnum = 5.5;

  cout <<"Multiply double and int" << wnum * dnum << endl;

  //increment/decrement
  cout <<"Initialisation: " << wnum << endl;
  wnum++;
  cout <<"Incremented " << wnum << endl;
  wnum--;
  cout <<"Decremented " << wnum << endl;

  //other things u can do are:
  wnum /=80;
  cout <<"Devided by 80 with /=80: " << wnum << endl;
  wnum -=80;
  cout <<"Subtracted 80 with -=80: " << wnum << endl;
  wnum +=81;
  cout <<"Added 80 with +=81: " << wnum << endl;
  wnum *=80;
  cout << "Multiplied 80 with *=80: " << wnum << endl;


  //Quickmaths
  cout << "10/3 with integers returns wrong result" << endl;
  cout << 10/3 << endl;
  cout << "10/3 with one decimals returns right result" << endl;
  cout << 10/3.0 << endl;

  //For these Math-functions u need the import: #include <cmath>
  cout << "For these Math-functions u need the import: #include <cmath>" << endl;

  cout << "calculate 2^5 with the pow-operator: pow(2,5)= " << pow(2,5) << endl;
  cout << "Squareroot of a number with: sqrt(36)= " << sqrt(36) << endl;
  cout << "Round nummbers with: round(4.3)= " << round(4.3) << endl;
  cout << "Round a nummber to the ceiling like 4.1 -> 5 or floor like 4.9 -> 4 " << ceil(4.1)<<" "<<floor(4.9) << endl;
  cout << "Return bigger of 2 nummbers with fmax or smallest with fmin: " << fmax(2, 17) << " " << fmin(2,17) << endl;
  
  //Get User Information

  //works for int double char
  int age2;
  cout << "Enter ur age: " << endl;
  //to get information in we use the opposite of cout
  cin >> age2;
  cout << "Your age hase been safed as: " << age2 << endl;

  //get input as string
  string name;
  cout << "Enter ur name pls: "<< endl;
  cin >> name;
  cout << "Hello " << name << endl;

  //Arrays
  int luckyNums[] = {4,8,15,16,23,42};
  //other declaration
  int luckyNums2[20];
  cout << luckyNums[0] << endl;
  luckyNums[0]=19;
  cout << luckyNums[0] << endl;

  //Functions
  sayHi();
  sayName("Simon");
  sayNameAlternative("Simon",20);

  //if-statements
  cout << getMax(1,2) <<endl;

  //SwitchCase
  cout << getDayOfTheWeek(1)<<endl;

  //While-Loops
  
  
  





  return 0;
}
void sayNameAlternative(string Name, int age){
  cout << "Hello " << Name << "ur age is: " << age << endl;
}

