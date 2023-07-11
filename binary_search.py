def binary_search(arr,target):
    first=0
    last=len(arr)-1
    while first <= last:
        midpoint=(first+last)//2
        if arr[midpoint] == target:
            return midpoint
        elif arr[midpoint]<target:
            first=midpoint+1
        else:
            last=midpoint-1
    return None
    
