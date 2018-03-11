# gradle-native
Building a simple C++ application with  Gradle build tool 
 
### Getting Started 

+ In a new directory run the following command
```bash 
$ gradle wrapper 
``` 
 
Create a new `build.gradle` file with the following contents 

```gradle 
apply plugin : 'cpp' 

model { 
    components {
        main(NativeExecutableSpec)   
    }
}  

sources {
    cpp {
        source {
            srcDir "src/"
            include "lib/*.cc"
        }
    }
}
``` 
 
+ Now run the following 
```bash 
$ ./gradlew tasks 
```
