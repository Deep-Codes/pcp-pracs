-- -- in prelude
-- ? declare list first

-- list = [150..300]
-- --one method
-- filter(\list->list `mod` 8 == 3) list

--  ? other method

-- list = [x|x<-[150..300], x `mod` 8 == 3]
-- -- in above method
-- -- list = [var | var <- [range] , condition ]