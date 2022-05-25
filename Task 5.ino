const int trigPin = 12;
const int echoPin = 13;

const int LED1 = 7;
const int LED2 = 6;
const int LED3 = 5;
const int LED4 = 4;

int duration = 0;
int distance = 0;

void setup() 
{
  pinMode(trigPin , OUTPUT);
  pinMode(echoPin , INPUT);
  
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
 
  Serial.begin(9600);

}

void loop()
{
 digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  duration = pulseIn(echoPin, HIGH);
  distance = duration/58.2;

  if ( distance <= 100 )
  {
    digitalWrite(LED1, HIGH);
     digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
       digitalWrite(LED4, LOW);
  }
    
  else if ( distance <= 200 )
  {
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, LOW);
    
  }
 
 else if ( distance <= 300 )
  {
    digitalWrite(LED3, HIGH);
     digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED4, LOW);
  } 
 
 else if ( distance <= 400 )
  {
    digitalWrite(LED4, HIGH);
     digitalWrite(LED1, LOW);
    digitalWrite(LED3, LOW);
    digitalWrite(LED2, LOW);
  }
  else
  {
    digitalWrite(LED4, LOW);
  }
  
  delay(100);
}
