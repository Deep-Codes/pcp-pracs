-- in cmd write fib 10 or fib any_number

fib :: Int -> Int
fib n
  | n == 0 = 0
  -- these statement are like if else e.g if n== 0 then in next statement
  -- if n==1
  -- last in last statement it checks that if n is not equal to zero (/= is not --equal)
  | n == 1 = 1
  | n /= 0 = fib (n -1) + fib (n -2)

-- to write else statement you can write like this
--    | otherwise fib(n-1)+fib(n-2)
-- otherwise is like else in haskell