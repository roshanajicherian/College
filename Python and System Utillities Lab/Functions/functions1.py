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

def findMode(l1):
    frequencyDictionary={}
    modeList=[]
    for i in l1:
        frequencyDictionary.setdefault(i,0)
        frequencyDictionary[i]+=1
    maxFrequency=max(frequencyDictionary.values())
    for key,value in frequencyDictionary.items():
        if value==maxFrequency:
            modeList.append(key)
    if len(modeList)==len(l1):
        print("No Mode")
    else:
        print(modeList)



l1=[int(x) for x in input().split()]
l1.sort()
# print(findMean(l1))
# print(findMedian(l1))
findMode(l1)
