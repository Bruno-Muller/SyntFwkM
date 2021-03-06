/* 
 * File:   istrapezeleft.h
 * Author: CHEVALIER Simon 2A-IR ENSISA <simon.cvr@gmail.com>
 *
 * Created on 18 mars 2013, 08:41
 */

#ifndef ISTRAPEZELEFT_H
#define	ISTRAPEZELEFT_H

#include "expression.h"
#include "is.h"

namespace fuzzy
{
    template <class T>
    class IsTrapezeLeft : public fuzzy::Is<T>
    {
        public :
            IsTrapezeLeft(const T& min, const T& midMax, const T& max);
            virtual T evaluate(const core::Expression<T>* o) const;
        private :
            T m_min, m_midMax, m_max;
    };
    
    template <class T>
    IsTrapezeLeft<T>::IsTrapezeLeft(const T& min, const T& midMax, const T& max):
        m_min(min),
        m_midMax(midMax),
        m_max(max)
    {
    }
    
    template <T>
    T IsTrapezeLeft<T>::evaluate(const core::Expression<T>* o) const
    {
        T v = o->evaluate();
        
        if (v <= m_min || v >= m_max)
                return 0;
        
        if (v <= m_midMax)
            return 1;
        
        if (v > m_midMax)
            return (m_midMax - m_max) / (v - m_max); 
        
    }
}

#endif	/* ISTRAPEZELEFT_H */

