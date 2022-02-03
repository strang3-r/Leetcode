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


class Solution { //Time Complexity O(log(m+n)) m,n --> size of array
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		if (nums2.size() < nums1.size())
			return findMedianSortedArrays(nums2, nums1);

		int lo = 0, hi = nums1.size();
		while (lo <= hi)
		{
			int cut1 = (lo + hi) / 2;
			int cut2 = (nums1.size() + nums2.size() + 1) / 2 - cut1;
			int left1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
			int left2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];

			int right1 = cut1 == nums1.size() ? INT_MAX : nums1[cut1];
			int right2 = cut2 == nums2.size() ? INT_MAX : nums2[cut2];

			if (left1 <= right2 and left2 <= right1)
			{
				if ((nums1.size() + nums2.size()) % 2 == 0)
					return (max(left1, left2) + min(right1, right2)) / 2.0;
				else
					return max(left1, left2);
			}
			else if (left1 > right2)
			{
				hi = cut1 - 1;
			}
			else
				lo = cut1 + 1;
		}
		return 0.0;
	}
};


int main(int argc, char const *argv[]) {

	file_i_o();

	clock_t start, end;
	start = clock();





	end = clock();

	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cerr << "\nTime : " << fixed << time_taken << setprecision(5) << " s \n";
	cerr << "Coded by Mr. Black-D3vil" << endl;

	return 0;
}