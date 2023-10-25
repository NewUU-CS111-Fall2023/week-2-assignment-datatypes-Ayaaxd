#include <iostream>
using namespace std;

int main() {

    int num;
    int somenumber;
    int tries;
    
    srand(time(NULL));
    num = (rand() % 100) + 1;
    
    do{
        cout << "Enter a number 1-100: ";
        cin >> somenumber;
        tries++;
        
        if(somenumber > num){
            cout << "Too high!" << endl;
        } else if(somenumber < num){
            cout << "Too Low!" << endl;
        } else{
            cout << "You are right! Tries: " << tries << endl;
        }
        
    }while(somenumber != num);
    
    return 0;
}
