package com.sibsutis.devices;
public class PersonalComputer extends Device{
    
    public PersonalComputer(int id, int price){
        super(id, price, null);
    }

    public PersonalComputer(int id, int price, String ip){
        super(id,price,ip);
    }

    @Override
    public String getdevicetype(){
        return "PersonalComputer";
    }
    @Override
    public int hashcode(){
        return super.hashCode();
    }
    @Override
    public boolean equals(Object o){
        if (o == this) return true;
        if (!(o instanceof PersonalComputer)) return false;
        if(!(super.equals(o))) return false;
        PersonalComputer computer = (PersonalComputer)o;
        return true;
    }
    

}
