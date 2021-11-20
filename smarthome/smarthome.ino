int led = 13; 
int led1 = 8;
int sensor = 2;             
int statusPir = LOW;         
int data = 0;               
int sensorInput = A1;


void setup() {
  pinMode(led, OUTPUT);    
  pinMode(led1, OUTPUT); 
  pinMode(sensor, INPUT);    
  Serial.begin(9600);        
}

void loop(){
  data = digitalRead(sensor); 
  if ((data == HIGH) && (statusPir == LOW)) {           
    digitalWrite(led, HIGH);
      Serial.println("nyala"); 
      statusPir = HIGH;       
    } 
  else {
      if ((data == HIGH) && (statusPir == HIGH)) {
         digitalWrite(led, LOW);
      Serial.println("mati"); 
      statusPir = LOW;
      }
  }
 int lightLevel = analogRead(A0);

  if (lightLevel > 230) {
    digitalWrite(led1, LOW);
  } else {
    digitalWrite(led1, HIGH);
  }
  Serial.println(lightLevel);
}
