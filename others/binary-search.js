let arr = [-23.23, 1, 2, 3, 4, 5, 6, 7, 8];

function binSearch(n, arr){
  // go to the middle of the array
  let len = arr.length;
  let middle = Math.floor((len/2));
  
  // Write a base case
  if(arr.length === 1){
    if(arr[0] === n){
      console.log("Found.");
      return 0;
    } else{
      console.log("Not Found.");
      return 1;
    }
  }
  
  // if n = middle
  if(n === arr[middle]){
    console.log("Found.");
    return 0;
  }
  
  // If n < middle
  if(n < arr[middle]){  
    arr = arr.slice(0, middle)		// get rid of right half
    binSearch(n, arr);		// go to the middle
  }
  
  // if n > middle
  if(n> arr[middle]){ 
    arr = arr.slice(middle+1, len);		// git rid of left half
    binSearch(n, arr);	// go to the middle
  }
  
}

// Check binSearch(number, array) Implementation
binSearch(9, arr);
binSearch(8, arr);
binSearch(-23.29, arr);
binSearch(4, arr);