# Python implementation of the same code from cpp

class Timer:
    def __init__(self, time_between=5):
        self.start_time = time.time()
        self.time_between = time_between

    def can_use(self):
        if time.time() > (self.start_time + self.time_between):
            self.start_time = time.time()
            return True
        return False

# To test/show usage of the timer class
if __name__ == "__main__":
    import time     

    timer = Timer(time_between=2)
    time.sleep(3)
    if timer.can_use():
        print("worked after 3 seconds")
    time.sleep(1)
    if timer.can_use():
        print("worked after 4 seconds")

    time.sleep(3):
        print("worked after 7 seconds")
  
# Output:
# worked after 3 seconds
# worked after 7 seconds

# Explaination:
# the time in between is = 2 so the time requirement has passed and function returns true
# at time = 4 seconds only 1 sec has passed since the last reset and time requirement is 2 so function returns false
# at time = 7 seconds 4 sec has passed since the last reset and the time requirement has passed so it returns true
