#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int again(), easy(), medium(), hard(), startfail();

int replay()
{
    cout << "\nOh cool, you must like that game" << endl;
        startfail();
}

int again()
{
    int choice;
    cout << "\nWant to play again?" << endl;
    cout << "\t1. Yes" << endl;
    cout << "\t2. No" << endl;
    cout << "> ";
    cin >> choice;
    if (choice == 1)
    {
        replay();
    }
    if (choice == 2)
    {
        exit(EXIT_FAILURE);
    }

}

int hard()
{
    int number, next, choice;
    srand(time(0));
    number = 1+(rand()%1000);
    cout << "\nGuess a number between 1 and 1000. Good luck." << endl;
    next = 0;
    while (next == 0){
        cout << "> ";
        cin >> choice;
        if (choice < number)
        {
            cout << "Too Low!" << endl;
        }
        if (choice > number)
        {
            cout << "Too high!" << endl;
        }
        if (choice == number)
        {
            cout << "You got it!" << endl;
            again();
        }

    }
}

int medium()
{
    int number, next, choice;
    srand(time(0));
    number = 1+(rand()%100);
    cout << "\nGuess a number between 1 and 100" << endl;
    next = 0;
    while (next == 0){
        cout << "> ";
        cin >> choice;
        if (choice < number)
        {
            cout << "Too Low!" << endl;
        }
        if (choice > number)
        {
            cout << "Too high!" << endl;
        }
        if (choice == number)
        {
            cout << "You got it!" << endl;
            again();
        }

    }
}


int easy()
{
    int number, next, choice;
    srand(time(0));
    number = 1+(rand()%10);
    cout << "\nGuess a number between 1 and 10" << endl;
    next = 0;
    while (next == 0){
        cout << "> ";
        cin >> choice;
        if (choice < number)
        {
            cout << "Too Low!" << endl;
        }
        if (choice > number)
        {
            cout << "Too high!" << endl;
        }
        if (choice == number)
        {
            cout << "You got it!" << endl;
            again();
        }

    }
}



int startfail()
{
    int choice;
    cout << "\nWhat difficulty do you want?" << endl;
    cout << "\t1. Easy: 1-10" << endl;
    cout << "\t2. Medium: 1-100" << endl;
    cout << "\t3. Hard: 1-1000" << endl;
    cout << "> ";
    cin >> choice;
    if (choice == 1){
        easy();
    }
    if (choice == 2){
        medium();
    }
    if (choice == 3){
        hard();
    }
    else {
        cout << "Please enter 1, 2, or 3 to select a difficulty" << endl;
        startfail();
    }
}

int main()
{
    int border, choice;
    for (border = 0; border < 40; border++){
        cout << "-";
    }
    cout << "\n";
    cout << "   Welcome to Logan's Guessing Game" << endl;
    for (border = 0; border < 40; border++){
        cout << "-";
    }s
    cout << "\n";
    cout << "What difficulty do you want?" << endl;
    cout << "\t1. Easy: 1-10" << endl;
    cout << "\t2. Medium: 1-100" << endl;
    cout << "\t3. Hard: 1-1000" << endl;
    cout << "> ";
    cin >> choice;
    if (choice == 1){
        easy();
    }
    if (choice == 2){
        medium();
    }
    if (choice == 3){
        hard();
    }
    else {
        cout << "Please enter 1, 2, or 3 to select a difficulty" << endl;
        startfail();
    }
    return 0;
}
