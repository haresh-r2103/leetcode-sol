SELECT c.id
FROM Weather c
JOIN Weather y 
  ON DATEDIFF(c.recordDate, y.recordDate) = 1
WHERE c.temperature > y.temperature;
