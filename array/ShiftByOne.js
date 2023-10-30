const arr=[23,33,43,53,63,73,83,93,103];
const lastIndex=arr?.at(-1);

for(let i=arr.length-1;i>=0;i--){
    arr[i]=arr[i-1];
    if(i==0){
        arr[0]=lastIndex;
    }
}

console.log(arr,'arr')