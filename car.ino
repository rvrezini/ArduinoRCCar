int R_forward = 5;
int R_reverse = 3;
int L_forward = 6;
int L_reverse = 9;
int delay_time_on = 500; // how long should each wheel turn?
int delay_time_off = 2000; // delay between tests

char command = 'S';


void setup() {

  // Turn these pins on for PWM OUTPUT
  pinMode(R_forward, OUTPUT);
  pinMode(R_reverse, OUTPUT); 
  pinMode(L_forward, OUTPUT); 
  pinMode(L_reverse, OUTPUT);
  // turn all the motors off
  digitalWrite(R_forward, LOW);
  digitalWrite(R_reverse, LOW);
  digitalWrite(L_forward, LOW);
  digitalWrite(L_reverse, LOW);
 
  Serial.begin(9600);       //Config serial for bluetooth

  Stop();
}

void loop() {

  command = Serial.read();   //Read Bluetooth

  switch(command)
  {
    case 'S':
        Stop();
        break;
    case 'F':
        Forward();
        break;
    case 'B':
        Backward();
        break;
    case 'R':
        Right();
        break;
    case 'L':
        Left();
        break;
  }
}

void Stop(){
  digitalWrite(R_forward, LOW);
  digitalWrite(L_forward, LOW);
  digitalWrite(R_reverse, LOW);
  digitalWrite(L_reverse, LOW);
}

void Forward(){
  digitalWrite(R_forward, HIGH);
  digitalWrite(L_forward, HIGH);
}

void Backward(){
  digitalWrite(R_reverse, HIGH);
  digitalWrite(L_reverse, HIGH);
}

void Left(){
  digitalWrite(R_forward, HIGH);
  digitalWrite(L_reverse, HIGH);
}

void Right(){
  digitalWrite(R_reverse, HIGH);
  digitalWrite(L_forward, HIGH);
}

