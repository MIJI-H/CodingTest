def solution(name):
    n = len(name)
    move_count = 0  
    min_left_right = n - 1 

    for i in range(n):
        move_count += min(ord(name[i]) - ord('A'), ord('Z') - ord(name[i]) + 1)

        next_i = i + 1
        while next_i < n and name[next_i] == 'A':  
            next_i += 1

        min_left_right = min(min_left_right, i + n - next_i + min(i, n - next_i))

    return move_count + min_left_right