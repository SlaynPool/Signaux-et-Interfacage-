  Serial.print("sensor = ");
  float corrige=(3.3/4096.0)*(1241.0*((sensorValue+190.0)/1232.0));
  int angle= corrige*109;
  Serial.println(corrige);
  Serial.print ("Angle : ");
  Serial.println (angle);

