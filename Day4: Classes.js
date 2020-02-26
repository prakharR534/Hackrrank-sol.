/*
 * Implement a Polygon class with the following properties:
 * 1. A constructor that takes an array of integer side lengths.
 * 2. A 'perimeter' method that returns the sum of the Polygon's side lengths.
 */
class Polygon{
    constructor (l){
        var pm = 0;
        for (var index in l){
            pm = pm + l[index];
        }
        this.perim = pm;
    }


    perimeter(){
        return this.perim;
    }
}

