//My Method
// const findLongestWord = (string) => {
//     if(string?.trim()?.length===0){
//         return false;
//     }
//     let arr = string.split(" ");
//     let min = -Infinity;
//     let index = 0;
//     for (let i = 0; i < arr.length; i++) {
//         if (min < arr[i]?.length) {
//             min = arr[i]?.length
//             index = i;
//         }
//     }
//     return arr[index]
// }


//Other Methods

// const findLongestWord=(string)=>{
//         if(string?.trim()?.length===0){
//         return false;
//     }
//     let arr = string.split(" ");
//      let sortedArr = arr.sort((a,b)=>b?.length - a?.length);
//      return sortedArr[0]
// }



const findLongestWord=(string)=>{
if(string?.trim()?.length===0){
        return false;
    }
    let arr = string.split(" ");
    return arr.reduce((accu,curr)=>accu?.length>curr?.length ? accu : curr , "")
}

let ans = findLongestWord("welcome to the sdgsdgday of the dead")
console.log(ans, "ans");