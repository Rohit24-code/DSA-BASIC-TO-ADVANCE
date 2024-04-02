def findLongestWord(stri):
    if(len(stri.strip())==0):
      return False
    

    # My Method
    # minimum=0;
    # index=0;
    arr=stri.split(" ")
    # for i in range(len(arr)):
    #     if(minimum<len(arr[i])):
    #         minimum=len(arr[i])
    #         index=i

    # return arr[index]


    # Other Method
    sortedArray=sorted(arr, key=len, reverse=True)
    return sortedArray[0]


ans=findLongestWord("Welcome to the day of the dead");
print(ans)
