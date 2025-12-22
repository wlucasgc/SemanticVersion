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

    public:
        explicit SemanticVersion();
        explicit SemanticVersion(const uint16_t& major, const uint16_t& minor, const uint16_t& patch);
        
        const uint16_t major() const;
        const uint16_t minor() const;
        const uint16_t patch() const;
        
        const String toString() const;
};

#endif

//=================================================================================================