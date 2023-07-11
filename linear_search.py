def linear_search(list1,target):
    for i in range(0,len(list1)):
        if list1[i]==target:
            return i
    return None
