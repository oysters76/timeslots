#include <stdio.h>
#include "timeslots.h"

int main(void){
  TimeSlots * ts = timeslots_init_ds();
  timeslots_add(ts, 200, 300);
  timeslots_add(ts, 400, 500);

  printf("Total mins : %d\nTotal Hours : %.2f\n",
	 timeslots_getTotalMins(ts),
	 timeslots_getTotalHours(ts)); 
  
  timeslots_free_ds(ts);
  return 0;
}
