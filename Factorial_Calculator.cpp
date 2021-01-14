#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int i,y=1,n;                /*  Variable Declaration  */

    cin >> n;                   /*  User Input  */

    if(n>0 && n<10)
    {
        for(i=1; i<=n; i++)
        {
            y = y*i;            /*  n! = n * (n-1) *... * 1  */
        }
        if(y>1 && y<3628800)
        {
            cout<< y << endl;   /*  Output  */
        }
    }

    return 0;
}
