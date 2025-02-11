# Type Mismatch Error in Hack Function Calls

This repository demonstrates a type mismatch error in Hack that can occur when calling functions with integer arguments and return values. The error message is not very helpful, making debugging challenging.  This example focuses on the unexpected behavior and demonstrates a solution.

## Problem
The `baz` function calls `bar`, which calls `foo`.  All functions seem to handle integers correctly, yet a type error is thrown.

## Solution
The solution involves carefully reviewing the function signatures and argument types to ensure consistency. The original error stems from a missing type declaration or incorrect return type declaration, in this case, in function `foo`.