#ifndef REAL_H
#define REAL_H

#include "Number.h"


class Real : public Number
{
public:
    virtual bool operator<(const Real& real);
    virtual bool operator<=(const Real& real);
    virtual bool operator>(const Real& real);
    virtual bool operator>=(const Real& real);
    const double getImaginaryPart() const;
};

#endif // REAL_H
