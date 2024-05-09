def solution(array, commands):
    answer = []
    res = []
    for command in commands:
        res = array[command[0]-1:command[1]]
        res.sort()
        answer.append(res[command[2]-1])
        
    return answer