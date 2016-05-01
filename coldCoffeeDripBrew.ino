//Cold Coffee Drip Brew Tower
//John Edgar Park
//jp@jpixl.net


const int valvePin = 3;
const int ledPin = 13;

const int openPin = A1;
const int closePin = A0;

int openValue = 187;//good default. if you don't use knobs, adjust here
int closeValue = 2500;//good default. if you don't use knobs, adjust here



void setup() {
  //Debugging output
  //Serial.begin(9600);
  pinMode(valvePin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  //read the analog potentiometers
  openValue = analogRead(openPin);
  openValue = map(openValue, 0, 1023, 0, 4000);
  closeValue = analogRead(closePin);
  closeValue = map(closeValue, 0, 1023, 0, 8000);

  //open
  digitalWrite(ledPin, HIGH);
  digitalWrite(valvePin, HIGH);
  //delay
  delay(openValue);
  //Serial.println("open");
  //Serial.println(openValue);
  //close
  digitalWrite(ledPin, LOW);
  digitalWrite(valvePin, LOW);
  //delay
  delay(closeValue);
  // Serial.println("closed");
  // Serial.println(closeValue);
}
