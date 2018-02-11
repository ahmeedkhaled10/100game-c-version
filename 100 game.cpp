#include <iostream>

using namespace std;

/*
    Ahmed Khaled ELsharkawy
    100 game from assignment 1 in
    Programming 1 course
    last edit: 12/2/2018

*/

int main()
{

    int game=0;
    string p1,p2;
    cout<<"Player1 enter your name: ";
    cin>>p1;
    cout<<"Player2 enter your name: ";
    cin>>p2;

    while (game<100)
    {
        int player1;
        cout<<p1<<" enter your number: ";
        cin>>player1;
        while(cin.fail())
        {
            cout<<"Invalid input !";
            cin.clear();
            cin.ignore(256,'\n');
            cout<<endl<<"Enter number: ";
            cin>>player1;
        }
        if (player1<1 || player1>10)
            while (player1<1 || player1>10)
            {
                cout<<p1<<" enter a number between 1 and 10 only: ";
                cin>>player1;
            }
        game+=player1;
        while(game>100)
        {
            game-=player1;
            cout<<p1<<" You exceeded 100 enter a number to reach 100 only: ";
            cin>>player1;
            game+=player1;
        }
        cout<<"Total= "<<game<<endl;
        if (game==100)
            cout<<p1<<" win \n";


// Player 2 turn
        if (game<100)
        {
            int player2;
            cout<<p2<<" enter your number: ";
            cin>>player2;
            while(cin.fail())
            {
                cout<<"Invalid input !";
                cin.clear();
                cin.ignore(256,'\n');
                cout<<endl<<"Enter number: ";
                cin>>player2;
            }
            if (player2<1 || player2>10)
                while (player2<1 || player2>10)
                {
                    cout<<p2<<" enter a number between 1 and 10 only: ";
                    cin>>player2;
                }
            game+=player2;
            while(game>100)
            {
                game-=player2;
                cout<<p2<<" You exceeded 100 enter a number to reach 100 only: ";
                cin>>player2;
                game+=player2;
            }
            cout<<"Total= "<<game<<endl;
            if (game==100)
                cout<<p2<<" win \n";


        }





    }








    return 0;
}
