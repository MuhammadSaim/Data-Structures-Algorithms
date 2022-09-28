#include <iostream>

using namespace std;

/**
 * get the input from the user and whil display stars triangle
 * according to the input if input is 5 the output will be like this
 *
 *  *
 *  **
 *  ***
 *  ****
 *  *****
 *
 * @return int
 */
int main()
{

    int rows, cols, input;

    cout << "Enter the input for triangle pattern: ";
    cin >> input;

    rows = 1;

    while (rows <= input)
    {

        cols = 1;

        while (cols <= rows)
        {

            cout << "*";

            cols = cols + 1;
        }

        cout << endl;

        rows = rows + 1;
    }

    return 0;
}