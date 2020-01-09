<?php

class Car
{
	public function __construct()
	{
		print( "Car created.\n" );
	}

	public function __destruct()
	{
		print( "Car destroyed.\n" );
	}

	public function openAshtray()
	{
		print( "Ashtray opened.\n" );
	}
}


class SpyCar extends Car
{
	public function __construct()
	{
		print( "Spycar created.\n" );
	}

	public function __destruct()
	{
		print( "Spycar destroyed.\n" );
	}

	public function openAshtray()
	{
		parent::openAshtray();
		print( "Ejector seat deployed.\n" );
	}
}


$car = new Car();
$spyCar = new SpyCar();

$car->openAshtray();
$spyCar->openAshtray();
