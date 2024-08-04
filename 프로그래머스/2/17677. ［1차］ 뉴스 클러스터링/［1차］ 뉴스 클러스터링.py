
def solution(str1, str2):
    str1 = str1.lower()
    str2 = str2.lower()
    
    bigrams1 = [str1[i:i+2] for i in range(len(str1) - 1) if str1[i:i+2].isalpha()]
    bigrams2 = [str2[i:i+2] for i in range(len(str2) - 1) if str2[i:i+2].isalpha()]

    intersect = sum(min(bigrams1.count(b), bigrams2.count(b)) for b in set(bigrams1) & set(bigrams2))
    union = sum(max(bigrams1.count(b), bigrams2.count(b)) for b in set(bigrams1) | set(bigrams2))
    
    answer = int((intersect / union) * 65536) if union != 0 else 65536
    
    return answer
