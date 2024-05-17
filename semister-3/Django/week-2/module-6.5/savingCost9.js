const monthlySavings = (totalArray, livingCost) => {
    if (Array.isArray(totalArray) && typeof livingCost === "number") {

        let total = 0;
        for (let i = 0; i < totalArray.length; i++) {
            if (totalArray[i] >= 3000) {

                total += totalArray[i] * 0.20;
            }
            else {

                total += totalArray[i];
            }
        }
        total -= livingCost;

        if (total >= 0) {
            return total;
        }
        else {
            return 'earn more';
        }

    }
    else {
        return 'invalid input';
    }
}

let saving = monthlySavings([900, 2700, 3400], 10000);
console.log(saving);