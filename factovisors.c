#include<stdio.h>
#include<string.h>
#include<math.h>
const int MAXN = 100005;
int vis[MAXN], prime[10000], num;
 
void get_prime () // find primes sieve
{
    num = 0;
    memset(vis, 0, sizeof(vis));
    for(int i = 2; i < MAXN; i++)
    {
        if(!vis[i])
        {
            prime[num++] = i;
            for(int j = i + i; j < MAXN; j += i)
                vis[j] = 1;
        }
    }
}
 
 int Cal (int w, int p) // w factorial is calculated how many pieces of p
{
    int ans = 0;
    while(w)
    {
        w /= p;
        ans += w;
    }
    return ans;
}
 
bool judge(int n, int m)
{
	int k = (int)sqrt(m+0.5);
    for(int i = 0; i < num && prime[i] <= k; i++)
    {
        if(m % prime[i] == 0)
        {
            int cnt = 0;
            while(m % prime[i] == 0)
            {
                cnt++;
                m /= prime[i];
            }
            if(Cal(n, prime[i]) < cnt) return false;
        }
         } // At this point if m! = 1, then m will be a prime number, assuming n> = m. Then m must be able divisible n!
    if(m > 1 && n < m) return false;
    return true;
}
 
int main()
{
    int n, m;
    get_prime();
    while(~scanf("%d%d",&n,&m))
    {
        if(judge(n, m)) printf("%d divides %d!\n", m, n);
        else printf("%d does not divide %d!\n", m, n);
    }
    return 0;
}
