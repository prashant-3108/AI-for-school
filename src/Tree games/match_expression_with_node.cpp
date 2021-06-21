//Implementation of the match expression with node game

#include <bits/stdc++.h>
#include "tree_generator.h"

using namespace std;

vector<pair<string,int>> expressions;

void display_tree()
{
	for(int i=0;i<adj.size();i++)
	{
		cout<<i<<" "<<content[i]<<" ";
		for(auto it:adj[i])
		{
			cout<<it<<" ";
		}
		cout<<"\n";

	}
}

string compute_expressions(int node)
{
	if(adj[node].size()==0)
	{
		expressions[node]={content[node],node};
		return content[node];
	}
	string ans="( ";
	ans+=compute_expressions(adj[node][0])+" ";
	ans+=content[node]+" ";
	ans+=compute_expressions(adj[node][1])+" ";
	ans+=") ";
	expressions[node]={ans,node};
	return ans;
}

int main()
{
	int num_var=5;
	init(num_var);
	generate_tree();
	assign_content();
	display_tree();

	int num_node=adj.size();
	expressions.resize(num_node);
	compute_expressions(0);
	random_shuffle(expressions.begin(),expressions.end());
	
	for(int i=0;i<num_node;i++)
	{
		if(adj[expressions[i].second].size()!=0)
			cout<<expressions[i].first<<"\n";
	}

	cout<<"Match each expression with corresponding node number : \n";
	bool correct=1;
	for(int i=0;i<num_node;i++)
	{
		if(adj[expressions[i].second].size()==0)
			continue;
		int n;
		cin>>n;
		if(n!=expressions[i].second){
			correct=0;
			break;
		}
	}
	if(correct)
		cout<<"CORRECT\n";
	else{
		cout<<"WRONG\nCorrect order: \n";
		for(int i=0;i<num_node;i++)
		{
			if(adj[expressions[i].second].size()!=0)
				cout<<expressions[i].second<<"\n";
		}
	}
}