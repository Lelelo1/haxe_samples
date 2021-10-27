package models;

//typedef Person = {name: String, age: Int};

//typedef Person = { name:String, age: Int };

// https://community.haxe.org/t/wrap-c-library-in-haxecpp/2486/7


// reults in 'HaxeString'
//@:include("./Person.h")
//typedef Person = { name:String, age: Int }; 
// not defined type in xcode: 'Main_models_Person'




class Person {
    public var name: String;
    public var age: Int;    
    
    public function new(name: String, age: Int) {
        this.name = name;
        this.age = age;
    }
}



//import cpp.Callable;

//typedef 