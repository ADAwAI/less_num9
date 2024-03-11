#include "GeometryException.h"

GeometryException::GeometryException(const std::string& message) : std::domain_error(message) {}
