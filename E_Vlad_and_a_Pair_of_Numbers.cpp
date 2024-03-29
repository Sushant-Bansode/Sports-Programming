#include <bits/stdc++.h>
using namespace std;

void compute(long long int X, long long int Y)
{
    // Initialize the two numbers
    int A, B;

    // Case 1: X < Y
    if (X < Y)
    {
        A = -1;
        B = -1;
    }

    // Case 2: X-Y is odd
    else if (abs(X - Y) & 1)
    {
        A = -1;
        B = -1;
    }

    // Case 3: If both Sum and XOR    // are equal
    else if (X == Y)
    {
        A = 0;
        B = Y;
    }

    // Case 4: If above cases fails
    else
    {

        // Update the value of A
        A = (X - Y) / 2;

        // Check if A & Y value is 0
        if ((A & Y) == 0)
        {

            // If true, update B
            B = (A + Y);
        }

        // Otherwise assign -1 to A,
        // -1 to B
        else
        {
            A = -1;
            B = -1;
        }
    }
    if (A == -1 && B == -1)
    {
        cout << -1;
    }
    else
    {
        cout << A << " " << B;
    }

    cout << endl;
}

// Driver function
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int X;
        cin >> X;
        compute(2 * X, X);
    }

    return 0;
}
