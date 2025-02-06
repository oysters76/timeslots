#ifndef TIMESLOTS_H
#define TIMESLOTS_H

#include <stdlib.h>

typedef struct {
  int * timeslots_ds;
  int size;
} TimeSlots; 

TimeSlots * timeslots_init_ds(){
  int minsInDay = 1 + (2 * 60 * 24);
  int * timeslotsArray = (int *) malloc((sizeof(int) * minsInDay));
  for (int i = 0; i < minsInDay; i++){
    timeslotsArray[i] = -1;
  }
  TimeSlots * timeSlot = (TimeSlots *) malloc(sizeof(TimeSlots));
  timeSlot->timeslots_ds = timeslotsArray;
  timeSlot->size = minsInDay; 
  return timeSlot; 
}

void timeslots_free_ds(TimeSlots * ts){
  if (ts == NULL) return;
  if (ts->timeslots_ds == NULL) return;
  free(ts->timeslots_ds); 
  free(ts);
}

void timeslots_add(TimeSlots * ts, int startTime, int endTime){
  if (ts == NULL) return;
  for (int i = startTime; i < endTime; i++){
    ts->timeslots_ds[i] = 1;
  }
}

int timeslots_getTotalMins(TimeSlots * ts){
  if (ts == NULL) return 0;
  int totalMins = 0;
  for (int i = 0; i < ts->size; i++){
    totalMins += (ts->timeslots_ds[i] == 1 ? 1 : 0); 
  }
  return totalMins;
}

float timeslots_getTotalHours(TimeSlots * ts){
  return timeslots_getTotalMins(ts)/60.0; 
}

#endif
