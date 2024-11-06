from collections import defaultdict

def solution(tickets):
    routes = defaultdict(list)
    for start, end in tickets:
        routes[start].append(end)

    for start in routes:
        routes[start].sort(reverse=True)

    # 경로를 저장할 스택과 결과 리스트입니다.
    stack = ['ICN']
    path = []

    while stack:
        top = stack[-1]
        if not routes[top]:
            path.append(stack.pop())
        else:
            stack.append(routes[top].pop())

    return path[::-1]
