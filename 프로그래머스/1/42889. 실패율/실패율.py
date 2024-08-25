def solution(N, stages):

    stage_users = [0] * (N + 2)
    for stage in stages:
        stage_users[stage] += 1

    failure_rates = []
    players_remaining = len(stages)

    for i in range(1, N + 1):
        if players_remaining == 0:
            failure_rate = 0
        else:
            failure_rate = stage_users[i] / players_remaining

        failure_rates.append((i, failure_rate))  
        players_remaining -= stage_users[i]  

    failure_rates.sort(key=lambda x: (-x[1], x[0]))

   
    return [stage for stage, rate in failure_rates]

