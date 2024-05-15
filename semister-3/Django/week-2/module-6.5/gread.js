
const prompt = require('prompt-sync')();

// Start

let num = Number.parseInt(prompt('Enter Exam Marks: '));


if (num >= 80) {
    if (num > 100) {
        console.log("invalid number");
    } else {
        console.log("Grete : A+")
    }
}
else if (num >= 70) {
    console.log("Grete : A")
}
else if (num >= 60) {
    console.log("Grete : A-")
}

else if (num >= 50) {
    console.log("Grete : B+")
}

else if (num >= 40) {
    console.log("Grete : B")
}

else if (num >= 30) {
    console.log("Grete : B-")
}
else {
    console.log("failed to the exam");
}
