def solution(progresses, speeds):
    answer = []
    n = len(progresses)
    
    days = [(100 - progresses[i] + speeds[i] - 1) // speeds[i] for i in range(n)]
    
    deploy_day = days[0]  
    count = 0
    
    for day in days:
        if day <= deploy_day:
            count += 1
        else:
            answer.append(count)
            count = 1
            deploy_day = day

    answer.append(count)
    
    return answer
