SELECT CONCAT('Podium: ', team) AS name FROM league WHERE position IN (1, 2, 3) UNION ALL 
SELECT CONCAT('Demoted: ', team) AS name FROM league WHERE position IN (14, 15);