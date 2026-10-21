// 3829. Design Ride Sharing System
// https://leetcode.com/problems/design-ride-sharing-system/
// Difficulty: Medium | Runtime: 79 ms (beats 25.3%) | Memory: 175.8 MB (beats 10.2%)

class RideSharingSystem {
public:
    queue<int> rider;
    queue<int> driver;
    unordered_set<int> waitingRiders;

    RideSharingSystem() {

    }

    void addRider(int riderId) {
        rider.push(riderId);
        waitingRiders.insert(riderId);
    }

    void addDriver(int driverId) {
        driver.push(driverId);
    }

    vector<int> matchDriverWithRider() {
        vector<int> match = {-1,-1};
        if(!rider.empty() && !driver.empty()){
            match[1] = rider.front();
            match[0] = driver.front();
            waitingRiders.erase(rider.front());
            rider.pop();
            driver.pop();
        }
        return match;
    }

    void cancelRider(int riderId) {
        if(waitingRiders.count(riderId)){
            queue<int> temp;
            while(!rider.empty()){
                if(rider.front()!=riderId){
                    temp.push(rider.front());
                }
                else{
                    waitingRiders.erase(riderId);
                }
                rider.pop();
            }
            rider = temp;
        }
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */
