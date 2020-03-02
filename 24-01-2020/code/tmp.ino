const int analogInPin = A3;  // Analog input pin that the potentiometer is attached to


int sensorValue = 0;        // value read from the pot


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(115200);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  // map it to the range of the analog out:

  // print the results to the Serial Monitor:
  Serial.print("sensor = ");
  float corrige=(3.3/4096.0)*(1241.0*((sensorValue+190.0)/1232.0))*1000;
  float tmp= (corrige-500)/10; 
  Serial.println(corrige);
Serial.print ("Tmp : ");
 Serial.println (tmp);


  // wait 2 milliseconds before the next loop for the analog-to-digital
  // converter to settle after the last reading:
  delay(2);
}
