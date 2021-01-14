
#include <bits/stdc++.h>
#include <stdlib.h>
#include<string.h>

using namespace std;

bool EvenPalindrome(string str, int first, int last)
{
    if (first >= last)
        return true;

    if (str[first] != str[last])
        return false;

    if (str.length()%2!=0)
        return false;

    return EvenPalindrome(str, first + 1, last - 1);
}

bool OddPalindrome(string str, int first, int last)
{

    if (first >= last)
        return true;


    if (str[first] != str[last])
        return false;


    if (str.length()%2==0)
        return false;


    return OddPalindrome(str, first + 1, last - 1);
}
int main()
{
    string str;
    getline (cin, str);
    transform(str.begin(), str.end(), str.begin(), ::toupper); //Ignoring Case

    int len = str.length();

    if (EvenPalindrome(str, 0, len - 1))
        cout << "Even Palindrome";
    else if (OddPalindrome(str, 0, len - 1))
        cout << "Odd Palindrome";
    else
        cout << "Not a Palindrome";

    return 0;
}
