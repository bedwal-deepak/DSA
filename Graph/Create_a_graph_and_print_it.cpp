// Create a graph and print it
#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int>adj[], int src, int dest)
{
	adj[src].push_back(dest);
	adj[dest].push_back(src);
}
void printGraph(vector<int> adj[], int n)
{
	for (int v = 0; v < n; ++v)
	{
		cout << "Adjacency list of vertex " << v << " is:-";
		for (auto val : adj[v])
		{
			cout << "->" << val;
		}
		cout << endl;
	}
}
int main(int argc, char**)
{
	int n, e;
	cout << "Enter the no of vertices:-";
	cin >> n;
	cout << "Enter the no of edges:-";
	cin >> e;
	vector<int> adj[n];
	cout << "Enter all edges:-" << endl;
	for (int i = 0; i < e; ++i)
	{
		int src, dest;
		cin >> src >> dest;
		addEdge(adj, src, dest);
	}
	printGraph(adj, n);
	return 0;
}