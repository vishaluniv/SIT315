const byte slider = 2;
const byte button = 3;
const byte led = 13;

  
bool led_state = false;

void setup() {
  Serial.begin(9600);
 
  pinMode(led, OUTPUT);     
  pinMode(slider, INPUT);
  pinMode(button, INPUT);

  attachInterrupt(digitalPinToInterrupt(slider), Slider, HIGH);
  attachInterrupt(digitalPinToInterrupt(button), ButtonPress, RISING);
  
}

void loop() {
  delay(10);
  //
}

void Slider()
{
  led_state = !led_state;
  digitalWrite(led, led_state);
  Serial.println("");
  Serial.println("Slider interrupt");
  
}

void ButtonPress(){
  led_state = !led_state;
  digitalWrite(led, led_state);
  Serial.println("");
  Serial.println("Button interrupt");
  
}

