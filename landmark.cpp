#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll down[200005];
ll up[200005];
bool pr[200005];

ll kk(vector<ll> vv)
{

    ll n = vv.size();

    ll sum = 0;
    ll i = 0;
    while (i < n)
    {

        sum = sum + vv[i];

        i++;
    }
    ll G = sum;
    ll rr = G;

    i = 0;
    while (i < n)
    {

        G = G - vv[i];
        ll p5 = vv[i];
        ll gg = vv[i] * G;
        rr += (gg);

        i++;
    }

    return rr;
}

void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
        {
            pr[p] = true;
            //   cout << p << " ";
        }
}

void dfs_down(ll node, vector<ll> &used, vector<ll> G[], vector<ll> &p)
{
    used[node] = 1;
    // cout<<node;
    // cout<<"\n";

    for (auto u : G[node])
    {
        if (used[u] == 0)
        {
            p[u] = node;
            dfs_down(u, used, G, p);
        }
        else
        {
        }
    }

    ll sz = 1;
    ;
    ll cc = 0;
    ll oo = 0;
    for (auto u : G[node])
    {
        if (u != p[node])
        {
            if (pr[u] != true)
            {
                cc += (1 + down[u]);
            }
            else
            {
            }
            // sz+=rm[u]; //oo = (b[u])^(oo);
        }
        else
        {
        }
    }
    down[node] = cc;
    // rm[node] = sz ;
    cout << node;
    cout << " ";
    cout << down[node];
    cout << "\n";
}

int main()
{
    SieveOfEratosthenes(200005);
    ll n;
    cin >> n;
    vector<ll> G[n + 5];
    ll i = 1;
    while (i <= n - 1)
    {
        ll x, y;
        cin >> x >> y;
        G[y].push_back(x);
        G[x].push_back(y);
        i++;
    }
    vector<ll> used(n + 5, 0);
    vector<ll> p(n + 5, 0);
    dfs_down(1, used, G, p);

    vector<bool> visited;
    visited.resize(n + 5, false);

    cout << '\n';
    int s = 1;
    queue<int> q;
    visited[1] = true;
    q.push(s);

    while (!q.empty())
    {
        // Dequeue a vertex from queue and print it
        s = q.front();

        q.pop();

        int parent = p[s];

        int d = 0;

        if (pr[s] != true)
        {
            d = down[s];
            d++;
        }

        if (parent != -1)
        {

            ll gg = up[parent];
            gg++;
            if (pr[parent] != true)
            {

                gg = gg + down[parent] - d;
                up[s] = gg;
            }
        }

        cout << s << " " << up[s];
        cout << "\n";

        for (auto adjecent : G[s])
        {
            if (!visited[adjecent])
            {
                visited[adjecent] = true;
                q.push(adjecent);
            }
        }
    }

    i = 1;
    ll rr = 0;
    while (i <= n)
    {
        if (pr[i] == true)
        {
            rr = rr + down[i] * up[i];
            vector<ll> v;
            for (auto u : G[i])
            {
                if (u != p[i])
                {
                    if (pr[u] != true)
                    {
                        v.push_back(1 + down[u]);
                    }
                }
            }

            rr = rr + kk(v) + up[i];
        }

        i++;
    }

    cout << rr;

    /*
5
1 2
2 3
3 4
3 5
*/

    return 0;
}