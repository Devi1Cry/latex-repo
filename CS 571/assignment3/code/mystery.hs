mystery n m
      | n == m = [n]
      | n < m = n:(mystery (n+1) m)
      | n > m = n:(mystery (n-1) m)
