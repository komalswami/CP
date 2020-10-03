#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <time.h>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define E 2.71828182845904523536
#define long long LL
using namespace std;
 
 
map<string, vector<string> > AdjMat;
bool areDoublets(string a, string b)
{
    int diff=0;
    for (int i=0; i<a.length(); i++)
        if (a[i] != b[i] && ++diff > 1) return false; 
     
 
    return true;
     
}
void computeAdjMat(vector<string> entries)
{
    for (int i=0; i<entries.size(); i++)
        for (int j=i+1; j<entries.size(); j++)
            if (areDoublets(entries[i],entries[j]))
            {
                AdjMat[entries[i]].push_back(entries[j]);
                AdjMat[entries[j]].push_back(entries[i]);
            }
 
         
     
}
 
struct Node
{
    string word;
 
    Node * Parent;
};
 
 
vector<string> shortestPath(string src, string dest)
{
    map<string, string> ParentOf;
    queue<string> ToVisit;
    ToVisit.push(src);
 
    ParentOf[src] = "";
    bool found=false;
    while(!ToVisit.empty())
    {
        string v = ToVisit.front();
        ToVisit.pop();
        for (int i=0; i<AdjMat[v].size(); i++)
        {
            if (ParentOf.find(AdjMat[v][i]) == ParentOf.end())
                {
                    ToVisit.push(AdjMat[v][i]);
                    ParentOf[AdjMat[v][i]] = v;
                    if (AdjMat[v][i] == dest)
                    {
                        found = true;
                        break;
                    }
                }
        }
 
        if (found) break;
    }
 
    vector<string> result;
 
    if (!found)
    {
        result.push_back("No solution.");
        return result;
    }
 
    string next = dest;
    do
    {
        result.push_back(next);
        next = ParentOf[next];
    }while(result.back() != src);
 
 
    return result;
}
int main()
{
    bool CmptedAdjMat[50] = {false};
    char Input[50];
    vector<string> Dictionary[50];
    int counter=0;
    while(1)
    {
        gets(Input);
 
        if (strcmp(Input,"") == 0) break;
        Dictionary[strlen(Input)].push_back(Input);
 
    }
 
    while(gets(Input) != NULL)
    {
        counter++;
        if (counter > 1) cout << endl;
        string src,dest;
        stringstream s(Input);
        s >> src >> dest;
 
        if (src.length() != dest.length()) cout << "No solution.\n";
        else
        {
            if (!CmptedAdjMat[src.length()])
            {
                CmptedAdjMat[src.length()] = true;
                computeAdjMat(Dictionary[src.length()]);
            }
 
            vector<string> results = shortestPath(src,dest);
 
            for (int i=results.size()-1; i>=0; i--)
            {
                cout << results[i] << endl;
            }
 
        }
 
    }
    return 0;
 }
