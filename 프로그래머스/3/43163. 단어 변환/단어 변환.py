from collections import deque

def solution(begin, target, words):
    if target not in words:
        return 0  
    
    queue = deque([(begin, 0)])
    
    while queue:
        current, steps = queue.popleft()
        
        if current == target:
            return steps
        
        for word in words:
            if sum(1 for a, b in zip(current, word) if a != b) == 1:  
                queue.append((word, steps + 1))
        
        words = [w for w in words if w != current]

    return 0 