/*
 * ewha_ssp_hw1_1.cpp
 *
 * 37269-01 Smart Software Project
 * GitHub Setup Homework 
 * Instructor: Prof. HyungJune Lee
 *
 * Coded by BIBI ASIMA
 * Mar 28, 2016
 *
 */

void setup()
{
	pinMode(Front_LED, OUTPUT);
	pinMode(Rear_LED,OUTPUT);// Add your initialization code here
}

// The loop function is called in an endless loop
void loop()
{

	for(int i=0;i<255;i++){
	analogWrite(Front_LED,i);
	analogWrite(Rear_LED,255-i);
	delay(11);
	}

	for(int i=255;i>0;i--){
	analogWrite(Front_LED,i);
	analogWrite(Rear_LED,255-i);
	delay(11);
	}

}
