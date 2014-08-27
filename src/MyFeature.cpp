/*
 * MyFeature.cpp
 *
 *  Created on: 27 Aug 2014
 *      Author: up45
 */

#include "MyFeature.h"

using namespace mine;

MyFeature::MyFeature() {
    // TODO Auto-generated constructor stub

}

MyFeature::~MyFeature() {
    // TODO Auto-generated destructor stub
}

/** Return a rubbish filename
  \rst
  :return: A rubbish filename
  :rtype: a reference to a :cpp:type:`const std::string`
  \endrst

  \return constant reference to a filename string
*/
const std::string& MyFeature::getFilename() const {
    return filename;
}

/** store a filename in memory

Not sure why we would want to keep it, but hey!

\param filename - the rubbish filename to store
\return nothing whatsoever
*/
void MyFeature::setFilename(const std::string& filename) {
    this->filename = filename;
}

std::string MyFeature::generateRubbish(int variable) {
}
