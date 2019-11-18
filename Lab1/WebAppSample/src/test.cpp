#include <igloo/igloo.h>

#include "myLib.h"

using namespace igloo;


Context(AdderFunction) {

	Spec(SimpleTestAdd) {
		Assert::That(add(3, 5), Equals(8));
	}

	Spec(AddNegativeNumbers) {
		Assert::That(add(-5, -2), Equals(-7));
	} 

	Spec(AddPositiveAndNegative) {
		Assert::That(add(-4, 3), Equals(-1));
	}

	Spec(SimpleTestMultiply){
		Assert::That(product(2,1), Equals(2));
	}
    
	Spec(MultiplyNegativeNumbers) {
		Assert::That(product(-3,-7), Equals(21));
	}

	Spec(MultiplyPositiveAndNegative) {
		Assert::That(product(-7,2), Equals(-14));
	}
	
};

int main() {
	// Run all the tests defined above
	return TestRunner::RunAllTests();
}
