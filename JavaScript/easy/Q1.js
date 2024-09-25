var score = parseInt(prompt("Please enter your Score:"));
if(score<100 && score>=90){
    console.log("grade : A")
}else if (score<90 && score>=80){
    console.log("grade : B")
}else if (score<80 && score>=70){
    console.log("grade : C")
}else if (score<70 && score>=60){
    console.log("grade : D")
}else if (score<60 && score>=0){
    console.log("grade : F")
}else{
    console.log("invalid Input")
}