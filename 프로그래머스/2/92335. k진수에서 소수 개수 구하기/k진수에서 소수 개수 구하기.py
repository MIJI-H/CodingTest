import math

def solution(n, k):
    k_base = ""
    while n > 0:
        k_base = str(n % k) + k_base
        n //= k

    count = 0
    for candidate in k_base.split('0'):
        if candidate:
            num = int(candidate)
            if num > 1 and all(num % i != 0 for i in range(2, int(math.sqrt(num)) + 1)):
                count += 1
    
    return count