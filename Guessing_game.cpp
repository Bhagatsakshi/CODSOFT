#include<iostream>
#include<ctime>
using namespace std;
int main() {
  int guess;
  //generate a random number between 1 and 100
  int secretNumber = rand() % 100 + 1;
  int guesses = 0;  //initialization the number of guesses
  do {
    cout<<"Enter your guess: ";
    cin>>guess;
    guesses++;    //increasing number of guesses
    //feedback on the guess
    if(guess>secretNumber) 
    {
      cout<<"Your guess is too high."<<endl;
    } 
    else if(guess<secretNumber) 
    {
      cout<<"Your guess is too low."<<endl;
    } 
    else 
    {
      cout<<"Congratulations! You guessed the correct number in "<<guesses<< " guesses"<<endl;
      break; // Exit the loop if the guess is correct
    }
  }while(true);
  return 0;
}
