class Solution:
    def countSubTrees(self, n: int, edges: List[List[int]], labels: str) -> List[int]:
        adj = []
        countMap = {}
        result = []
        for i in range(n):
            adj.append([])
            result.append(0)
            countMap[labels[i]]=0
        for [a,b] in edges:
            adj[a].append(b)
            adj[b].append(a)
        visited={}
        def dfs(node):
            label = labels[node]
            if(visited.get(node)):
                return
            visited[node]=True
            start = countMap[label]
            for next in adj[node]:
                dfs(next)
            countMap[label]+=1
            result[node] = countMap[label]-start
        dfs(0)
        print(result)
        return result
