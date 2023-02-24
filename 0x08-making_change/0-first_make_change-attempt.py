#!/usr/bin/python3
"""
Given a pile of coins of different values,
determine the fewest number of coins needed
to meet a given amount total.

    - Prototype: def makeChange(coins, total)
    - Return: fewest number of coins needed to meet total
        If total is 0 or less, return 0
        If total cannot be met by any number of coins you have,
        return -1
    - coins is a list of the values of the coins in your possession
    - The value of a coin will always be an integer greater than 0
    - You can assume you have an infinite number of each
      denomination of coin in the list
    - Your solution’s runtime will be evaluated in this task
"""


def makeChange(coins, total):
    """0. Change comes from within"""
    if total <= 0:
        return 0
    elif sum(coins) != total:
        return -1
    else:
        count = 0
        for c in coins:
            if c == total:
                count += 1
                return count
        for i in range(len(coins)):
            for j in range(i + 1, len(coins)):
                summed = coins[i] + coins[j]
                if summed == total:
                    count += 2
                    return count
                else:
                    diff = total - summed
                    for c in coins:
                        if c == diff:
                            count += 3
                            return count
                    total = diff
                    count += 2
    return count
