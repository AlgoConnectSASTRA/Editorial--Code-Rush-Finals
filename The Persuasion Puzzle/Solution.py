def solution(no_of_days, tshirts_sold):
    summ = 0
    result = 0
    for i in range(no_of_days):
        summ += tshirts_sold[i]
        if summ == (i+1):
            result += 1
    return result
