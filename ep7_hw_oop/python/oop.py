
class Car:
	def __init__( self ):
		print( "Car created.\n" )

	def __del__( self ):
		print( "Car destroyed.\n" )

	def openAshtray( self ):
		print( "Ashtray opened.\n" )

class SpyCar( Car ):
	def __init__( self ):
		print( "SpyCar created.\n" )

	def __del__( self ):
		print( "SpyCar destroyed.\n" )

	def openAshtray( self ):
		super().openAshtray()
		print( "Ejector seat deployed.\n" )

car = Car()
spyCar = SpyCar()

car.openAshtray()
spyCar.openAshtray()
