# CHALLENGE #27 - Golfing Golf With Gorbit

## DIFFICULTY: Medium

Gorbit sucks at golf, and needs assistance. Work out the optimum selection of golf clubs to use to get the golf ball from the tee, to the hole. The user will enter the distance in yards via stdin. Gorbit doesn't even have a full set of clubs. His selection consists of: 1W = 200 yards, 3W = 150 yards, 7I = 90 yards, 9I = 60 yards, PW = 10 yards, PT = 1 - 5 yards. Your program should output the club selection to get to the hole via stdout. As this is OLC Golf, some unfair and unusual rules apply! The player must start with a driver (1W), must use at least once one of (3W, 7I, 9I, PW) and must end using a putter (PT), implying at least 3 shots must be taken per hole. 

### Examples:

```
Input: 323
Output: 1W 200, 7I 290, PW 300, PW 310, PW 320, PT 323

Input: 168
Output: 1W 200, PW 190, PW 180, PW 170, PT 168
```

## Rules: 

1. Must be compliable and runnable in an online browser (for example https://www.ideone.com/) 
2. Can be any language 
3. It's golf, use as few bytes of source code as possible. 
4. Challenge Winner role for lowest scoring golf submission by 1st April 2019
