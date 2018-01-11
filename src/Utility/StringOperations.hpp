//
//  StringOperations.hpp
//
//  Created by Haoyue Weng on 12/11/17.
//  Copyright © 2017 Haoyue Weng. All rights reserved.
//

#ifndef Gelato_Utility_StringOperations_hpp
#define Gelato_Utility_StringOperations_hpp

#include <string>

namespace Gelato {
	namespace Utility {
		// Process a vector: dropping '[', ']', and ','
		std::string dropBrackets(const std::string& str);
	}
}

#endif /* Gelato_Utility_StringOperations_hpp */