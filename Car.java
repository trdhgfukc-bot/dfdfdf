public class Car {
    private int id;
    private String brend;
    private String model;
    private int year;
    private String color;
    private double price;
    private String  rgnum;

    public Car(int id, String brend, String model, int year, String color, double price, String rgnum){
        this.id = id;
        this.brend = brend;
        this.model = model;
        this.year = year;
        this.color = color;
        this.price = price;
        this.rgnum =rgnum;
    }

    public int getid(){
        return id;
    }

    public void setid(int id){
        this.id = id;
    }

    public String getbrend(){
        return brend;
    }

    public void setbrend(String brend){
        this.brend = brend;
    }

    public String getmodel(){
        return model;
    }

    public void setmodel(String model){
        this.model = model;
    }

    public int getyear(){
        return year;
    }

    public void setyear(int year){
        this.year = year;
    }

    public String getcolor(){
        return color;
    }

    public void setcolor(String color){
        this.color = color;
    }

    public double getprice(){
        return price;
    }

    public void setprice(double price){
        this.price = price;
    }

    public String getrgnum(){
        return rgnum;
    }
    
    public void setrgnum(String rgnum){
        this.rgnum = rgnum;
    }
}