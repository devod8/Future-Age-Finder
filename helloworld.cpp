#include <iostream>
#include <string> // Inclued the string library

using namespace std;

int main() {
   cout << "Hello, World!" << std::endl;

   string name;
   cout << "Enter your name: ";
   cin >> name;
   cout << "Hello, " << name << "!" << endl;

   int age;
   cout << "Enter your age: ";
   cin >> age;
   cout << "You are " << age << " years old." << endl;

   int year;
   cout << "What year is it currently?";
   cin >> year;
   cout << "Wow it's " << year << " already!" << endl; 

   while (true) { // Loop to repeat the year input if desired
      int future;
      cout << "Ok now pick a year in the future, to find out how old you will be " << name << endl; 
      cin >> future;
      cout << "If you are " << age << " then in the year " << future << " you will be " << age + (future - year) << endl;

      cout << "Would you like to see how old you'll be, in a different year?" << endl;
      string answer;
      cout << "Yay or Ney?";
      cin >> answer;

      if (answer == "Ney" || answer == "ney" ) {
         break;
      }
   }   
   return 0; // Indicates successful program execution
}