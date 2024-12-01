from itertools import permutations

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

def solution(numbers):
    possible_numbers = set()
    for i in range(1, len(numbers) + 1):
        for perm in permutations(numbers, i):
            num = int("".join(perm))
            possible_numbers.add(num)
    
    prime_count = 0
    for num in possible_numbers:
        if is_prime(num):
            prime_count += 1
    
    return prime_count

