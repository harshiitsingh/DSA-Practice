#ifndef Avash_Local_Machine
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt,bmi,bmi2,lzcnt")
#endif
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
#define int long long
#define f(i,begin,end) for(int i=(begin)-((begin)>(end));i!=(end)-((begin)>(end));i+=1-2*((begin)>(end)))
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define prq priority_queue
#define sz(x) (int)x.size()
#define w(t) int t; cin>>t; f(i,1,t+1) { solve(i);}
#define w1 solve(1);
#define ppc __builtin_popcountll

// using namespace __gnu_pbds;
using namespace std;

using pii = pair<int, int>;

// template<typename T>
// using oset =  tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//1. order_of_key(k) : number of elements strictly lesser than k
//2. find_by_order(k) : k-th element in the set

#ifdef Avash_Local_Machine
// #include "debug.h"
#else
#define debug(x...)
#endif

const int INF = (int)(1e16);
const double PI = 3.141592653589793;
int MOD = 1e9 + 7;

const int dx[4] = { -1, 0, 1, 0}, dy[4] = {0, 1, 0, -1}, dx8[8] = { -1, -1, -1, 0, 0, 1, 1, 1}, dy8[8] = { -1, 0, 1, -1, 1, -1, 0, 1};
string path = "URDL";

// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v) { for (auto &it : v) cin >> it; return istream; }
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// #define SIZE (int)(200010)
// vector<int> adj[SIZE];
// vector<pii> adj[SIZE];
// vector<int> vis(SIZE , false);
// vector<int> dis(SIZE , INF);

/**
*Add 0LL in accumulate
*/

void solve(int tc) {
    
    vector<int> b(4);
    cin>>b;
    cout<<b<<"\n";
    // debug(a,b);
}


int32_t main()
{

	fastio
#ifdef Avash_Local_Machine
	clock_t begin = clock();
#endif

	// cout.precision(10); cout << fixed;
	w(t)
	// w1


#ifdef Avash_Local_Machine
	clock_t end = clock();
	cerr << "Executed In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms\n";
#endif

	return 0;
}