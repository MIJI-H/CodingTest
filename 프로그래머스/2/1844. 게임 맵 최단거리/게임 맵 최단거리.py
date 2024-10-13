from collections import deque

def solution(maps):
    n, m = len(maps), len(maps[0])
    dx = [0, 1, 0, -1]
    dy = [-1, 0, 1, 0]
    
    queue = deque([(0, 0)])
    visited = [[False] * m for _ in range(n)]
    visited[0][0] = True
    bfs_map = [[0] * m for _ in range(n)]
    bfs_map[0][0] = 1
    
    while queue:
        x, y = queue.popleft()
        
        for i in range(4):
            nx, ny = x + dx[i], y + dy[i]
            
            if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny] and maps[nx][ny] == 1:
                visited[nx][ny] = True
                bfs_map[nx][ny] = bfs_map[x][y] + 1
                queue.append((nx, ny))
    
    answer = bfs_map[n - 1][m - 1]
    return answer if answer != 0 else -1