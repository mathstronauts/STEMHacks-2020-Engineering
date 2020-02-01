int green=3;
int yellow = 4;
int red = 5;
int detector = 10;
int button1 = 11;
int button2 = 12;
int buzzer = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(detector, INPUT);
  pinMode(button1, OUTPUT);
  pinMode(button2, OUTPUT);
  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

}
