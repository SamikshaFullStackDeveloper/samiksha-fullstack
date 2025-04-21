 Main class

 Main class
class Scratch {
    public static void main(String[] args) {

        Car myCarOne = new Car();
        myCarOne.brand ="flat";
        myCarOne.topSpeed= 200;
        myCarOne.startEngine();
        int value = myCarOne.displayFn();
        System.out.println(value);
        myCarOne.stopEngine();
    }
}


class Car {

    String brand = "--";
    int topSpeed = 200;
    int wheels =4;


    public void startEngine() {
        System.out.println("Engine started");
    }

    // Method to stop the engine
    public void stopEngine() {
        System.out.println("Engine stopped");
    }
    public int displayFn(){
        return  wheels;
    }
}

