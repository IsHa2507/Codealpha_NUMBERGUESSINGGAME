#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(nullptr));
    int randomnumber=rand()%100+1;
    int guess;
    int attempts=0;
    cout<<"WELCOME TO NUMBER GUESSING GAME"<<endl;
    cout<<"I have selected a no. from 1-100..TRY!!\n\n";

    do{
        cout<<"Guess the no.:";
        cin>>guess;
        attempts++;
        if(guess == randomnumber){
            cout<<"AMAZING!! YOU GUESSED IT RIGHT!!"<<randomnumber<<endl;
            cout<<"It took you attempts:"<<attempts;
            break;
        }
        else if (guess < randomnumber){
            cout<<"TOO low!!";
        }
        else{
            cout<<"TOO high";
        }

    }
    while (true);
    return 0;
}