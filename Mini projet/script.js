function main() {
	director = new Director();
	builder = new BuilderJambon();
	director.makePizza(builder);
}

var canvas = document.getElementById("canvas");

main();
