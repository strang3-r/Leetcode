/*Coded By Mr. Black-D3vil*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ff                 first
#define ss                 second
#define endl               "\n"
#define ll                 long long
#define ld                 long double
#define loop(a, b, c)      for(ll (a) = (b); (a)<=(c); (a)++)
#define looprev(a, b, c)   for(ll (a) = (b); (a)>=(c); (a)--)
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define mii                map<ll, ll>
#define pqb                priority_queue<ll>
#define pqs                priority_queue<int, vi, greater<ll> >
#define Unique(c)          (c).resize(unique(all(c))-(c).begin())
#define all(n)             n.begin(),n.end()
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(t)               int x; cin>>x; while(x--)
//mt19937                    rng(chrono::steady_clock::now,time_since_epoch(),count());
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;

const ll maxn = 1e5 + 5;


void file_i_o() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	/* #ifndef ONLINE_JUDGE
			freopen("//home//blackd3vil//Desktop///InputOutput//input.txt", "r", stdin);
			freopen("//home//blackd3vil//Desktop//InputOutput//output.txt", "w", stdout);
		#endif */
}

class Solution {
public:
	int minimumSum(int n) {
		vector<int> digits;
		for (int t = n; t; t /= 10) digits.push_back(t % 10);
		sort(digits.begin(), digits.end());

		int ret = 1e9;

		do {
			int sum = 0;
			int x = digits[0]*10 + digits[1];
			int y = digits[2]*10 + digits[3];

			int curr = x+y;

			ret = min(ret, curr);		
		}while(next_permutation(digits.begin(), digits.end()));

		return ret;
	}
};


int main(int argc, char const *argv[])
{

	file_i_o();

	clock_t start, end;
	start = clock();




	end = clock();

	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cerr << "\nTime : " << fixed << time_taken << setprecision(5) << " s \n";
	cerr << "Coded by Mr. Black-D3vil" << endl;

	return 0;
}