/** Adnan H Rahin
    Computer Science Dept,
    LaGuardia Community College, CUNY.
**/

#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <list>
#include <cstddef>
#include <cstdlib>
#include <cctype>
#include <iostream>
#include <ctime>
using namespace std;

#define INF_MAX 	2147483647
#define INF_MIN 	-2147483648
#define pb push_back
#define all(x) x.begin(),x.end()
#define distSqr(x1,y1,x2,y2) (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)
#define dist(x1,y1,x2,y2) sqrt(distSqr(x1,y1,x2,y2))
#define Set(x,v) memset(x,v,sizeof x)
#define For(i,s,e) for(i=s;i<=e;i++)
#define lb lower_bound
#define ub upper_bound
#define gcd(a,b) __gcd(a,b)
#define pi acos(-1)
#define mp make_pair
#define pos first
#define val second
#define error 1e-12
#define mod 1000000007
#define nl printf("\n")
#define N 100000

typedef long long ll;

using namespace std;

int main()
{
    //vector < int > myvector;

    int n,factorial[N],m,temp,x;

    cin >> n;

    factorial[0]= 1,m = 1,temp = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<m; j++)
        {
            x = factorial[j]*i+temp;
            factorial[j]=x%10;
            temp = x/10;
        }
        while(temp>0)
        {
            factorial[m]=temp%10;
            temp = temp/10;
            m++;
        }
    }
    for(int i=m-1; i>=0; i--)
        cout << factorial[i];

    cout << endl;
    return 0;
}
