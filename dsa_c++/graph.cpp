#include <bits/stdc++.h>
using namespace std;

class Graph
{
private:
    bool **adjMx;
    int nVertices;

public:
    Graph(int nVertices)
    {
        this->nVertices = nVertices;
        adjMx = new bool *[nVertices];
        for (int i = 0; i < nVertices; i++)
        {
            adjMx[i] = new bool[nVertices];
            for (int j = 0; j < nVertices; j++)
            {
                adjMx[i][j] = false;
            }
        }
    }

    void addEdge(int i, int j)
    {
        adjMx[i][j] = true;
        adjMx[j][i] = true;
    }

    void removeEdge(int i, int j)
    {
        adjMx[i][j] = false;
        adjMx[j][i] = false;
    }
    void toString()
    {
        for (int i = 0; i < nVertices; i++)
        {
            cout << i << " : ";
            for (int j = 0; j < nVertices; j++)
            {
                cout << adjMx[i][j] << " ";
            }
            cout << "\n";
        }
    }

    ~Graph()
    {
        for (int i = 0; i < nVertices; i++)
        {
            cout << "Destruct mode on" << endl;
            delete[] adjMx[i];
            delete[] adjMx;
        }
    }
};

int main(int argc, char const *argv[])
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.toString();

        return 0;
}
