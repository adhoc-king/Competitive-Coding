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

int arr[1005][1005];
int visited[1005][1005];
int n, m, z, maxc=-1, mins=MOD, coun;

void floodFillUtil(int x, int y, int prevC) 
{ 

    // cout<<x<<" "<<y<<endl;
    // Base cases 
    if (x < 0 || x >= n || y < 0 || y >= m) 
        return; 
    if (arr[x][y] != prevC) 
        return; 
    if(visited[x][y]) return;
    visited[x][y] = 1;
    coun++;
  
    // Recur for north, east, south and west 
    floodFillUtil(x+1, y, prevC); 
    floodFillUtil(x-1, y, prevC); 
    floodFillUtil(x, y+1, prevC); 
    floodFillUtil(x, y-1, prevC); 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n>>m;
    for0(i,n) for0(j,m) cin>>arr[i][j];
    memset(visited, 0, sizeof(visited));
    for0(i,n) {
        for0(j,m) {
            // cout<<i<<" "<<j<<endl;
            if(!visited[i][j]) {
                z = arr[i][j];
                coun = 0;
                floodFillUtil(i, j, z);
                if(coun>maxc) {
                    maxc = coun;
                    mins = z;
                }
                else if(coun==maxc) {
                    if(z < mins) {
                        mins = z;
                    }
                }
            }
        }
    }
    cout<<mins<<" "<<maxc;

    return 0;
}
