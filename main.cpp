#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    if (n==1 || n==0)
    {
        cout << -1 ;
    }
    for(int i = 1 ; i<=n;i++)
    {
        if(i%2==0)
        {
            cout << i << endl;
        }


    }

    return 0;
}
