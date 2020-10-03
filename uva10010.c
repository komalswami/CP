<pre>#include <iostream>
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

bool tryMatch(char charMat[50][50], int CR, int CC, int m, int n, int DR, int DC, char * Word)
{
	int i=CR, j = CC, k=0;
	for ( ;(i < m && j < n) && Word[k] != '\0'; i+= DR, j+= DC, k++)
		if (toupper(Word[k]) != toupper(charMat[i][j])) return false;

	if (Word[k] == '\0') return true;

	return false;

}

int Directions[8][2] = { {1,-1}, {0,-1}, {-1,-1}, {-1,0}, {-1,1}, {0,1}, {1,1}, {1,0}};
int main()
{

	int N,m,n;
	scanf("%d",&N);

	char CharMat[50][50];
	for(int i=0; i<N; i++)
	{
		scanf("%d %d\n",&m,&n);

		for (int j=0;j<m; j++)
				gets(CharMat[j]);
		int nWords;
		char Words[20][50];
		scanf("%d\n",&nWords);
		for (int j=0; j<nWords; j++)
			gets(Words[j]);

		for (int w=0; w<nWords; w++)
			for (int i=0; i<m; i++)
				for (int j=0; j<n; j++)
					if (toupper(CharMat[i][j]) == toupper(Words[w][0]))

						for (int k=0;k<8; k++)
							if (tryMatch(CharMat,i,j,m,n,Directions[k][0],Directions[k][1], Words[w]))
							{cout << i+1 << " " << j+1 << endl; k=8; j=n; i=m;}
				if (i != N-1) cout << endl;

	}

	return 0;

}
