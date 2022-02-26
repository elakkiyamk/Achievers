int redled =12;
int greenled =8;
int buzzer =10;
int smokeA0 =A0;
int sensorThres =150;

void setup() {
  pinMode (redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600);
}
void loop() {
  int analogSensor=analogRead(smokeA0);
  Serial.print("pin A0: ");
  Serial.println(analogSensor);
  if(analogSensor>sensorThres)
  {
    digitalWrite(redled, HIGH);
    digitalWrite(greenled, LOW);
    tone(buzzer,3000,300);
  }
  else
  {
    digitalWrite(redled, LOW);
    digitalWrite(greenled, HIGH);
    noTone(buzzer);
  }
  delay(100);
}
