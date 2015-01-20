int pinRight = 5;                 
int pinLeft = 4;
int pinBack= 3;
int pinFront = 2;

void setup()
{
  pinMode(pinRight, OUTPUT);      
  pinMode(pinLeft, OUTPUT);
  pinMode(pinBack, OUTPUT);
  pinMode(pinFront, OUTPUT);
  Serial.begin(9600);
  Serial.println("Setup finalizado");
}

void loop()
{
  Serial.println("Derecha");
  turnRight();   
  delay(200000);  
}

void turnRight(){
 digitalWrite(pinLeft, LOW);
 digitalWrite (pinRight, HIGH);
}

void turnLeft(){
  digitalWrite(pinRight, LOW);
  digitalWrite(pinLeft, HIGH);
}

void stopTurn(){
  digitalWrite(pinRight, LOW);
  digitalWrite(pinLeft, LOW);
}

void goFront(){
  digitalWrite(pinBack, LOW);
  digitalWrite(pinFront, HIGH);
}

void goBack(){
  digitalWrite(pinFront, LOW);
  digitalWrite(pinBack, HIGH);
}

void stopGo(){
  digitalWrite(pinBack, LOW);
  digitalWrite(pinFront, LOW);
}

void stopAll(){
  digitalWrite(pinLeft, LOW);
  digitalWrite(pinRight, LOW);
  digitalWrite(pinBack, LOW);
  digitalWrite(pinFront, LOW);
}
