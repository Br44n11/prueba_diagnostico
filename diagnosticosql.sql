SELECT courses.name,courses.start_date,evaluations.AVG(score),evaluations.STDDEV(score),evaluations.MIN(score),evaluations.MAX(score) 
FROM evaluations,exams,course
WHERE evaluations.exam_fk=exams.pk and exams.course_fk=courses.pk
GROUP BY courses.name,courses.start_date;