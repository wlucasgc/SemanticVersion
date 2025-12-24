//=================================================================================================
// SEMANTIC VERSION
//=================================================================================================

#include "SemanticVersion.h"

//=================================================================================================
// CONSTRUCTOR 1
//=================================================================================================

SemanticVersion::SemanticVersion():
    SemanticVersion(0, 0, 0) {    
}

//=================================================================================================
// CONSTRUCTOR 2
//=================================================================================================

SemanticVersion::SemanticVersion(const uint16_t& major, const uint16_t& minor, const uint16_t& patch):
    _major(major),
    _minor(minor),
    _patch(patch) {
}

//=================================================================================================
// CONSTRUCTOR 3
//=================================================================================================

SemanticVersion::SemanticVersion(const String& versionString) {
    sscanf(versionString.c_str(), "%d.%d.%d", &this->_major, &this->_minor, &this->_patch);
}

//=================================================================================================
// MAJOR
//=================================================================================================

const uint16_t SemanticVersion::major() const {
    return(this->_major);
}

//=================================================================================================
// MINOR
//=================================================================================================

const uint16_t SemanticVersion::minor() const {
    return(this->_minor);
}

//=================================================================================================
// PATCH
//=================================================================================================

const uint16_t SemanticVersion::patch() const {
    return(this->_patch);
}

//=================================================================================================
// SOFTWARE VERSION AS A STRING
//=================================================================================================

const String SemanticVersion::toString(const bool v) const {
    String versionString;
    
    versionString += v ? "v" : "";
    versionString += String(this->_major) + ".";
    versionString += String(this->_minor) + ".";
    versionString += String(this->_patch);

    return(versionString);
}

//=================================================================================================
// OPERATIONS
//=================================================================================================

const bool SemanticVersion::operator==(const SemanticVersion& other) const {
    return(this->_major == other._major && this->_minor == other._minor && this->_patch == other._patch);
}

const bool SemanticVersion::operator!=(const SemanticVersion& other) const {
    return(this->_major != other._major || this->_minor != other._minor || this->_patch != other._patch);
}

const bool SemanticVersion::operator<(const SemanticVersion& other) const {
    if(this->_major > other._major) {
        return(false);
    }
    
    if(this->_major < other._major) {
        return(true);
    }
    
    if(this->_minor > other._minor) {
        return(false);
    }
    
    if(this->_minor < other._minor) {
        return(true);
    }

    if(this->_patch >= other._patch) {
        return(false);
    }
    
    return(true);
}

const bool SemanticVersion::operator>(const SemanticVersion& other) const {
    if(this->_major < other._major) {
        return(false);
    }

    if(this->_major > other._major) {
        return(true);
    }
    
    if(this->_minor < other._minor) {
        return(false);
    }

    if(this->_minor > other._minor) {
        return(true);
    }
    
    if(this->_patch <= other._patch) {
        return(false);
    }
    
    return(true);
}

const bool SemanticVersion::operator<=(const SemanticVersion& other) const {
    if(this->_major > other._major) {
        return(false);
    }

    if(this->_major < other._major) {
        return(true);
    }
    
    if(this->_minor > other._minor) {
        return(false);
    }

    if(this->_minor < other._minor) {
        return(true);
    }
    
    if(this->_patch > other._patch) {
        return(false);
    }
    
    return(true);
}

const bool SemanticVersion::operator>=(const SemanticVersion& other) const {
    if(this->_major < other._major) {
        return(false);
    }

    if(this->_major > other._major) {
        return(true);
    }
    
    if(this->_minor < other._minor) {
        return(false);
    }

    if(this->_minor > other._minor) {
        return(true);
    }
    
    if(this->_patch < other._patch) {
        return(false);
    }
    
    return(true);
}

//=================================================================================================