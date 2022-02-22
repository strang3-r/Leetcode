/*Coded By Mr. Black-D3vil*/
#include <bits/stdc++.h>
#include <cassert>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
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
// #define all(n)             n.begin(),n.end()
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


class Bitset {
private:

	vector<int> bit;
	int cnt;  //stores the number of ones
	bool flip1;

public:
	Bitset(int size) { //constructure
		bit.resize(size);
		cnt = 0;
		flip1 = false;
	}

	void fix(int idx) {
		if (not flip1) {
			if (bit[idx] == 0) {
				bit[idx] = 1;
				cnt++;
			}
		}
		else {
			if (bit[idx] == 1) {
				cnt++;
				bit[idx] = 0;
			}
		}
	}

	void unfix(int idx) {
		if (not flip1) {
			if (bit[idx] == 1) {
				cnt--;
				bit[idx] = 0;
			}
		}
		else {
			if (bit[idx] == 0) {
				cnt--;
				bit[idx] = 1;
			}
		}
	}

	void flip() {
		// for(auto &it: bit) it = !it;  O(n)

		flip1 = not flip1;

		cnt = bit.size() - cnt;

		// Why we are not flipping the bit vector/array ?
	}

	bool all() {
		return cnt == bit.size();
	}

	bool one() {
		return cnt >= 1;
	}

	int count() {
		return cnt;
	}

	string toString() {
		string ans = "";
		if (not flip1) {
			for (auto it : bit) {
				if (it == 0) ans += '0';
				else ans += '1';
			}
		}
		else {
			for (auto it : bit) {
				if (it == 0) ans += '1';
				else ans += '0';
			}
		}

		return ans;
	}
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */



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