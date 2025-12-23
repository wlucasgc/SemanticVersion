#include <SemanticVersion.h>

SemanticVersion current(1, 2, 3);
SemanticVersion latest("1.3.0");

void setup() {
    Serial.begin(9600);

    Serial.println("Current: " + current.toString());
    Serial.println("Latest:  " + latest.toString());

    if(current >= latest) {
        Serial.println("No update available!");
        return;
    }

    Serial.println("Update available!");
    Serial.println("Updating...");

    current = latest;
    
    Serial.println("Current: " + current.toString());
    
    if(current != latest) {
        Serial.println("Can't updated!");
        return;
    }

    Serial.println("Updated!");
}

void loop() {}