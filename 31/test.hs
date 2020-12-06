isEvenOdd :: Int -> IO ()
isEvenOdd num
  | num `mod` 2 == 0 = do
    putStrLn "Even Number"
  | otherwise = do
    putStrLn "Odd Number"