def solution(s):
    count = 0  
    zero_removed = 0  
    
    while s != '1':
        zero_count = s.count('0')  
        zero_removed += zero_count  
        s = s.replace('0', '')  
        s = bin(len(s))[2:]  
        count += 1  
    return [count, zero_removed]

