// This program will write the complete age population

// Alberto Conde
// October 15, 2020

#include <iostream>

using namespace std;

const int TOTALYEARS = 100;

int main() {
    int ageFrequency[TOTALYEARS] = {}; // initialize to all zeroes
    int currentAge = -99;              // initialize to sentinel value

    while (true)
    {
        cout << "Please input an age from one to 100, put -99 to stop\n";
        cin >> currentAge;

        if ( currentAge == -99 )
        {
            break;
        }

        if ( currentAge > 0 and currentAge < (TOTALYEARS+1) )
        {
            ageFrequency[currentAge-1] += 1;
        }
        else
        {
            cout << "Invalid age \n";
        }
    }

    for ( int age = 0 ; age < TOTALYEARS ; age++ )
    {
        if ( ageFrequency[age] > 0 )
        {
            cout << "The number of people " << (age+1) << " years old is "
                      << ageFrequency[age] << '\n';
        }
    }

    return 0;
}
