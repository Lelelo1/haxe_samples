package models;

//typedef Person = {name: String, age: Int};

#if cs
class Person {
    public var name: String;
    public var age: Int;    
    
    public function new(name: String, age: Int) {
        this.name = name;
        this.age = age;
    }
}
#else
#end



