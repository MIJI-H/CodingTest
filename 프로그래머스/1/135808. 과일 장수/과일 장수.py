def solution(k, m, score):
    total_num = 0
    score.sort(reverse=True)
    for i in range(0, len(score), m): 
        if i + m <= len(score):
            total_num += score[i + m - 1] * m
    return total_num