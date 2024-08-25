def solution(n, arr1, arr2):
    answer = []

    for i in range(n):     
        bin_num = bin(arr1[i] | arr2[i])[2:]  
        bin_num = bin_num.zfill(n)

        secret_map_row = bin_num.replace('1', '#').replace('0', ' ')
        answer.append(secret_map_row)

    return answer


