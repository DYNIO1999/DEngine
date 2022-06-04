#ifndef DENGINEPROJECT_ASSERT_H
#define DENGINEPROJECT_ASSERT_H
#include <cassert>
#include "LogManager.h"



#define DENGINE_ASSERT_NO_INFO(condition){if(!(condition)){DENGINE_ERROR("Assertion Failed:"); assert(false); }}
#define DENGINE_ASSERT_INFO(condition, message){if(!(condition)){DENGINE_ERROR("Assertion Failed: {}",message); assert(false);}}

#endif
