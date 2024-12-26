#include <iostream>
using namespace std;

// This program calculates the number of trailing zeroes in the factorial of a number (n!).
// Trailing zeroes are caused by factors of 10 in n!, and each 10 is formed by multiplying 2 and 5.
// Since there are always more factors of 2 than 5 in factorials, the number of trailing zeroes 
// depends on the number of times 5 appears as a factor in the numbers from 1 to n.
//
// The loop works by:
// 1. Dividing n by 5 to count all multiples of 5 (e.g., 5, 10, 15, etc.), each contributing one factor of 5.
// 2. Dividing n by 25 to count multiples of 25 (e.g., 25, 50, etc.), which contribute an additional factor of 5.
// 3. Continuing this process for higher powers of 5 (like 125, 625, etc.) until n becomes less than 5.
// The result is the total number of factors of 5 in n!, which equals the number of trailing zeroes.

int main()
{
    int num = 36;
    int count = 0;

    while (num >= 5)
    {
        count += num/5; 
        num = num/5; 
    }
    cout<<count;
}