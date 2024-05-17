const prompt = require('prompt-sync')();

// Start

let num = Number.parseInt(prompt('Enter The Number: '));
if (num % 2 === 0) {
    console.log("Even Number");
} else {
    console.log("Odd Number");
}