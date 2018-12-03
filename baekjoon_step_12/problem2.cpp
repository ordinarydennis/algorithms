#include <iostream>
#include <vector>
#include <stack>
#include <queue>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::stack;
using std::queue;

void dfs(int start, vector<vector<int>> graph, vector<bool> check);
void bfs(int start, vector<vector<int>> graph, vector<bool> check);
int main()
{
	int n = 0, m = 0, v = 0;
	cin >> n >> m >> v;
	vector<vector<int>> graph(n + 1, vector<int>(n + 1, 0));
	vector<bool> check(n + 1, false);

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a][b] = 1;
		graph[b][a] = 1;
	}
	dfs(v, graph, check);
	printf("\n");
	bfs(v, graph, check);
}
void dfs(int start, vector<vector<int>> graph, vector<bool> check)
{
	stack<int> s;
	s.push(start);
	check[start] = true;
	printf("%d ", start);

	while (!s.empty()) {
		int current_node = s.top();
		s.pop();
		for (int i = 0; i < graph[current_node].size(); i++) {
			if (0 == graph[current_node][i]) {
				continue;
			}
			int next_node = i;
			if (check[next_node] == false) {
				printf("%d ", next_node);
				check[next_node] = true;
				s.push(current_node); //왜 넣는거지???
				s.push(next_node);
				break;
			}
		}
	}
}
void bfs(int start, vector<vector<int>> graph, vector<bool> check)
{
	queue<int> q;
	q.push(start);
	check[start] = true;
	while (!q.empty()) {
		int current_node = q.front();
		q.pop();
		printf("%d ", current_node);
		for (int i = 0; i < graph[current_node].size(); i++) {
			if (0 == graph[current_node][i]) {
				continue;
			}
			int next_node = i;
			if (check[next_node] == false) {
				q.push(next_node);
				check[next_node] = true;
			}
		}
	}
}