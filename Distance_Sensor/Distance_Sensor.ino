const int echoPin = 10;
const int trigPin = 9;
const int led1 = 7;
const int led2 = 6;
const int led3 = 5;
const int led4 = 4;
const int led5 = 3;
const int led6 = 2;

int duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.017;


  if(distance >= 5){
    digitalWrite(led1, HIGH);
  }

  if(distance >= 10){
    digitalWrite(led2, HIGH);
  }

  if(distance >= 15){
    digitalWrite(led3, HIGH);
  }

  if(distance >= 20){
    digitalWrite(led4, HIGH);
  }

  if(distance >= 25){
    digitalWrite(led5, HIGH);
  }

  if(distance >= 30){
    digitalWrite(led6, HIGH);
  }

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
  delayMicroseconds(300);
}
