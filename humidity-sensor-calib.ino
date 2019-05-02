

int s1 = 0;
int s2 = 1;
int s3 = 2;

int val[2];

void setup(){
	Serial.begin(1000000);
}

void loop(){
	for(int i = 0; i < 3; i++){
		val[i] = analogRead(i);
	}

	if(Serial.available()){
		for(int i = 0; i < 3; i++){
			Serial.print("S");
			Serial.print(i);
			Serial.print(": ");
			
			Serial.print(val[i]);
			Serial.print("   ");
		}

		Serial.println(" ");

	}
}
