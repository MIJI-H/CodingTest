def solution(s):
    s = s.lstrip('{').rstrip('}').split('},{')
    s = [list(map(int, x.split(','))) for x in s]
    s.sort(key=len)

    result = []
    for subset in s:
        for num in subset:
            if num not in result:
                result.append(num)
    
    return result