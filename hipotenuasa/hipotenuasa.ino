
int b=2;
int a=3;
float h = 0;

void setup(){
Serial.begin(9600);          

Serial.print("a=");
Serial.println(a);
Serial.print("b=");
Serial.println(b);

h=sqrt(pow(2,3)+pow(2,3));
Serial.print("h=");
Serial.print(h);
}  


void loop() {

}
