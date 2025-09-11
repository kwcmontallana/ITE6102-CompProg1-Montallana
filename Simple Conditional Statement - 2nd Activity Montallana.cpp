#include <iostream>
using namespace std;

/* Keith William Montallana
25000926810*/
int main()
{
    string name;
    int Age, VotingAge = 18;

    //Enter name// 
    cout << "What's your name? ";
    cin >> name;

    //Enter age//
    cout << "How old are you? ";
    cin >> Age;

    //If-else for voting age//
    if(Age >= VotingAge) {
            cout << "Congrats, you're old enough to vote!";
        } else {
            cout << "Womp Womp, you're not old enough to vote yet!";
        }
/*Keith William Montallana
25000926810*/
}


