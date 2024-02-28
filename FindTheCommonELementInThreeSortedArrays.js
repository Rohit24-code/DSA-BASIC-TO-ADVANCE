// Given three Sorted arrays in non-decreasing order, print all common elements in these arrays.

// Examples: 

// Input: 
// ar1[] = {1, 5, 10, 20, 40, 80} 
// ar2[] = {6, 7, 20, 80, 100} 
// ar3[] = {3, 4, 15, 20, 30, 70, 80, 120} 
// Output: 20, 80

// Input: 
// ar1[] = {1, 5, 5} 
// ar2[] = {3, 4, 5, 5, 10} 
// ar3[] = {5, 5, 10, 20} 
// Output: 5, 5

let a = [1, 5, 10, 20, 40, 80];
let b = [6, 7, 20, 80, 100];
let c = [3, 4, 15, 20, 30, 70, 80, 120];

// let a=[3,3,3]
// let b=[3,3,3]
// let c=[3,3,3]

let newArrA = removeDuplicate(a);
let newArrB = removeDuplicate(b);
let newArrC = removeDuplicate(c);

let p1 = 0;
let p2 = 0;
let p3 = 0;

// i am using this (newArrA[p1] === newArrB[p2] && newArrB[p2] === newArrC[p3]) instead of newArrA[p1] === newArrB[p2] === newArrC[p3] because this will equate true===80

while (p1 < newArrA?.length && p2 < newArrB?.length && p3 < newArrC?.length) {
  if ((newArrA[p1] === newArrB[p2]) && (newArrB[p2] === newArrC[p3])) {
    p1++;
    p2++;
    p3++;
  } else if (newArrA[p1] < newArrB[p2]) {
    p1++;
  } else if (newArrB[p2] < newArrC[p3]) {
    p2++;
  } else {
    p3++;
  }
}

function removeDuplicate(arr) {
  let p1 = 0;
  let p2 = 1;

  while (p1 < arr?.length - 1) {
    if (arr[p1] === arr[p2]) {
      arr.splice(p2, 1);
    } else {
      p1++;
      p2++;
    }
  }

  return arr;
}
