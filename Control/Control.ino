int pinRight = 3;                 
int pinLeft = 2;
int pinBack= 1;
int pinFront = 0;

void setup()
{
  pinMode(pinRight, OUTPUT);      
  pinMode(pinLeft, OUTPUT);
  pinMode(pinBack, OUTPUT);
  pinMode(pinFront, OUTPUT);
}

void loop()
{
  turnRight();   
  delay(2000);                  
  turnLeft();    
  delay(2000);
  stopTurn();
  delay(2000);
  goBack();   
  delay(2000);                  
  goFront();    
  delay(2000);
  stopGo();
  delay(2000);  
  turnLeft();
  goFront();
  delay(2000);
  turnRight();
  delay(2000);
  stopAll();
  delay(4000);
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
