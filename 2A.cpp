#include<bits/stdc++.h>
using namespace std;
struct harsh
{
	string name;
	int score;
	int first;
};
void swipe(harsh a;harsh b)
{
	harsh temp;
	temp=a;
	a=b;
	b=temp;
 } 
void 
int main()
{
	int n;
	int j=0;
	harsh people[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		harsh temp;
		scanf("%s %d",&temp.name,&temp.score);
		for(int k=0;k<=j;k++)
		{
			if(temp.name==people[k].name)
			{
				people[k].score=people[k].score+temp.score;		
			}else{
				j++;
				people[j]=temp;
				people[j].first=people[j].score;
			}
		}
	}

	
 } 
