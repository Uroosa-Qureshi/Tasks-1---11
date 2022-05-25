
int irSensor = 3;

int buzzer = 2;

void setup()

{

  Serial.begin(9400);

  pinMode(irSensor, INPUT);

  pinMode(buzzer, OUTPUT);

}

void loop()

{

  int value = digitalRead(irSensor);

  Serial.println("");

  Serial.print("sensor Value = ");

  Serial.print(value);



  if(value == 0)

  {

    digitalWrite(buzzer, HIGH);

  }

  else

  {

    digitalWrite(buzzer, LOW);

  }

  delay(50);

