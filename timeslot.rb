class Day
  def initialize()
    totalMins = (24 * 60 * 2) + 1
    @minslots = Array.new(totalMins, -1)
  end

  def add(startTime, endTime)
    for i in startTime..endTime-1
      @minslots[i] = 1
    end
  end

  def getTotalMins()
    totalMins = 0
    @minslots.each do |min|
      totalMins += 1 if min == 1
    end
    totalMins
  end

  def getTotalHours()
    result = getTotalMins()/60.to_f 
    return result.to_f
  end

  def getTruncatedTotalHours()
    format("%.2f", getTotalHours()).to_f
  end
  
end


