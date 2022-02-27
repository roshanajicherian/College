function reverseNumber(number)
{
    let orginalNumberArray = number.split("");
    let reversedNumberArray = orginalNumberArray.reverse();
    let finalNumber = reversedNumberArray.join("");
    if (finalNumber == number)
        return true;
    else 
        return false;
}


let number = prompt("Enter a five digit number : ");
let isPalindrome = reverseNumber(number);
if(isPalindrome == true)
    console.log("The number is a plaindrome");
else
    {
        number = prompt("The number was not a plaindrome. Enter a five digit number : ");
        isPalindrome = reverseNumber(number);
        if(isPalindrome == true)
            console.log("The number is a plaindrome");
        else
            console.log("The number is not a plaindrome.")
    }