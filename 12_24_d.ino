const int led_1= 5; 
const int led_2=6; 
void setup() {
  // put your setup code here, to run once:
  pinMode(led_1, OUTPUT); 
  pinMode(led_2, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int value= analogRead(A0); //get value from A0
  int offset= map(value, 0, 1023, 0, 255); 
  //this is offset value: 
  //brightness of led_1 is controlled by this offset value
  analogWrite(led_1, offset);
  analogWrite(led_2, 255-offset);  
 
}
