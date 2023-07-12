// C++ program to print DFS traversal from
#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
	map<int, bool> visited;
	map<int, list<int> > adj;

	void addEdge(int v, int w)
    {
        adj[v].push_back(w);
    }

	void DFS(int v)
    {

        visited[v] = true;
        cout<<v<<" ";

        list<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
    }
};


int main()
{
	Graph g;
	g.addEdge(1, 2);
	g.addEdge(1, 4);
	g.addEdge(2, 3);
	g.addEdge(2, 4);
	g.addEdge(3, 5);
	g.addEdge(4, 3);
	g.addEdge(5, 4);

	cout << "Following is Depth First Traversal"
			" (starting from vertex 1) \n";

	g.DFS(2);

	return 0;
}

// improved by Vishnudev C
