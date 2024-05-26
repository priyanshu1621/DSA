# Write your MySQL query statement below

-- select tweet_id from Tweets where OCTET_LENGTH(content) > '15'; 
-- select tweet_id from Tweets where CHARACTER_LENGTH(content) > '15'; 
select tweet_id from Tweets where Length(content) > '15'; 
-- select tweet_id from Tweets where CHAR_LENGTH(content) > '15'; 