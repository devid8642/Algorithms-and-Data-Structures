from itertools import combinations as comb

nums = list(map(int, input().split(' ')))
triplas = list(comb(nums, 3))
ctl = False
for t in triplas:
    if t[0] < t[1] + t[2] and t[1] < t[0] + t[2] and t[2] < t[0] + t[1]:
        ctl = True
        break
if ctl:
    print('S')
else:
    print('N')
