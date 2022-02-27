let number = Number(prompt("Enter the number : "));
let digits = Number(0);
// Find the number of digits
let temp = number;
while (temp > 0) {
  digits += 1;
  temp = Math.floor(temp / 10);
}
// Checking Armstrong
// abcd = a^n + b^n + c^n + d^n
temp = number;
let result = Number(0);
while (temp > 0) {
  let unitDigit = temp % 10;
  result += Math.pow(unitDigit, digits);
  temp = Math.floor(temp / 10);
}
if (result === number) console.log("The number is Armstrong");
else console.log("The number is not Armstorng.");
