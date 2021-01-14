#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

void fibonacci(int n)
{
    int ft=0,st=1,sum=0;
    for(int i=1; i<=n; i++)
    {
        if(i==1)
        {
            cout << ft << ",";
            continue;
        }
        else if(i==2)
        {
            cout << st << ",";
            continue;
        }

        sum = ft + st;
        ft = st;
        st = sum;

        cout << sum << ",";
    }
}
int main()
{
    int i,n;                /*  Variable Declaration  */

    cin  >> n;
    if(n>1 && n<20)
    {
       fibonacci(n);        /*Fibonacci Operation function*/
    }
    return 0;
}
