typedef struct Node {
	int vertex;
	int weight;
};

class Graph
{
public:
	int V;
	Graph(int vertex);
	void addEdge(int i, int j, int weight);
private:
	list<Node>* adj;

};

Graph::Graph(int vertex) {
	this->V = vertex; // (V = vertex) ; 
	adj = new list<Node>[V + 1];
}

void Graph::addEdge(int i, int j, int weight)
{
	Node temp;
	temp.vertex = j;
	temp.weight = weight;
	adj[i].push_back(temp);

}