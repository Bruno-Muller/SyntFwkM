/* 
 * File:   or.h
 * Author: CHEVALIER Simon 2A-IR ENSISA <simon.cvr@gmail.com>
 *
 * Created on 13 mars 2013, 10:25
 */

#ifndef OR_H
#define	OR_H

#include "binaryexpression.h"

namespace fuzzy
{
    template <class T>
    class Or : public core::BinaryExpression<T>
    {
        public:
            virtual ~Or() {};
    };
}

#endif	/* OR_H */

