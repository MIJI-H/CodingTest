import heapq

def solution(n, costs):
    graph = {i: [] for i in range(n)}
    for u, v, cost in costs:
        graph[u].append((cost, v))
        graph[v].append((cost, u))
    
    visited = [False] * n
    min_heap = [(0, 0)] 
    total_cost = 0
    
    while min_heap:
        cost, current_node = heapq.heappop(min_heap)
        
        # 이미 방문한 노드는 무시
        if visited[current_node]:
            continue
        
        visited[current_node] = True
        total_cost += cost
        
        for edge_cost, neighbor in graph[current_node]:
            if not visited[neighbor]:
                heapq.heappush(min_heap, (edge_cost, neighbor))
    
    return total_cost