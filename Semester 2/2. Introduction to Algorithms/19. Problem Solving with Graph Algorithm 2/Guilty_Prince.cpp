#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
char a[500][500];
bool vis[500][500];
int cnt = 0;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '#')
        return false;
    return true;
}
void dfs(int si, int sj)
{
    // cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
            cnt++;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        cin >> m >> n;
        cnt = 0;
        int si, sj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '@')
                {
                    si = i;
                    sj = j;
                }
            }
        }
        memset(vis, false, sizeof(vis));
        dfs(si, sj);
        cout <<"Case "<<i<<": "<< cnt+1 << endl;
        i++;
    }
}