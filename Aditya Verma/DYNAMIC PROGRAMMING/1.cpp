

#include <bits/stdc++.h>
using namespace std;


int minimumChar(string S1, string S2)
{

	int n = S1.size(), m = S2.size();

	int ans = INT_MAX;


	for (int i = 0; i < m - n + 1; i++) {
		int minRemovedChar = 0;


		for (int j = 0; j < n; j++) {
			if (S1[j] != S2[i + j]) {
				minRemovedChar++;
			}
		}

	
		ans = min(minRemovedChar, ans);
	}


	return ans;
}


int main()
{
	string S2 = "codeforces";
	string S1 = "leetcode";

	cout << minimumChar(S1, S2);

	return 0;
}
