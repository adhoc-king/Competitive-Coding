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

// void binary_search(ll a, ll b, ll flag) {
//     ll la, lb, ha, hb, ma, mb;
//     if(flag) {
//         cout<<"R";
//         la = 1; lb = 1;
//         ha = 1; hb = 0;
//     }
//     else {
//         cout<<"L";
//         la = 0; lb = 1;
//         ha = 1; hb = 1;
//     }
//     while(la*hb < lb*ha) {
//         ma = (la+ha);
//         mb = (lb+hb);
//         // cout<<" "<<la<<" "<<lb<<" "<<ma<<" "<<mb<<" "<<ha<<" "<<hb<<"\n";
//         if(a*mb == b*ma) break;
//         if(a*mb < b*ma) {
//             cout<<"L";
//             ha = ma;
//             hb = mb;
//         }
//         else {
//             cout<<"R";
//             la = ma;
//             lb = mb;
//         }
//     }
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        int arr[n];
        arrinput;
        ll sum = 0;
        for0(i,n) {
            if(arr[i]==-1) {
                arr[i] = sum/(i);
            }
            cout<<arr[i]<<" ";
            sum += arr[i];
        }
        cout<<"\n";
    }

    return 0;
}
