
 let firstName=document.getElementById("txtFirstName");
let lastName=document.getElementById("txtLastName");
let email=document.getElementById("txtEmail");
let pwd=document.getElementById("txtPwd");
let conPwd=document.getElementById("txtConPwd");
let form=document.querySelector("form");

function validateInput(){
    if(firstName.value.trim()===""){
        onError(firstName,"first Name can't be empty");
     }else{
         onSuccess(firstName);
     }

     if(lastName.value.trim()===""){
        onError(lastName,"last Name can't be empty");
     }else{
         onSuccess(lastName);
     }


     if(email.value.trim()===""){
         onError(email,"Email can't be empty");
     }else{
         if(!isValidEmail(email.value.trim())){
             onError(email,"Email is not valid");
         }else{
             onSuccess(email);
         }
     }
 
    
     if(pwd.value.trim()===""){
         onError(pwd,"password cannot be empty");
      }else{
          onSuccess(pwd);
      }

      if(conPwd.value.trim()===""){
         onError(conPwd," confirm password cannot be empty");
      }else{
          if(pwd.value.trim()!==conPwd.value.trim()){
             onError(conPwd,"Password & Confirm password not matching");
          }
          else
          onSuccess(conPwd);
      }
 }
    
   

document.querySelector("button")
.addEventListener("click",(event)=>{
    event.preventDefault();
validateInput();
});

function onSuccess(input){
    let parent=input.parentElement;
     let messageEle=parent.querySelector("small");
        messageEle.style.visibility="hidden";
      parent.classList.remove("error");
      parent.classList.add("success");

}
function onError(input,message){
    let parent=input.parentElement;
     let messageEle=parent.querySelector("small");
        messageEle.style.visibility="visible";
        messageEle.innerText=message;
        parent.classList.add("error");
      parent.classList.remove("success");

}
function isValidEmail(email){
    return /^(([^<>()[\]\\.,;:\s@"]+(\.[^<>()[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/.test(email);
 }



 
 
 
 
 
 
 
 
 
 
