let userNameBox = document.querySelector("#userNameInput");
userNameBox.addEventListener("blur",checkUsername);

function checkUsername(e)
{
    if(userNameBox.value.length < 5)
    {
        document.querySelector("#usernameDisplay").textContent = "Username length must be greater than five."
    }
}

let passwordBox = document.querySelector("#passwordInput");
passwordBox.addEventListener("blur",checkPassword);

function checkPassword(e)
{
    let output = "";
    let password = passwordBox.value
    if(password.length < 5)
    {
        output+="Password length must be greater than five."
    }
    let passwordArray = password.split("");
    let alphaPresent = false, numberPresent = false;
    for (let i = 0; i < passwordArray.length; i++) 
    {
        
        if((passwordArray[i]>'a' && passwordArray[i]<'z') ||
         (passwordArray[i]>'A' && passwordArray[i]<'Z'))
            alphaPresent = true;
        if(passwordArray[i]>'0' && passwordArray[i]<'9')
            numberPresent = true
        if (alphaPresent==true && numberPresent==true)
            break;
    }
        if(alphaPresent==false || numberPresent==false)
        {
            output+="Password must be alphanumeric";
        }
    
    document.querySelector("#passwordDisplay").textContent = output;

}

let packageSelected = document.querySelector("#packageSelector");
packageSelected.addEventListener("blur", displayOffer);

function displayOffer(event)
{
    if(packageSelected.value == 1)
    {
        document.querySelector("#offerDisplay").textContent = "Save 500 if you pay for one year!!";

    }
}

let submitButton = document.querySelector("#registerButton");
submitButton.addEventListener("click",termsCheck);

function termsCheck(event)
{
    if(document.querySelector("#terms").checked)
        console.log("Checked");
    else
    document.querySelector("#termsDisplay").textContent = "Please agree to the terms and conditions.";
}