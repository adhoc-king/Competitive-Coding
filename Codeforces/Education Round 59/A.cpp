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
#define sumarr for(int i=0; i<n; i++) sum+=arr[i];
#define for0(i,n) for(int i=0; i<n; i++)
#define for1(i,n) for(int i=1; i<=n; i++)
#define forr(i,n) for(int i=n-1; i>=0; i--)

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<ll> vi;
typedef vector<vector<int>> vvi;
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

    int q, n;
    cin>>q;
    string str;
    while(q--) {
        cin>>n>>str;
        if(n==2) {
            if(str[0] >= str[1]) {
                cout<<"NO\n";
            }
            else {
                cout<<"YES\n";
                cout<<2<<"\n";
                cout<<str[0]<<" "<<str[1]<<"\n";
            }
        }
        else {
            cout<<"YES\n";
            cout<<2<<"\n";
            cout<<str[0]<<" ";
            for1(i,n-1) cout<<str[i];
            cout<<"\n";
        }

    }

    return 0;
}
