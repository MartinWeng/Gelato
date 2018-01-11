//
//  StringOperations.cpp
//  Tests
//
//  Created by Haoyue Weng on 12/11/17.
//  Copyright © 2017 Haoyue Weng. All rights reserved.
//

#include "StringOperations.hpp"

namespace Gelato {
	namespace Utility {
/*----------------------------------------------------------------------------*/
		
std::string dropBrackets(const std::string& str) {
	std::string res;
	for (auto c : str) {
		if (c == ',')
			res.push_back(' ');
		else if (c != '[' && c != ']')
			res.push_back(c);
	}
	return res;
}
		
/*----------------------------------------------------------------------------*/
	}
}