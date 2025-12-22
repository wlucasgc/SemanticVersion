#include <SemanticVersion.h>

SemanticVersion current(1, 2, 3);
SemanticVersion latest("1.3.0");

void setup() {
    Serial.begin(9600);

    Serial.println("Current: " + current.toString());
    Serial.println("Latest:  " + latest.toString());
}

void loop() {}