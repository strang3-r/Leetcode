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


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		// iterative

		if (l1 == NULL) return l2;
		if (l2 == NULL) return l1;

		if (l1->val > l2->val) {
			ListNode* tmp = l1;
			l1 = l2;
			l2 = tmp;
		}

		ListNode* res = l1;
		while (l1 != NULL and l2 != NULL) {
			ListNode* tmp = NULL;
			while (l1 != NULL and l1->val <= l2->val) {
				tmp = l1;
				l1 = l1->next;
			}
			tmp->next = l2;

			ListNode* temp = l1;
			l1 = l2;
			l2 = temp;
		}

		return res;
	}
};


int main(int argc, char const *argv[])
{

	file_i_o();

	clock_t start, end;
	start = clock();


	int n, m;
	cin >> n >> m;

	list<int> l1;
	for (int i = 0; i < n; i++) {
		l1.pb(i);
	}

	list<int> l2;
	for (int i = 0; i < m; i++) {
		l2.pb(i);
	}

	Solution s;

	cout << s.mergeTwoLists(l1, l2);


	end = clock();

	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cerr << "\nTime : " << fixed << time_taken << setprecision(5) << " s \n";
	cerr << "Coded by Mr. Black-D3vil" << endl;

	return 0;
}