#include <iostream>
using namespace std;

int main() { //declares main function

  bool replay = true;

  do{
  int computer; //computer generated number
  int user; //user number
  int guesses = 1; //tracks the number of guessess


  srand(time(NULL));
	computer = rand() % 100 + 1; //sets seed at a random position each run, to not repeat the same number

	cout<<"Enter an integer between 1 and 100"<<endl;
	cin>>user; //user inputs the number

	while(user!=computer) { //this while loop repeats the user inputs until a match is made (person has won). i.e. if the user number does not equal the computer, it repeats
	  if(user<computer) {
	    guesses++; //adds guess
	    cin.clear(); //clears the stream
	    cout<<"Your number is too small. Try again."<<endl;
	    cin>>user; //asks for new input
	  }//if user is less than computer
	  else if(user>computer){ // same as above, but if the user input is greater
	    guesses++;
	    cin.clear();
	    cout<<"Your number is too big. Try again."<<endl;
	    cin>>user;
	  }//else if user is greater than computer
	}//while user does not equal computer

	cin.clear();
	cout<<"You won! You guessed " << guesses << " times. Would you like to play again? 1 to replay/0 to exit" <<endl;
	cin>>replay;

  }while(replay==true);
  return 0;
}//int main
