
setInterval(myTimer, 1000);

function myTimer() {
  const date = new Date();
  document.getElementById("demo").innerHTML = date.toLocaleTimeString();
}



var prevScrollpos = window.pageXOffset;
window.onscroll = function() {
var currentScrollPos = window.pageYOffset;
  if (prevScrollpos > currentScrollPos) {
    document.getElementById("navbar").style.top = "0";
  } else {
    document.getElementById("navbar").style.top = "-50px";
  }
  prevScrollpos = currentScrollPos;
}


var i=0;
var images=[]
images[0]="https://images.pexels.com/photos/8199562/pexels-photo-8199562.jpeg"
images[1]="https://images.pexels.com/photos/1181287/pexels-photo-1181287.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=1"
images[2]="https://images.pexels.com/photos/4974915/pexels-photo-4974915.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=1"
images[3]="https://images.pexels.com/photos/7167019/pexels-photo-7167019.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=1"

function imgslider(){
    document.getElementById("img").src=images[i]
    if(i<images.length-1){
        i++
    }
    else{
        i=0
    }
    setTimeout("imgslider()",2000)
}
window.onload=imgslider





// Get the modal
var modal = document.getElementById("myModal");

// Get the button that opens the modal
var btn = document.getElementById("myBtn");

// Get the <span> element that closes the modal
var span = document.getElementsByClassName("close")[0];
// When the user clicks the button, open the modal 
btn.onclick = function() {
  modal.style.display = "block";
}
// When the user clicks on <span> (x), close the modal
span.onclick = function() {
  modal.style.display = "none";
}
// When the user clicks anywhere outside of the modal, close it
window.onclick = function(event) {
  if (event.target == modal) {
    modal.style.display = "none";
  }
}



