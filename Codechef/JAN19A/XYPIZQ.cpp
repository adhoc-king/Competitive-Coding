/**
*    Username : adhoc_king
*    Name : adhoc_king
*/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define scani(n) scanf("%d",&n);
#define EPS 1e-9
#define FOR(i,n) for(int i=0; i<n; i++)
#define X first
#define Y second
#define arrinput for(int i=0; i<n; i++) cin>>arr[i];
#define arrsum for(int i=0; i<n; i++) sum+=arr[i];
#define for0(i,n) for(int i=0; i<n; i++)
#define for1(i,n) for(int i=1; i<=n; i++)
#define forr(i,n) for(int i=n-1; i>=0; i--)

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

const int MOD = 1e9+7;
const int n_ = 1e5+1000;
const long double PI = acos(-1.0);

ll gcd (ll a, ll b) {return ( a ? gcd(b%a, a) : b );}
ll power(ll a, ll n) {ll p = 1;while (n > 0) {if(n%2) {p = p * a;} n >>= 1; a *= a;} return p;}
ll power(ll a, ll n, ll mod) {ll p = 1;while (n > 0) {if(n%2) {p = p * a; p %= mod;} n >>= 1; a *= a; a %= mod;} return p % mod;}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, t;
    ll n, x, y, z, a, b, d;
    cin>>T;
    while(T--) {
        cin>>n>>t>>x>>y>>z;
        b = 2*n + 1;
        if(t==1) {
            if(y==x+1) {
                if(z==y-1) {
                    a = x;
                }
                else if(z==y+1) {
                    a = 2*n - x - 1;
                }
                else if(z==y) {
                    a = y;
                }
            }
            else if(y==x-1) {
                if(z==y+1) {
                    a = x;
                }
                else if(z==y-1) {
                    a = 2*n - x + 3;
                }
            }
        }
        else if(t==2) {
            // cout<<"Asd\n";
            a = 2*n + 1 - 2*y;
        }
        else if(t==3) {
            if(x==0) {
                a = 1;
                b = 1;
            }
            else if(y==x+1) {
                if(z==y+1) {
                    a = 2*n + 1 - x;
                }
                else if(z==y-1) {
                    a = x;
                }
            }
            else if(y==x-1) {
                if(z==y+1) {
                    a = x;
                }
                else if(z==y-1) {
                    a = 2*n + 1 - x;
                }
            }
            else if(y==x) {
                a = 2*n + 1 - x;
            }
        }
        else if(t==4) {
            a = 2*n + 1 - 2*y;
        }
        d = gcd(a,b);
        cout<<a/d<<" "<<b/d<<"\n";
    }
    

    return 0;
}
