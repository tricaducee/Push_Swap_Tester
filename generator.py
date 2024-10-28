def permutation(lst):
    if len(lst) == 1:
        return [lst]
    l = []
    for i in range(len(lst)):
       m = lst[i]
       remLst = lst[:i] + lst[i+1:]
       for p in permutation(remLst):
           l.append([m] + p)
    return l

l5 = [0x7FFFFFFF, 0, 12332, -0x80000000, -0x7FFFFFFF]

l4 = [0x7FFFFFFF, 0, 12332, -0x80000000]

l3 = [0x7FFFFFFF, 0, -0x80000000]

for lst in permutation(l5):
    print("funCompareHighRange \"", end="")
    for c in lst:
        print(c, end=" ")
    print("\"")
