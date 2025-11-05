package com.sibsutis;

public class PersonalComputer{
    public PersonalComputer(int id, int price){
        this.id = id;
        this.price = price;
    }
    public PersonalComputer(int id, int price, int ip){
        this.id = id;
        this.price = price;
        this.ip = ip;
    }
    public String GetDeviceType(){
        return "PersonalComputer";
    }
}