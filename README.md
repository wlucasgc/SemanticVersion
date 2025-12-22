# SemanticVersion

[![Arduino Library Badge](https://badgen.net/badge/platform/Arduino/blue?icon=arduino)](https://www.arduino.cc/)
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

**SemanticVersion** is a lightweight Arduino library that brings Semantic Versioning (SemVer) to your projects. Treat software versions as intuitive objects.

## Semantic Versioning

Semantic Versioning (MAJOR.MINOR.PATCH) standardizes version handling. 

This library abstracts it into a simple `SemanticVersion` class, perfect for:
- Printing current software versions to Serial Monitor.
- Firmware upgrade logic.
- Release tracking in IoT devices.

## Features

- **Creation**: Create a `SemanticVersion` object from major, minor and patch numbers.
- **Serial Output**: Print versions in human-readable formats.

## Quick Start

### Installation
1. Download or clone this repo.
2. Install via Arduino IDE: `Sketch > Include Library > Add .ZIP Library`.

### Basic Usage

```cpp
#include <SemanticVersion.h>

SemanticVersion version(1, 2, 3);

void setup() {
    Serial.begin(9600);

    Serial.println("Version: " + version.toString());
}

void loop() {}
```

## API Overview

- `SemanticVersion()`: Default constructor (0.0.0).
- `SemanticVersion(const uint16_t major, const uint16_t minor, const uint16_t patch)`: Constructor from major, minor and patch.
- `const uint16_t major() const`, `const uint16_t minor() const`, `const uint16_t patch() const`: Access components.
- `const String toString() const`: Formatted string output.

## Compatibility
- Arduino AVR (Uno, Nano, etc.)
- ESP32/ESP8266
- Tested with Arduino IDE 2.x
- Tested with PlatformIO

## License
MIT License - see [LICENSE](LICENSE).
