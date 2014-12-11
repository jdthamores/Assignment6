//The Processing equivalent of a "Hello World" program is simply to draw a line: 


void setup() {
  size(400, 400);
 
  line(15, 25, 70, 90);
  stroke(255);               // sets the stroke color to white
  stroke(255, 255, 255);     // identical to the line above
  stroke(255, 128, 0);       // bright orange (red 255, green 128, blue 0)
  stroke(#FF8000);           // bright orange as a web color
  stroke(255, 128, 0, 128);  // bright orange with 50% transparency
  
  background(192, 64, 0);
} 

void draw() {
  line(150, 25, mouseX, mouseY);  
}

void mousePressed() {
       background(192, 64, 0);
     }
