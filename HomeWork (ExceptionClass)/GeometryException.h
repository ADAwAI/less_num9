#ifndef GEOMETRYEXCEPTION_H
#define GEOMETRYEXCEPTION_H

#include <stdexcept>
#include <string>

class GeometryException : public std::domain_error {
public:
    explicit GeometryException(const std::string& message);
};

#endif // GEOMETRYEXCEPTION_H
