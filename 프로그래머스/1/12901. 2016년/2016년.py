def solution(a, b):
    answer = ''
    days = ['FRI', 'SAT', 'SUN', 'MON', 'TUE', 'WED', 'THU']
    month = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30]
    
    day_count = 0
    for i in range(0, a):
        day_count += month[i]
    answer = days[((day_count + b) % 7 ) - 1]
    
    return answer