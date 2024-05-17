
let ary = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 20, 2, 4, 6, 8, 10, 12, 14, 16, 18];
for (let i = 0; i < ary.length - 1; i++) {
    for (let j = i + 1; j < ary.length; j++) {
        // console.log(ary[j]);
        if (ary[i] > ary[j]) {
            let temp = ary[i];
            ary[i] = ary[j];
            ary[j] = temp;
        }

    }
}
console.log(ary);