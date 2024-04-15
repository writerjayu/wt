//S7.1
//save this with  s7.php

<?php
 $doc=new DOMDocument();
 $doc->load("s7_Movie.xml");
 $i = $doc->getElementsByTagName("MovieInfo");
 echo "<table border=1><tr><th>MovieName</th><th>ActorName</th></tr>";
 foreach ($i as $movies)
 {
   $mname=$movies->getElementsByTagName("MovieTitle");
   $name=$mname->item(0)->nodeValue;
   $acname=$movies->getElementsByTagName("ActorName");
   $aname=$acname->item(0)->nodeValue;
   echo "<tr><td>$name=></td><td>$aname</td></tr>";
 }
echo "</table>"; 
?>


//save this with s7_Movie.xml

<?xml version="1.0" encoding="UTF-8"?>
<Movie>
	<MovieInfo>
		<MovieNo>1</MovieNo>
		<MovieTitle>Sholay</MovieTitle>
		<ActorName>Amitabh Bacchan</ActorName>
		<ReleaseYear>1975</ReleaseYear>
	</MovieInfo>
	<MovieInfo>
		<MovieNo>2</MovieNo>
		<MovieTitle>MotherIndia</MovieTitle>
		<ActorName>Sunil dutt</ActorName>
		<ReleaseYear>1957</ReleaseYear>
	</MovieInfo>
	<MovieInfo>
		<MovieNo>3</MovieNo>
		<MovieTitle>The Conjuring</MovieTitle>
		<ActorName>Martin</ActorName>
		<ReleaseYear>2013</ReleaseYear>
	</MovieInfo>
	<MovieInfo>
		<MovieNo>4</MovieNo>
		<MovieTitle>Blood</MovieTitle>
		<ActorName>Philips</ActorName>
		<ReleaseYear>2011</ReleaseYear>
	</MovieInfo>
	<MovieInfo>
		<MovieNo>5</MovieNo>
		<MovieTitle>KGF</MovieTitle>
		<ActorName>Yash</ActorName>
		<ReleaseYear>2018</ReleaseYear>
	</MovieInfo>
	<MovieInfo>
		<MovieNo>6</MovieNo>
		<MovieTitle>Pushpa</MovieTitle>
		<ActorName>Allu Arjun</ActorName>
		<ReleaseYear>2022</ReleaseYear>
	</MovieInfo>
</Movie>


