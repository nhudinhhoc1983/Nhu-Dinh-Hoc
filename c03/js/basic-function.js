var msg='sign up to receive our newsletter for 10% off!';
function updateMessage() {
    var el = document.getElementById('message');
    el.textContent = msg;
}
updateMessage();
function  updateMessage2(imess) {
    var el=document.getElementById('message')
el.textContent=imess;
} updateMessage2(5+6)