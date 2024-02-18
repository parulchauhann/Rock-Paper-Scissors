#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void playAgain();
void playgame();
int main()
{
    cout << "Welcome to Rock, Paper, Scissor!" << endl;
    playgame();
}
void playAgain(){
    string inputForPlayAgain;
    cout<<"Do you want to play again?(y/n)"<<endl;
    cin >> inputForPlayAgain;
    for(int i = 0 ; i < inputForPlayAgain.length() ; i++){
        inputForPlayAgain[i] = tolower(inputForPlayAgain[i]);
    }
    if (inputForPlayAgain == "y" || inputForPlayAgain == "yes"){
        playgame();
    }else if (inputForPlayAgain == "n" || inputForPlayAgain == "no"){
        cout<<"See you next time! THANK YOU!"<<endl;
    }else{
        cout<<"Please enter in correct format type yes or no."<<endl;
        playAgain();
    }
}
void playgame()
{
    cout << "Enter your choice (Rock , paper or scissor): ";
    string input;
    cin >> input;
    int playerChoice , computerChoice;
    for (int j = 0; j < input.length(); j++){
        input[j] = tolower(input[j]);
    }
    string arr[] = {"rock", "paper", "scissor"};
    bool correctFormat = false;
    for (int i = 0; i < 3; i++){
        if (input == arr[i]){
            correctFormat = true;
            playerChoice = i;
        }
    }
    if (correctFormat){
        computerChoice =  rand() % 3;
        cout<<"computerChoice:"<<arr[computerChoice]<<endl;
        if(computerChoice == playerChoice){
            cout<<"Draw!"<<endl;
            playAgain();
        }else if ((computerChoice == 0 && playerChoice == 1) || (computerChoice == 1 && playerChoice == 2) || (computerChoice == 2 && playerChoice == 0)){
            cout<<"You Win!"<<endl;
            playAgain();
        }else{
            cout<<"Computer win! Try next time"<<endl;
            playAgain();
        }
    }
    else{
        cout<<"Sorry, Incorrect format! Please choose from rock , paper or scissor"<<endl;
        playgame();
    }

}