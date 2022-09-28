#include <iostream>

using namespace std;

/**
 * get the input from the user and whil display NxN stars
 * according to the input if input is 4 the output will be like this
 *
 *      1234
 *      1234
 *      1234
 *      1234
 *
 * @return int
 */
int main()
{

    int rows, cols, input;

    cout << "Enter the value for NxN: ";
    cin >> input;

    rows = 1;

    while (rows <= input)
    {

        cols = 1;

        while (cols <= input)
        {
            cout << cols;

            cols = cols + 1;
        }

        cout << endl;

        rows = rows + 1;
    }

    return 0;
}