long drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long result_kb;

void setup() {
Serial.begin(9600);
Serial.println("Your HD is 100 GB large.");
Serial.print("In theory is can store ");
drive_mb = drive_gb*1024;
Serial.print( drive_mb);
Serial.print(" Megabytes, ");
drive_kb = drive_mb*1024;
Serial.print(drive_kb);
Serial.println(" Kilobytes.");
Serial.print("But is really only stores ");
real_drive_mb = drive_gb*1000;
Serial.print(real_drive_mb);
Serial.print(" Megabytes, ");
real_drive_kb = real_drive_mb*1000;
Serial.print(real_drive_kb);
Serial.println(" Kilobytes.");
Serial.print("You are missing ");
result_kb = drive_kb-real_drive_kb;
Serial.print(result_kb);
Serial.print(" Kilobytes!");

}

void loop() {
  // put your main code here, to run repeatedly:

}
