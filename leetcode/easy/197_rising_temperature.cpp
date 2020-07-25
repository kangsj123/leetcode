# Write your MySQL query statement below

SELECT weather.Id 
FROM Weather
         JOIN
     weather w ON DATEDIFF(weather.RecordDate, w.RecordDate) = 1
         AND weather.Temperature > w.Temperature
