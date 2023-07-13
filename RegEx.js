function isPrime(n) {
    return !/^1?$|^(11+?)\1+$/.test('1'.repeat(n));
}

  console.log(isPrime(10));  // false
  console.log(isPrime(11));  // true
  console.log(isPrime(12));  // false
  console.log(isPrime(13));  // true