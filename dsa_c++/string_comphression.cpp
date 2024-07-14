

#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s)
{

    int n = (int)s.length();

    vector<int> pi(n);

    for (int i = 1; i < n; i++)
    {

        int j = pi[i - 1];

        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }

    return pi;
}

void minLength(string s, int n)
{

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 10000));

    for (int l = 1; l <= n; l++)
    {
        for (int i = 0; i < n - l + 1; i++)
        {
            int j = i + l - 1;
            if (i == j)
            {
                dp[i][j] = 1;
                continue;
            }

            for (int k = i; k < j; k++)
            {
                dp[i][j] = min(dp[i][j],
                               dp[i][k] + dp[k + 1][j]);
            }

            string temp = s.substr(i, l);

            auto pref = prefix_function(temp);

            if (l % (l - pref[l - 1]) == 0)
            {

                dp[i][j] = min(dp[i][j],
                               dp[i][i + (l - pref[l - 1] - 1)]);
            }
        }
    }

    cout << dp[0][n - 1] << endl;
}

int main()
{

    string s = "deeeekshaaaa";
   int n=s.length();
    minLength(s, n);
}