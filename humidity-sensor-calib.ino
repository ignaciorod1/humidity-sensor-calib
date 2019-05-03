

int s1 = 0;
int s2 = 1;
int s3 = 2;

int val[2];
int temp = 0;

void setup(){
	Serial.begin(9600);
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
			switch(i){
        case 0: 
          Serial.print(map(val[i], 310, 670, 100, 0));
          break;        
        case 1: 
          Serial.print(map(val[i], 320, 605, 100, 0));
          break;
        case 2:
          Serial.print(map(val[i], 310, 700, 100, 0));
          break;
			}
			Serial.print("%   ");
		}

		Serial.println(" ");

	}
}
