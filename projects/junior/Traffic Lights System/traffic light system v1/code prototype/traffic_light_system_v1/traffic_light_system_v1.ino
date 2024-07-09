int red_VR = 1, yellow_VR  = 2 , green_VR  = 3    ,red_VL = 4, yellow_VL  = 5, green_VL  = 6    ,red_HR = 7, yellow_HR  = 8, green_HR  = 9    ,red_HL = 10, yellow_HL  = 11 , green_HL  = 12   ;

void setup() {

//setup ports from 1 to 12 as output
  DDRD = B11111110;
  DDRB = B111111;

  
}

void loop() {
//vertical road sequence  
  //blink red
  digitalWrite(red_VR , 1);
  digitalWrite(red_VL , 1);
  delay(5000);
  //clear
  digitalWrite(red_VR , 0);
  digitalWrite(red_VL , 0);
  delay(400);  
  //blink yellow
  digitalWrite(yellow_VR , 1);
  digitalWrite(yellow_VL , 1);
  delay(3000);
  //clear
  digitalWrite(yellow_VR , 0);
  digitalWrite(yellow_VL , 0);
  delay(400);
  //blink green
  digitalWrite(green_VR , 1);
  digitalWrite(green_VL , 1);
  delay(5000);
  //clear
  digitalWrite(green_VR , 0);
  digitalWrite(green_VL , 0);

//clear vertical road

//horizontal road sequence  
  //blink red
  digitalWrite(red_HR, 1);
  digitalWrite(red_HL , 1);
  delay(5000);
  //clear
  digitalWrite(red_HR, 0);
  digitalWrite(red_HL , 0);
  delay(400);  
  //blink yellow
  digitalWrite(yellow_HR, 1);
  digitalWrite(yellow_HL , 1);
  delay(3000);
  //clear
  digitalWrite(yellow_HR, 0);
  digitalWrite(yellow_HL , 0);
  delay(400);
  //blink green
  digitalWrite(green_HR, 1);
  digitalWrite(green_HL , 1);
  delay(5000);
  //clear
  digitalWrite(green_HR, 0);
  digitalWrite(green_HL , 0);

//clear vertical road 
  
  
}
