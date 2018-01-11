//
//  StringOperationsTests.cpp
//  Tests
//
//  Created by Haoyue Weng on 12/11/17.
//  Copyright © 2017 Haoyue Weng. All rights reserved.
//

#include "gtest/gtest.h"
#include "StringOperations.hpp"

using namespace Gelato::Utility;

TEST(Utility, DropBrackets) {
	EXPECT_EQ("DropBrackets", dropBrackets("[DropBrackets]"));
	EXPECT_EQ("Drop Commas", dropBrackets("[Drop,Commas]"));
	EXPECT_EQ("Leave  Spaces", dropBrackets("[Leave, Spaces]"));
}