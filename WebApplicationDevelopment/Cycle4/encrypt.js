let myNumber = "1234";
let numberArray = myNumber.split("");
console.log(numberArray);
let modifiedNumber = [];
for(let i =0; i<4;i++)
    modifiedNumber[i] = (Number(numberArray[i])+7)%10;

console.log(modifiedNumber);

let temp = modifiedNumber[0];
modifiedNumber[0]= modifiedNumber[2];
modifiedNumber[2]=temp;

temp =modifiedNumber[1];
modifiedNumber[1]= modifiedNumber[3];
modifiedNumber[3]=temp;

// console.log(modifiedNumber);
const encryptedNumber = modifiedNumber.join("");
console.log(encryptedNumber)

// To decrpyt
let encryptedNumberArray = encryptedNumber.split("");
temp = modifiedNumber[0];
modifiedNumber[0]= modifiedNumber[2];
modifiedNumber[2]=temp;

temp =modifiedNumber[1];
modifiedNumber[1]= modifiedNumber[3];
modifiedNumber[3]=temp;

let modifiedNumber2 = modifiedNumber;
for (let i = 0; i < modifiedNumber.length; i++) {
    if(modifiedNumber[i] >= 7)
        modifiedNumber[i]-=7;
}

let num1 = modifiedNumber.join("");