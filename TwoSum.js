let arr=[1,4,45,6,10,8]
let sum=16;
let obj={}

// brute force

// for(let i=0;i<arr.length;i++){
//     for(let j=i+1;j<arr.length;j++){
//         if((arr[i]+arr[j])===sum){
//             console.log([arr[i],arr[j]])
//            break; 
//         }
//     }
// }




// Two Pointer Approach for true or false
// let low=0;
// let high=arr.length-1;
// let sortedArray=arr.sort((a,b)=>a-b);

// while(low<high){
//   let insideSum=sortedArray[low] + sortedArray[high];

//   if(insideSum<sum){
//     low++
//   }
//   else if(insideSum>sum){
//     high--
//   }
//   else{
//     console.log(true)
//     break;
//   }
// } 






//o(N) My code using object
// for(let i=0;i<arr.length;i++){
//     obj[arr[i]] = i; 
// }

// for(let j=0;j<arr.length;j++){
//     let diff=sum-arr[j]

//     if(obj[diff]){
//         console.log(arr[j],arr[obj[diff]])
//         break;
//     }
// }


// chat gpt optimisation (Nice approach)
let indexMap = new Map();
for (let i = 0; i < arr.length; i++) {
    let diff = sum - arr[i];

    if (indexMap.has(diff)) {
        console.log(arr[i], arr[indexMap.get(diff)]);
        break;
    }
    indexMap.set(arr[i], i);
}