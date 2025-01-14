def solution(clothes):
    answer = 1
    closet = {}
    for item, category in clothes :
        if category in closet:
            closet[category].append(item)
        else :
            closet[category] = [item]
    for key in closet :
        answer *= len(closet[key]) + 1
    return answer - 1 

