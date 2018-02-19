int test = 32767;
void setup() {
Serial.begin(9600);
Serial.print("Test value in: ");
Serial.println(test);

test = test + 1;
Serial.print("Now it is: ");
Serial.println(test); 

}

void loop() {
  // put your main code here, to run repeatedly:

}
