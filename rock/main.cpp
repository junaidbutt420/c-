#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std ;

class junaid {
 public :

     void welcome ()
     {
        cout << "\n\t\t\t\t****Welcome to My Game ****\n\n\n";
        cout << "\t\t\t\t==============================\n";
        cout << "\t\t\t\t |Developed by : Junaid Javed |\n";
        cout << "\t\t\t\t==============================\n";

     }



};

int main() {

    junaid junaidobj ;
    junaidobj.welcome();
  system("color 02");

srand (time(NULL));

int computer = rand() % 3 + 1;

int user = 0;


  string roc = "1) Rock\n";
  string pap = "2) Paper\n";
  string sci = "3) Scissors\n";


cout << "====================\n";
cout << "rock paper scissors!\n";
cout << "====================\n\n";


cout << roc;
std::cout << pap;
std::cout << sci;

std::cout << "Choose: ";
std::cin >> user;


std::cout << "\nYou  choose ";

  switch(user){
    case 1 :
    	std::cout << roc;
    	break;
    case 2 :
    	std::cout << pap;
    	break;
    case 3 :
    	std::cout << sci;
    	break;
    default :
    	std::cout << "Invalid Option\n";
  }


cout << "Comp choose ";
    switch(computer){
    case 1 :
    	cout << roc;
    	break;
    case 2 :
    	cout << pap;
    	break;
    case 3 :
    	cout << sci;
    	break;
    default :
    	std::cout << "Sorry !Invalid Option\n";
  }



  if(user == computer){
    std::cout << "Draw Game\n";
  }
  else if(user == 1 && computer == 3){
   cout << "You Win\n";
  }
  else if(user == 3 && computer == 2){
    cout << "You Win\n";
  }
  else if(user == 2 && computer == 1){
    cout << "You Win\n";
  }
  else{
  cout << "Computer Wins!\n";
  }

}
