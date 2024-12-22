from functools import cmp_to_key

def solution(numbers):
    numbers = list(map(str, numbers))
    
    def compare(x, y):
        if x + y > y + x:
            return -1  
        elif x + y < y + x:
            return 1 
        else:
            return 0 
    
    numbers.sort(key=cmp_to_key(compare))
    
    result = ''.join(numbers)
    
    return result if result[0] != '0' else '0'
