#include<iostream>
#include<vector>
#include<set>

using namespace std;

int n,m;
int Credits[16];
int Prerequisites[16][16];
vector<vector< int > > Results;
vector<set<int> > Tien_quyet;

void input()
{
	cin >> n >> m;
	int i,j;
	for(i = 0; i < n; i++)
		cin >> Credits[i];

	for(i = 0; i < n; i++)
	{
		for(j = 0; j< n; j++)
		{
			cin >> Prerequisites[i][j];
		}
	}
}

bool isValid(int period, int course)
{
	int i,j;
	for(i = 0; i <= period; i++)
	{
		for(j = 0; j < Results[i].size(); j ++)
		{
			int r = Results[i][j];
			if(Prerequisites[course][r] == 1)
				return false;
		}
	}
	for(i = period + 1; i < m; i++)
	{
		for(j = 0; j < Results[i].size(); j ++)
		{
			int r = Results[i][j];
			if(Prerequisites[r][course] == 1)
				return false;
		}
	}
	return true;
}

int maxSumPeriod()
{
	int i,j;
	int maxSum = 0;
	for(i  = 0; i<Results.size(); i++)
	{
		int sum = 0;
		for(j = 0; j < Results[i].size(); j++)
		{
			sum+= Credits[Results[i][j]] ;
		}
		maxSum = max(sum, maxSum);
	}
	return maxSum;
}

void BACP(int count, int &ans)
{
	int i,j;
	if(count == n)
	{
		ans = min(ans, maxSumPeriod());
		return;
	}
	for(i = count; i < n; i++)
	{
		int tmp = 0;
		for(j = 0; j < m; j++)
		{
			if(isValid(j, i)){
				if(j == m - 1)
					tmp = m;
				Results[j].push_back(i);
				count ++;


				BACP(count, ans);
				Results[j].pop_back();
				tmp ++;
				count --;


			}
			else{
				tmp ++;
			}
		}
		if(tmp >= m)
			break;
	}
}

int main()
{
	input();
	int i,j;
	for(i = 0; i < m; i++)
	{
		vector<int> v;
		Results.push_back(v);
	}
	for(i = 0; i < m; i++)
	{
		set<int> s;
		Tien_quyet.push_back(s);
	}
	int ans = 999999;

	BACP(0, ans);
	cout << ans;
	return 0;
}
