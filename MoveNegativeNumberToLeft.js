let arr=[34,-45,23,34,65,-23,-34,65];

// MY METHOD 
// let p1=0;
// let p2=0;


// while(p1<arr?.length && p2<arr?.length){
//     if(arr[p1]<0){
//         swap(arr,p1,p2)
//         p1++;
//         p2++;
//     }
//     else{
//         p1++;
//     }
// }

// console.log(arr,'arr')





// DUTCH FLAG 

let l=0;
let h=arr?.length-1;

while(l<h){
    if(arr[l]<0){
        l++
    }
    else if(arr[h]>0){
        h--
    }
    else{
        swap(arr,l,h)
        l++;
        h--;
    }
}

console.log(arr)

function swap(arr,p1,p2){
    let temp = arr[p1];
    arr[p1]=arr[p2]
    arr[p2]=temp
}