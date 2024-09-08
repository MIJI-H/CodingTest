def solution(n, t, m, p):
    chars = "0123456789ABCDEF"
    game_sequence = ""  
    num = 0
    
    while len(game_sequence) < t * m:
        current = ""
        temp_num = num
        if temp_num == 0:
            current = "0"
        while temp_num > 0:
            current = chars[temp_num % n] + current
            temp_num //= n
        game_sequence += current
        num += 1
    
    answer = ""
    for i in range(p - 1, t * m, m):
        answer += game_sequence[i]
    
    return answer