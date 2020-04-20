void InitSerial() {
  Serial.begin(SERIAL_BAUD);

  return;
}

void SerialData(){
  /*
  Serial.print("VBS = ");
  Serial.print(VBS);
  Serial.print(" V\t");
  */
  Serial.print("VPW = ");
  
  Serial.print(Messuring.VPW*1000);
  Serial.print(" mW\t");
  /*
  Serial.print("ShV = ");
  Serial.print(ShV*1000);
  Serial.print(" mV\t");
  */
  Serial.print("ShA = ");
  Serial.print(Messuring.ShA*1000);
  Serial.print(" mA");
  
  Serial.println();

  return;
}
