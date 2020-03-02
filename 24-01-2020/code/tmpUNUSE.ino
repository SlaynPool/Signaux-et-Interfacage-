void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:

  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  //float corrige=(3.3/4096.0)*(1241.0*((sensorValue+190.0)/1232.0))*1000;
  float corrige=(3.3/4096.0)*(1241.0*((sensorValue)/1241.0))*1000;
  float tmp= (corrige-500)/10;
  Serial.println(corrige);
Serial.print ("Tmp : ");
 Serial.println (tmp);

