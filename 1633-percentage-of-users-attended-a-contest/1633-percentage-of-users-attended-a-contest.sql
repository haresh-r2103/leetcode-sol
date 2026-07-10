SELECT contest_id, round(COUNT(u.user_id)*100.0 / (SELECT COUNT(*) FROM Users), 2) as percentage
FROM Users u
JOIN Register r ON u.user_id =  r.user_id 
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id ASC;
