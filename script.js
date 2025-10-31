const slideshowElements = document.querySelectorAll(".slideshow-element");
let countElements = 1
setInterval(() => {
    countElements++;
    let currentElement = document.querySelector(".current")
    currentElement.classList.remove("current")

    if (countElements > slideshowElements.length) {
        slideshowElements[0].classList.add("current")
        countElements = 1
    }
    else {
        currentElement.nextElementSibling.classList.add("current")
    }

}, 2000)

const text = document.getElementById("text");

const colors = ["red", "orange", "yellow", "green", "blue", "violet"];
let index = 0;

setInterval(() => {
  index = (index + 1) % colors.length; 
  text.style.color = colors[index];
}, 2000);