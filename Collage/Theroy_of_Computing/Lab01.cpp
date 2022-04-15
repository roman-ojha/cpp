// Cpp program to implement DFA Algorithm

#include <iostream>
#include <stdio.h>
#include <cstring>
#include <conio.h>
using namespace std;

int isValidSymbol(char ch, char inputSymbols[], int numberOfInputSymbol)
{
    for (int i = 0; i < numberOfInputSymbol; i++)
    {
        if (ch == inputSymbols[i])
        {
            return i;
        }
    }
    return -1;
}

int isFinalState(int st, int finalState[], int numberOfFinalState)
{
    for (int i = 0; i < numberOfFinalState; i++)
    {
        if (st == finalState[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int numberOfState;
    int numberOfInputSymbol;
    int numberOfFinalState;
    char inputSymbols[100];
    int transitionMatrix[100][100];
    int startingState;
    int finalState[50];
    char string[100];
    int stateCounter = 0;
    int flag = 1;
    cout << "Enter the number of states that your Dfa consist of: ";
    cin >> numberOfState;
    cout << "Enter the number of input symbol that Dfa have: ";
    cin >> numberOfInputSymbol;
    for (int i = 0; i < numberOfInputSymbol; i++)
    {
        cout << "Enter input symbols " << i + 1 << ": ";
        cin >> inputSymbols[i];
    }

    cout << endl
         << "-----Transition Table Start------:" << endl;
    for (int i = 0; i < numberOfState; i++)
    {
        for (int j = 0; j < numberOfInputSymbol; j++)
        {
            cout << "Enter value of next state for (q" << i << "," << j << ")-> q";
            cin >> transitionMatrix[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < numberOfInputSymbol; i++)
        cout << "\t" << inputSymbols[i];

    for (int i = 0; i < numberOfState; i++)
    {
        cout << "\nq" << i;
        for (int j = 0; j < numberOfInputSymbol; j++)
        {
            cout << "\tq" << transitionMatrix[i][j];
        }
        cout << endl;
    }

    cout << "Enter Starting state: q";
    cin >> startingState;
    cout << "Enter No of final state: ";
    cin >> numberOfFinalState;
    for (int i = 0; i < numberOfFinalState; i++)
    {
        cout << "Enter " << i + 1 << " Final State: q";
        cin >> finalState[i];
    }

    do
    {

        cout << "Enter a String: ";
        cin >> string;

        stateCounter = 0;
        flag = 1;

        for (int i = 0; i < strlen(string); i++)
        {
            int symPos = isValidSymbol(string[i], inputSymbols, numberOfInputSymbol);
            if (symPos == -1)
            {
                flag = 0;
                break;
            }
            stateCounter = transitionMatrix[stateCounter][symPos];
        }

        if (flag == 1 && isFinalState(stateCounter, finalState, numberOfFinalState) == 1)
        {
            cout << "String " << string << " is Accepted" << endl;
        }
        else
        {
            cout << "String " << string << " is Rejected" << endl;
        }
    } while (1);

    return 0;
}