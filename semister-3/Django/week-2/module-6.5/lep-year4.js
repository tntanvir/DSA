const prompt = require('prompt-sync')();

// Start
const year = prompt("Enter year: ");

if ((year % 4 === 0 && year % 100 !== 0) || year % 400 === 0) {
    console.log(`${year} - is Leap year`);
} else {
    console.log(`${year} - is Not A Leap year`);
}