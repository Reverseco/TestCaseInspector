#include<bits/stdc++.h>
using namespace std;

#define             fast  cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#define             test ll t; cin>>t; while(t--)
#define             loop(i,a,b) for(ll i=a;i<b;i++)
#define             loopr(i,a,b) for(ll i=a;i>=b;i--)
#define             mod1 998244353
#define             mod 1000000007
#define             INF 1e18
#define             pb push_back
#define             pp pop_back
#define             all(X) X.begin(),X.end()
#define             allr(X) X.rbegin(),X.rend()
#define             vi vector<int>
#define             vl vector<ll>
#define             F first
#define             S second
#define             yes cout << "YES" << endl
#define             no cout << "NO" << endl
#define             ivec vector<ll>v(n);loop(i,0,n) cin>>v[i];
typedef             long long int ll;
typedef             unsigned long long ull;
typedef             long double lld;
ll power(ll base, ll expo){ll ans = 1;while(expo){if(expo & 1LL)ans = (ans * base) % mod;base = (base * base) % mod;expo >>= 1LL;}return ans;}
ll modinv(ll x){return power(x, mod-2);}
ll C(ll n, ll r){if(r > n) return 0;ll ans = 1;for(ll i=0; i<r; i++)ans = (((ans * (n-i))%mod) * modinv(i+1))%mod;return ans;}
void fact_table(vector<ll> &fact){fact[0] = 1;for(ll i=1; i<fact.size(); i++) {fact[i] = (i * fact[i-1]) % mod;}}
vector<ll> get_factors(ll n) {vector<ll> factors;for(ll i=2; i*i<=n ;i++) {if(n%i == 0) {factors.push_back(i);if(i * i != n)factors.push_back(n/i);}}sort(factors.begin(), factors.end());return factors;}
ll get_lcm(ll a, ll b) {return (a*b)/__gcd(a,b);}
bool is_prime(ll n) {if(n < 2) return false;if(n == 2) return true;for(ll i=2; i*i <= n; i++)if(n % i == 0)return false;return true;}
bool is_vowel(char ch) {return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}

#ifndef ONLINE_JUDGE
#define print(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define print(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void solv(){
     ll n; cin>>n;
     ivec;
     ll ct=0;
     // print(v);
     while(true){
        vector<ll>z=v;
        for(ll i=n-1;i>=0;i--){
            if(i==n-1){
                v[i]=max(0ll,v[i]-1);
            }else if(v[i]>z[i+1]){
                v[i]=max(0ll,v[i]-1);
            }
        }
        ct++;
        if(v==vector<ll>(n,0)) break;
     }
     cout<<ct;
}
     
int main(){
       solv();
       cout<<endl;
}

