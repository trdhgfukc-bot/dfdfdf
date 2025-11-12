public class Main{
    public static void main(String[] args) {
        
        Car[] car ={
            new Car(1, "Toyota", "Camry", 2020, "Black", 25000, "AB123CD"),
            new Car(2, "Honda", "Civic", 2019, "White", 22000, "EF456GH"),
            new Car(3, "Toyota", "Corolla", 2021, "Red", 20000, "IJ789KL"),
            new Car(4, "BMW", "X5", 2018, "Blue", 45000, "MN012OP")
        };

       getcarbybrend(car, "Toyota");
       System.err.println("\n");
       getcarbybrendandyear(car,"Toyota", 2019);

    }

    public static Car[] getcarbybrend(Car[] cars, String brend){
        for (Car car : cars){
            if (car.getbrend() == brend){
                System.out.println("Найден авто: "+ car.getid() +" "+ car.getbrend()+" "+car.getmodel()
                +" "+ car.getyear() +" "+ car.getcolor() + " "+ car.getprice() +" "+ car.getrgnum());
            }

        }
        return cars;
    }
    public static Car[] getcarbybrendandyear(Car[] cars, String brend, int years){
        for (Car car : cars){
            if (car.getbrend() == brend & car.getyear() > years){
                System.err.println("Найден авто года выпуска больше чем " + years +" лет, марки " + brend +": "+car.getid() +" "+ car.getbrend()+" "+car.getmodel()
                +" "+ car.getyear() +" "+ car.getcolor() + " "+ car.getprice() +" "+ car.getrgnum());
            } 
        }
        return cars;
    }
    
}