/*
 * MyFeature.h
 *
 *  Created on: 27 Aug 2014
 *      Author: up45
 */

#ifndef MYFEATURE_H_
#define MYFEATURE_H_

#include <string>

/** This is really my namespace
 Nobody tramples on my namespace - it's mine!
 */
namespace mine{

/** MyFeature is the most interesting class ever

Except it does not do much of anything but generate rubbish.

\rst
This class has an important function: :cpp:func:`MyFeature::generateRubbish()`
\endrst

*/
class MyFeature {
public:
    MyFeature();
    virtual ~MyFeature();
    const std::string& getFilename() const;
    void setFilename(const std::string& filename);

    /** Enrich the world with rubbish

       \param variable - Just an unused bit of data
       \return Some sort of rubbish string
     */
    std::string generateRubbish(int variable);
private:

    std::string filename; /**< We store a filename here! */
};

} /* end of mine namespace */

#endif /* MYFEATURE_H_ */
