def findMean(l1):
    return (sum(l1)/len(l1))
def findMedian(l1):
    listLenth=len(l1)
    if listLenth%2==0:
        mid1=listLenth//2
        mid2=mid1-1
        return (l1[mid1]+l1[mid2])/2
    else:
        mid = (listLenth//2) + 1
        return l1[mid]

# def findMode(l1):
#     len = len(l1)
#     highest = 0
#     highfreq = 0
#     for k in sortedLstC:
#         freq = 0
#         for l in sortedLstC:
#             if l == k:
#                 freq += 1
#             if freq > highfreq:
#     highest = k
#     highfreq = freq
#     return highest

l1=[int(x) for x in input().split()]
l1.sort()
# print(findMean(l1))
# print(findMedian(l1))
findMode(l1)
