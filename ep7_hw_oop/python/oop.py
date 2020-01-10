
class Car:
	def __init__( self ):
		print( "Car created." )

	def __del__( self ):
		print( "Car destroyed." )

	def openAshtray( self ):
		print( "Ashtray opened." )

class SpyCar( Car ):
	def __init__( self ):
		print( "SpyCar created." )

	def __del__( self ):
		print( "SpyCar destroyed." )

	def openAshtray( self ):
		super().openAshtray()
		print( "Ejector seat deployed." )

car = Car()
spyCar = SpyCar()

car.openAshtray()
spyCar.openAshtray()
