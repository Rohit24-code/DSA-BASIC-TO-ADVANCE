const zeroOne:number[]=[1,0,1,0,0,0,1,1,0,0];

let leftOne=0;
let rightOne=zeroOne.length-1;

function swap(arr:number[],i:number,j:number){
    let temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

while(leftOne<rightOne){
    if(zeroOne[leftOne]===0){
        leftOne++
    }
    if(zeroOne[rightOne]===1){
        rightOne--;
    }
    else if(zeroOne[rightOne]===0){
        swap(zeroOne,leftOne,rightOne)
        leftOne++;
        rightOne--;
    }
}

console.log(zeroOne,'zeroOne')