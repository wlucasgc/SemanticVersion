//=================================================================================================
// SEMANTIC VERSION
//=================================================================================================

#ifndef SEMANTIC_VERSION_H
#define SEMANTIC_VERSION_H

#include <Arduino.h>

class SemanticVersion {
    private:
        uint16_t _major;
        uint16_t _minor;
        uint16_t _patch;
        String _suffix;

    public:
        explicit SemanticVersion();
        explicit SemanticVersion(const uint16_t& major, const uint16_t& minor, const uint16_t& patch, const String& suffix = "");
        explicit SemanticVersion(const String& versionString);
        
        const uint16_t major() const;
        const uint16_t minor() const;
        const uint16_t patch() const;
        const String suffix() const;
        const String toString(const bool v = false) const;

        const bool operator==(const SemanticVersion& other) const;
        const bool operator!=(const SemanticVersion& other) const;
        const bool operator<(const SemanticVersion& other) const;
        const bool operator>(const SemanticVersion& other) const;
        const bool operator<=(const SemanticVersion& other) const;
        const bool operator>=(const SemanticVersion& other) const;
};

#endif

//=================================================================================================