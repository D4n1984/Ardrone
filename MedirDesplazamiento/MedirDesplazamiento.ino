int pinPositivo=2;
int pinNegativo=3;
int pinA=8;
int pinN=9;

String a = "pinA ";
String n = "pinN ";

unsigned long duration;
unsigned long duration2;

void setup(){
  pinMode(pinA, INPUT);
  pinMode(pinPositivo, OUTPUT);
  pinMode(pinNegativo, OUTPUT);
  
  digitalWrite(pinNegativo, LOW);
  digitalWrite(pinPositivo, HIGH);
  
  Serial.begin(9600);
}

void loop(){
  duration = pulseIn(pinA, HIGH);
  if(duration>1) {Serial.println(duration);}
  Serial.println(" -- ");
  duration2= pulseIn(pinN, HIGH);
  if(duration2>1) {Serial.println(duration2);}
}
