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


/*class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
  		int n = nums.size();
  		int res = 0;

  		for(int i = 0; i < n; i++){
  			int sum = 0;
  			for(int j = i; j < n; j++){
  				sum += nums[j];

  				if(sum == k) res++;
  			}
  		}

  		return res;
    }
};*/



class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {
		int n = nums.size();
		unordered_map<int, int> previousSum;

		int res = 0;
		int currentSum = 0;

		for (int i = 0; i < n; i++) {
			currentSum += nums[i];
			if (currentSum == k) res++;

			if (previousSum.find(currentSum - k) != previousSum.end()) {
				res += (previousSum[currentSum - k]);
			}

			previousSum[currentSum]++;
		}

		return res;
	}
};


int main(int argc, char const *argv[])
{

	file_i_o();

	clock_t start, end;
	start = clock();

	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int> nums(n);

	loop(i, 0, n-1){
		cin>>nums[i];
	}

	Solution s;

	cout<<s.subarraySum(nums, k)<<endl;


	end = clock();

	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cerr << "\nTime : " << fixed << time_taken << setprecision(5) << " s \n";
	cerr << "Coded by Mr. Black-D3vil" << endl;

	return 0;
}