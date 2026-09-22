// alert("hello world");
// window.alert("hello window");//we can use like this also for getting alert
// /*multi line comment*/
// console.log("hello console");
// let username;
// document.getElementById("submit").onclick = function () {
//     username = document.getElementById("input").value;
// }
// console.log(username); 

document.querySelector(".submit").onclick = function () {
    let username = document.querySelector("input[type='text']").value;
    let email = document.querySelector("input[type='email']").value;
    console.log("Username: " + username);
    console.log("Email: " + email);
}
// dark mode toggle
const darkModeToggle = document.querySelector('.darkmode-toggle');
darkModeToggle.addEventListener('click', () => {
    document.body.classList.toggle('dark-mode');
});


