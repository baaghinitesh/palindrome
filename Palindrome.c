#include<stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) 
{
    x=121;
    if (x < 0) {
        // Negative numbers are not palindromes
        return false;
    }

    int num1 = x;
    int reverseNum = 0;
    int temp = x;

    while (temp != 0) {
        int digit = temp % 10;
        reverseNum = reverseNum * 10 + digit;
        temp = temp / 10;
    }

    // Check if the reversed number is equal to the original number
    return reverseNum == x;
}
