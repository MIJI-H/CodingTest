from collections import deque

def solution(cacheSize, cities):

    cache = deque(maxlen=cacheSize)
    total_time = 0
    
    for city in cities:
      
        city = city.lower()
        
        if city in cache:
       
            total_time += 1
            
            cache.remove(city)
            cache.append(city)
        else:
           
            total_time += 5
            
            cache.append(city)
    
    return total_time
