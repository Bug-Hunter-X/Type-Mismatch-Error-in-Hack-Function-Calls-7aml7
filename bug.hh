function foo(x: int): int {  return x + 1; }

function bar(x: int): int {  return foo(x) * 2; }

function baz(x: int): int {  return bar(x) - 1; }

function main(): void {  echo baz(5); // expected output is 11,  but throws an error because of the type mismatch}