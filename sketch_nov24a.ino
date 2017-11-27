int out_pin2 = 2;
int out_pin3 = 3; 
int out_pin4 = 4; 
int out_pin5 = 5; 
int out_pin6 = 6;
int out_pin7 = 7; 
int out_pin8 = 8;
int out_pin9 = 9;
int out_pin10= 10;
int out_pin11= 11; 
int out_pin12= 12; 
int out_pin13= 13;

void setup() {
  // put your setup code here, to run once:
  analogReference(DEFAULT);
  pinMode(out_pin2, OUTPUT);
  pinMode(out_pin3, OUTPUT);
  pinMode(out_pin4, OUTPUT);
  pinMode(out_pin5, OUTPUT);
  pinMode(out_pin6, OUTPUT);
  pinMode(out_pin7, OUTPUT);
  pinMode(out_pin8, OUTPUT);
  pinMode(out_pin9, OUTPUT);
  pinMode(out_pin10, OUTPUT);
  pinMode(out_pin11, OUTPUT);
  pinMode(out_pin12, OUTPUT);
  pinMode(out_pin13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<2; i++){
    delay(1000);
    if(i == 0){
      digitalWrite(out_pin2, LOW);
      digitalWrite(out_pin3, LOW);
      digitalWrite(out_pin4, LOW); 
      digitalWrite(out_pin5, LOW);
      digitalWrite(out_pin6, LOW);
      digitalWrite(out_pin7, LOW); 
      digitalWrite(out_pin8, HIGH);
      digitalWrite(out_pin9, HIGH);
      digitalWrite(out_pin10, HIGH);
      digitalWrite(out_pin11, HIGH); 
      digitalWrite(out_pin12, HIGH);
      digitalWrite(out_pin13, HIGH); 
    }
    else if(i == 1){
      digitalWrite(out_pin2, HIGH);
      digitalWrite(out_pin3, HIGH);
      digitalWrite(out_pin4, HIGH); 
      digitalWrite(out_pin5, HIGH);
      digitalWrite(out_pin6, HIGH);
      digitalWrite(out_pin7, HIGH); 
      digitalWrite(out_pin8, LOW);
      digitalWrite(out_pin9, LOW);
      digitalWrite(out_pin10, LOW);
      digitalWrite(out_pin11, LOW); 
      digitalWrite(out_pin12, LOW);
      digitalWrite(out_pin13, LOW); 
    }
  }
}
