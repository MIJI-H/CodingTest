def solution(people, limit):
    answer = 0
    s = 0
    e = len(people) - 1
    people.sort()
    
    while s <= e:
        if people[s] + people[e] <= limit:
            s += 1
        e -= 1
        answer += 1
    
    return answer