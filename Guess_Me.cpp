#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int rand_result,user_choice,points=0;
    srand(time(0));
    rand_result = 1 +(rand()%6);
    for(int i=0;i<5;i++){
        cout<<"Enter Any Number Of Your Choice"<<endl;
        cin>>user_choice;
        if(user_choice==rand_result){
            cout<<"Perfect!, You Got It"<<endl;
            points = points + 1;
        }
        else{
            cout<<"Ohh! Nooo, No Worries You Got More Tries :: "<<5-i<<endl;
        }
    }
    cout<<"You Scored > "<<points;
}