require_relative 'timeslot'

dayElement = Day.new()

dayElement.add(400, 500)
dayElement.add(200, 300)
dayElement.add(450, 550)

puts dayElement.getTotalMins()
puts dayElement.getTotalHours() 
puts dayElement.getTruncatedTotalHours()
