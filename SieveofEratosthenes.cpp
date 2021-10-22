vector<bool> primes(n+4,true);

prime[0] = prime[1] = false;

// Time complexity = O(nlog(logn))
for (int i = 2; i*i <= n; i++){
  if (prime[i]){
    for (int j = i*i; j <=n; j+=i){
      prime[i] = false;
    }
  }
}
