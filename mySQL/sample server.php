<?php
                $host = "IP of database";
                $user = "username";
                $pass = "password";
                $db = "database name";

                //Makes connection
                $conn = mysqli_connect($host, $user, $pass, $db, 3306);
                if (!$conn) {
                    //If connection failed
                    die ('Failed to connect to MySQL: ' . mysqli_connect_error());
                }

                //Create a query and run it
                $sql = 'SELECT * FROM members';
                $query = mysqli_query($conn, $sql);

                //If it failed...
                if (!$query) {
                    die ('SQL Error: ' . mysqli_error($conn));
                }
                ?>