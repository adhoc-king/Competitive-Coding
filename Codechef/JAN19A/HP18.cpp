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
#define memarr memset(arr, 0, sizeof(arr));
#define inp0(arr,n) for(int i=0; i<n; i++) cin>>arr[i];
#define sum0(arr,n) for(int i=0; i<n; i++) sum+=arr[i];
#define mem0(arr) memset(arr, 0, sizeof(arr));
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
    
    ll t,n,a,b,count;
    cin>>t;
    while(t--) {
        cin>>n>>a>>b;
        ll arr[n];
        arrinput;
        // count = 0;
        // ll x = a*b/gcd(a,b);
        int cx=0, ca=0, cb=0;
        for0(i,n) {
            if(arr[i]%a == 0 && arr[i]%b == 0) cx++;
            else if(arr[i]%a == 0) ca++;
            else if(arr[i]%b == 0) cb++;
        }
        if(cx==0) {
            if(ca > cb) cout<<"BOB\n";
            else cout<<"ALICE\n";
        }
        else {
            if(ca >= cb) cout<<"BOB\n";
            else cout<<"ALICE\n";
        }
    }


    return 0;
}
