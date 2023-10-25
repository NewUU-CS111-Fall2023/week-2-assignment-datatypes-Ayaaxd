NUMBER GUESSING GAME 1-100

#include <iostream>
using namespace std;

int main() {

    int num;
    int guess;
    int tries;
    
    srand(time(NULL));
    num = (rand() % 100) + 1;
    
    do{
        cout << "Enter a num 1-100: ";
        cin >> guess;
        tries++;
        
        if(guess > num){
            cout << "Too high!" << endl;
        } else if(guess < num){
            cout << "Too Low!" << endl;
        } else{
            cout << "You are right! Tries: " << tries << endl;
        }
      
    }while(guess != num);
    
    return 0;
}
