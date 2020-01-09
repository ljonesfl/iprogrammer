
class Car
	def initialize
		puts "Car created."
	end

	def openAshtray
		puts "Ashtray opened."
	end
end

class SpyCar < Car
	def initialize
		puts "SpyCar created."
	end

	def openAshtray
		method(:openAshtray).super_method.call
		puts "Ejector seat deployed."
	end
end


car = Car.new()
spyCar = SpyCar.new()

car.openAshtray
spyCar.openAshtray

