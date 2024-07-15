def solution(number, limit, power):
    answer = 0
    for i in range(1, number + 1):
        divisors_count = 0
        for j in range(1, int(i**0.5) + 1):
            if i % j == 0:
                if j * j == i:
                    divisors_count += 1
                else:
                    divisors_count += 2
        if divisors_count > limit:
            answer += power
        else:
            answer += divisors_count
    
    return answer