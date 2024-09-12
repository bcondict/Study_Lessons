USE `cohort_21`;
-- ALTER TABLE `users` ADD COLUMN `age` INT NOT NULL DEFAULT 18 AFTER `password`;
-- ALTER TABLE `users` MODIFY COLUMN `name` VARCHAR(255) NOT NULL DEFAULT 'John Doe';
-- ALTER TABLE `users` CHANGE COLUMN `age` `user_age` INT;
ALTER TABLE `users` DROP COLUMN `user_age`;

-- UPDATE `users` SET `name` = 'Jesus', `email` = 'jesus@gmail.com' WHERE `id` = 3;
