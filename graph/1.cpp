#include <bits/stdc++.h>
using namespace std;

void Dfs(char source, map<char, vector<char>> &graph)
{
    stack<char> st;
    st.push(source);
    while (st.size() > 0)
    {
        char current = st.top();
        st.pop();

        cout << current << endl;

        for (int i = 0; i < graph[current].size(); i++)
        {
            st.push(graph[current][i]);
        }
    }
}

void dfsRecc(char source, map<char, vector<char>> &graph)
{
    cout << source << endl;
    for (int i = 0; i < graph[source].size(); i++)
    {
        dfsRecc(graph[source][i], graph);
    }
}

void Bfs(char source, map<char, vector<char>> &graph)
{
    queue<char> q;
    q.push(source);
    while (q.size() > 0)
    {
        char current = q.front();
        q.pop();
        cout << current << endl;

        for (int i = 0; i < graph[current].size(); i++)
        {
            q.push(graph[current][i]);
        }
    }
}

void PrintGraph(map<char, vector<char>> &graph)
{
    for (auto itr = graph.begin(); itr != graph.end(); ++itr)
    {
        cout << itr->first << ":";
        for (auto itVal : itr->second)
        {
            cout << itVal << " ";
        }
        cout << "\n";
    }
}


int main(int argc, char const *argv[])
{
    vector<char> khali;
    map<char, vector<char>> graph;
    graph['a'].push_back('c');
    graph['a'].push_back('b');
    graph['b'].push_back('d');
    graph['c'].push_back('e');
    graph['d'].push_back('f');
    graph['h'].push_back('i');
    graph['l'].push_back('m');
    graph['e'] = khali;
    graph['f'] = khali;

    PrintGraph(graph);

    cout << "😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎" << endl;

    // Dfs = Depth First Search

    Dfs('a', graph);

    cout << "😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎" << endl;

    dfsRecc('a', graph);

    cout << "😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎" << endl;

    // BFS =Breadth First Search

    Bfs('a', graph);

    cout << "😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎😎" << endl;

    return 0;
}
