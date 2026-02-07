int rm_motor1 = 11;
int rm_motor2 = 6;
int pm_motor1 = 12;
int pm_motor2 = 7;

int ir_panel = 2;

int ldr_pin = A0;
int moisture_pin = A1;
int rain_sensor = A5;

int read_ldr;
int read_moisture;
int rain_reading;

int ldr_threshold;
int moisture_threshold;

boolean rainMode;
boolean plasticAtTop = false;

void setup() {
  Serial.begin(9600);
  pinMode(ldr_pin, INPUT);
  pinMode(moisture_pin, INPUT);
  pinMode(rain_sensor, INPUT);
  
  pinMode(ir_panel, OUTPUT);
  
  //Motors
  pinMode(rm_motor1, OUTPUT);
  pinMode(rm_motor2, OUTPUT);
  pinMode(pm_motor1, OUTPUT);
  pinMode(pm_motor2, OUTPUT);

}

void loop() {
  ldr_threshold = 500;
  moisture_threshold = 650;
  

  read_ldr = analogRead(ldr_pin);
  read_moisture = analogRead(moisture_pin);
  rain_reading = analogRead(rain_sensor);

  if (read_ldr < ldr_threshold) {
    if (read_moisture > moisture_threshold) {
      rainMode = true;
    } else {
      rainMode = false;
    }
  } else {
    rainMode = false;
  }
  
  if(rain_reading > 0){
    rainMode = true;
  }

  Serial.print("RainMode: ");
  Serial.println(rainMode);
  delay(500);
  
  // Opening Plastic Sheet
  if (rainMode && !plasticAtTop) {
    Serial.println("Opening Sheet");
    
    // turning on both motors
    digitalWrite(rm_motor1, LOW);
    digitalWrite(rm_motor2, HIGH);
    
    digitalWrite(pm_motor1, LOW);
    digitalWrite(pm_motor2, HIGH);
    
    delay(5000);
    
    // turning off both motors
    digitalWrite(rm_motor1, LOW);
    digitalWrite(rm_motor2, LOW);
    
    digitalWrite(pm_motor1, LOW);
    digitalWrite(pm_motor2, LOW);
    
    // turning on IR Panel
    digitalWrite(ir_panel, HIGH);
    
    plasticAtTop = true;
  }
  
  // Closing Sheet
  if (!rainMode && plasticAtTop) {
    Serial.println("Closing Sheet");
    
    // turning off IR Panel
    digitalWrite(ir_panel, LOW);
    
    // turning on both motors
    digitalWrite(rm_motor1, HIGH);
    digitalWrite(rm_motor2, LOW);
    
    digitalWrite(pm_motor1, HIGH);
    digitalWrite(pm_motor2, LOW);
    
    delay(5000);
    
    // turning off both motors
    digitalWrite(rm_motor1, LOW);
    digitalWrite(rm_motor2, LOW);
    
    digitalWrite(pm_motor1, LOW);
    digitalWrite(pm_motor2, LOW);
    plasticAtTop = false;
  }
}