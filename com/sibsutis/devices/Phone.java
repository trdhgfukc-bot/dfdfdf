package com.sibsutis.devices;
public class Phone extends Device{
    public Phone(int id,int price){
        super(id, price, null);
    }
    public Phone(int id,int price, String ip){
        super(id, price, ip);
    }
    @Override
    public String getdevicetype(){
        return "Phone";
    }
    @Override
    public boolean equals(Object o){
        if (o == this) return true;
        if (!(o instanceof Phone)) return false;
        Phone phone = (Phone)o;
        return true;
    }
    @Override
    public int hashcode(){
        return super.hashCode();
    }
}
