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


/**
 * Definition for singly-linked list.
 * struct ListNode{
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int v1 = 0;
		int v2 = 0;
		int sum = 0;
		int carry = 0;

		ListNode* sumHead = new ListNode(-1);
		ListNode* ptr = sumHead;

		while (l1 != NULL or l2 != NULL) {
			if (l1 != NULL) {
				v1 = l1->val;
				l1 = l1->next;
			}
			else {
				v1 = 0;
			}
			if (l2 != NULL) {
				v2 = l2->val;
				l2 = l2->next;
			}
			else {
				v2 = 0;
			}

			sum = v1 + v2 + carry;

			carry = sum / 10;

			sum = sum %10;

			ListNode* temp = new ListNode(sum);

			ptr->next = temp;
			ptr = ptr->next;
		}

		if(carry != 0){
			ListNode* temp = new ListNode(carry);
			ptr->next = temp;
		}

		return sumHead->next;
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