#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <cmath>
#include <map>
#include <queue>
#include <functional>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> Dictionary;
int Mappings[2][128];

void initMappings()
{
    for (int j=0; j<2; j++) for (int i=0; i<128; i++) Mappings[j][i] = '*';
}

bool MapWord(string DWord, string TWord)
{
    int OriginalMappings[2][128];
    for (int j=0; j<2; j++) for (int i='a'; i<='z'; i++) OriginalMappings[j][i] = Mappings[j][i];

    for (int i=0; i<(int)DWord.length(); i++)
        if ( (Mappings[0][DWord[i]] == '*' && Mappings[1][TWord[i]] == '*')
            || (Mappings[0][DWord[i]] == TWord[i] && Mappings[1][TWord[i]] == DWord[i]))
            Mappings[0][DWord[i]] = TWord[i],  Mappings[1][TWord[i]] = DWord[i];
        else
            {
                for (int j=0; j< 2; j++) for (int i='a'; i<='z'; i++) Mappings[j][i] = OriginalMappings[j][i];
                return false;
            }
    return true;
}
bool match(vector<string> splitTokens, int start)
{
    int OriginalMappings[2][128];
    for (int j=0; j<2; j++) for (int i='a'; i<='z'; i++) OriginalMappings[j][i] = Mappings[j][i];

    for (int i=0; i<Dictionary.size(); i++)
    {
        if (splitTokens[start].length() == Dictionary[i].length())
            {
                if (MapWord(Dictionary[i], splitTokens[start]))
                {
                    if (start == splitTokens.size()-1) return true;

                    if (match(splitTokens, start+1)) return true;
                    else for (int j=0; j< 2; j++)
                        for (int i='a'; i<='z'; i++)
                            Mappings[j][i] = OriginalMappings[j][i];
                }
            }
    }

    return false;
}

void outputModified(vector<string> splitTokens)
{

    for (int i=0; i<splitTokens.size(); i++)
    {
        for (int j=0; j<(int)splitTokens[i].length(); j++) cout << (char)Mappings[1][splitTokens[i][j]];

        if (i != splitTokens.size()-1) cout << " ";
    }
}

bool compareStrings(string S1, string S2)
{
    return (int)S1.length() > (int)S2.length();
}
int main()
{
    int n;
    scanf("%d\n",&n);
    char input[93];

    for (int i=0; i<n; i++)
    {
        string token;
        char T[100];
        cin>>T;
        token = T;
        Dictionary.push_back(token);
    }
    scanf("\n");

    while(fgets(input, 93,stdin)!= NULL)
    {
        string token;
        stringstream s(input);
        vector<string> splitTokens;
        while(s >> token)
        {
            splitTokens.push_back(token);
        }
        if (splitTokens.size() == 0) {cout << endl; continue;}
        initMappings();
        vector<string> sortedSplitTokens;
        for (int i=0; i<splitTokens.size(); i++) sortedSplitTokens.push_back(splitTokens[i]);
        sort(sortedSplitTokens.begin(), sortedSplitTokens.end(), compareStrings);
        match(sortedSplitTokens,0);
        outputModified(splitTokens);
        cout << endl;

    }

    return 0;
}
