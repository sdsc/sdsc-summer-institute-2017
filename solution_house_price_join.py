def is_inflation_low(pair):
    return pair[1][1] < 4
def reducer_max_price(a,b):
    return max(a[0], b[0])
house_prices_RDD.join(inflation_RDD).filter(is_inflation_low).reduceByKey(reducer_max_price).collect()
