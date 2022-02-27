let numbersArray = [];
for (let i = 0; i < 5; i++) {
    numbersArray[i]  = Number(prompt("Enter the number : "));
}
numbersArray.sort(
    (a,b) => {return b-a;}
);
console.log(`
Largest : ${numbersArray[0]}
Second largest : ${numbersArray[1]}`);