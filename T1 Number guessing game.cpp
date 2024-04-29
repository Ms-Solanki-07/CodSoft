//Number guessing game (task-01)

#include<iostream>
#include<time.h>
using namespace std;

int main(){
    int number, guess; 
    int guessCount = 1;
    srand(time(0));
    
    // generate randam number between 1 to 100
    number = rand()%100+1;
    
    //input number from user
    cout<<"Enter a Number between 1 to 100 : ";
    cin>>guess;
    cout<<endl;
    
    do{
        if(guess > number){
            cout<<"Your guess Number is too high...!"<<endl;
            cout<<"Please Enter the low number : ";
            cin>>guess; 
            cout<<endl;
        } 
        else if (guess < number){
            cout<<"Your guess Number is too low...!"<<endl;
            cout<<"Please Enter the high number : ";
            cin>>guess;
            cout<<endl;
        }
        else if (guess == number){
            cout<<"You Guessed Correct Number in "<<guessCount<<" attempt..!"<<endl;       
            break;
        }
        guessCount++;
    } while(1);
    
    return 0;
}