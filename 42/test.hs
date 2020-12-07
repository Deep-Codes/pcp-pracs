-- in cmd write quicksort [1,12,60,6] or any list
-- first elemet in taken as pivot

-- Divides array into 2 arrays
-- And Joins them in the end
quicksort :: (Ord a) => [a] -> [a]
quicksort [] = []
quicksort (x : xs) =
  let smallerSorted = quicksort [a | a <- xs, a <= x]
      biggerSorted = quicksort [a | a <- xs, a > x]
   in smallerSorted ++ [x] ++ biggerSorted