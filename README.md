# SemanticVersion

[![Arduino Library Badge](https://badgen.net/badge/platform/Arduino/blue?icon=arduino)](https://www.arduino.cc/)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

**SemanticVersion** is a lightweight Arduino library that brings Semantic Versioning (SemVer) to your projects. Treat software versions as intuitive objects — parse, compare, print, and manage them effortlessly.

## Semantic Versioning

Semantic Versioning (MAJOR.MINOR.PATCH) standardizes version handling. 

This library abstracts it into a simple `SemanticVersion` class, perfect for:
- Printing current software versions to Serial Monitor.
- Comparing versions (e.g., check if an update is available).
- Firmware upgrade logic.
- Release tracking in IoT devices.

## Features

- **Creation**: Create a `SemanticVersion` object from major, minor and patch numbers.
- **Parsing**: Convert strings like `"1.2.3"` into `SemanticVersion` objects.
- **Comparison**: Use operators `==`, `!=`, `>`, `<`, `>=`, `<=` for straightforward checks.
- **Serial Output**: Print versions in human-readable formats.

## Quick Start

### Installation
1. Download or clone this repo.
2. Install via Arduino IDE: `Sketch > Include Library > Add .ZIP Library`.

### Basic Usage

```cpp
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
```

## API Overview

- `SemanticVersion()`: Default constructor (0.0.0).
- `SemanticVersion(const uint16_t major, const uint16_t minor, const uint16_t patch)`: Constructor from major, minor and patch.
- `SemanticVersion(const String& version)`: Constructor from string.
- `const uint16_t major() const`, `const uint16_t minor() const`, `const uint16_t patch() const`: Access components.
- `const String toString() const`: Formatted string output.
- `const bool operator==(const SemanticVersion& other) const`: Comparison operators.

## Examples

Check the `examples/` folder for:
- Basic usage
- Comparing versions

## Compatibility
- Arduino AVR (Uno, Nano, etc.)
- ESP32/ESP8266
- Tested with Arduino IDE 2.x
- Tested with PlatformIO

## License
MIT License - see [LICENSE](LICENSE).
