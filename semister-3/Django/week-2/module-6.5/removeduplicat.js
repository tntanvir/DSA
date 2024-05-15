let numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
let newArray = [];

// console.log(n);
for (let i = 0; i < numbers.length; i++) {
    let m = numbers[i];
    let n = newArray.find(f => f == m);
    // console.log(n);
    if (n == null) {
        newArray.push(m);
    }

}
console.log(newArray);