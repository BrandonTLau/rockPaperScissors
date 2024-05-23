/*
2. Rock Paper Scissor 

Stone Paper Scissor or Rock Paper Scissor is a game that is played between two people, Each player in this game forms one of three shapes. The winner will be decided as per the given rules:

Rock vs Scissor -> Rock wins
Rock vs Paper -> Paper wins
Paper vs Scissor -> Scissor wins
In this game, the user is asked to make choices based on both computer and user choices and the results are displayed showing both computer and user choices.

Technologies Required: C++ programming language, I/O Streams, Standard Library Functions.
*/

#include <iostream>
#include <string>
#include <cstring>
#include <time.h>
#include <cstdlib>
using namespace std;

bool decideWinnerRock(char user, char cpu)
{
    return (user=='r'&&cpu=='s');
}

bool decideWinnerPaper(char user, char cpu)
{
    return (user=='p'&&cpu=='r');
}

bool decideWinnerScissors(char user, char cpu)
{
    return (user=='s'&&cpu=='p');
}

bool tie(char user, char cpu)
{
    return (user==cpu);
}

int main()
{
    srand(time(0));
    char choice;
    do
    {
       char user_decision;
       cout << "User turn (Enter r for rock, p for paper or s for scissors): " << endl;
       cin >> user_decision;

        char cpu_choice[3] = {'r', 'p', 's'};
        int index; 
       cout << "CPU turn: " << endl;
       index = rand() % 3;
        cout << cpu_choice[index] << endl;
        
       
       if(decideWinnerRock(user_decision, cpu_choice[index]))
       {
            cout << "User wins. User chose " << user_decision << ", cpu chose: " << cpu_choice[index] << endl;
       }
       else if(decideWinnerPaper(user_decision, cpu_choice[index]))
       {
            cout << "User wins. User chose " << user_decision << ", cpu chose: " << cpu_choice[index] << endl;
       }
       else if(decideWinnerScissors(user_decision, cpu_choice[index]))
       {
            cout << "User wins. User chose " << user_decision << ", cpu chose: " << cpu_choice[index] << endl;
       }
       else if(tie(user_decision, cpu_choice[index]))
       {
            cout << "Tie decision. User chose " << user_decision << ", cpu chose: " << cpu_choice[index] << endl;
       }
       else
       {
            cout << "CPU wins.  User chose " << user_decision << ", cpu chose: " << cpu_choice[index] << endl; 
       }

        cout << "Do you want to play again (y for yes, n for no): " << endl;
        cin >> choice; 

    } while (choice=='y');
    
    
    
    
    return 0;
}