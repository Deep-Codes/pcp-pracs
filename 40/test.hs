import Data.Char (isLower)

toLowerString :: [Char] -> [Char]
toLowerString str = [x | x <- str, isLower x]

-- *  Correct AFFF