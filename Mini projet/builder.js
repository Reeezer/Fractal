class Director {
	constructor() {}

	makePizza(builder) {
		builder.makeDough();
		builder.addSauce();
		builder.addToping();
	}
}

class Builder {
	constructor() {
		let canvas = document.getElementById("canvas");
		this.ctx = canvas.getContext("2d");
	}
}

class BuilderHawaienne extends Builder {
	constructor() {
		super();
	}

	makeDough() {
		let image = new Image();
		image.src = "images/dough.png";
		image.onload = () => this.ctx.drawImage(image, 0, 0, 200, 200);
	}

	addSauce() {
		let image = new Image();
		image.src = "images/saucetomate.png";
		image.onload = () => this.ctx.drawImage(image, 0, 0, 200, 200);
	}

	addToping() {
		let image1 = new Image();
		image1.src = "images/jambon.png"; 
		image1.onload = () => this.ctx.drawImage(image1, 0, 0, 200, 200);

		let image2 = new Image();
		image2.src = "images/ananas.png"; 
		image2.onload = () => this.ctx.drawImage(image2, 0, 0, 200, 200);
	}
}

class BuilderMargherita extends Builder {
	constructor() {
		super();
	}

	makeDough() {
		let image = new Image();
		image.src = "images/dough.png";
		image.onload = () => this.ctx.drawImage(image, 0, 0, 200, 200);
	}

	addSauce() {
		let image = new Image();
		image.src = "images/saucetomate.png";
		image.onload = () => this.ctx.drawImage(image, 0, 0, 200, 200);
	}

	addToping() {
		let image1 = new Image();
		image1.src = "images/mozzarella.png";
		image1.onload = () => this.ctx.drawImage(image1, 0, 0, 200, 200);

		let image2 = new Image();
		image2.src = "images/basilic.png";
		image2.onload = () => this.ctx.drawImage(image2, 0, 0, 200, 200);
	}
}

class BuilderJambon extends Builder {
	constructor() {
		super();
	}

	makeDough() {
		let image = new Image();
		image.src = "images/dough.png";
		image.onload = () => this.ctx.drawImage(image, 0, 0, 200, 200);
	}

	addSauce() {
		let image = new Image();
		image.src = "images/saucetomate.png";
		image.onload = () => this.ctx.drawImage(image, 0, 0, 200, 200);
	}

	addToping() {
		let image1 = new Image();
		image1.src = "images/mozzarella.png";
		image1.onload = () => this.ctx.drawImage(image1, 0, 0, 200, 200);

		let image2 = new Image();
		image2.src = "images/jambon.png";
		image2.onload = () => this.ctx.drawImage(image2, 0, 0, 200, 200);
	}
}

class BuilderReine extends Builder {
	constructor() {
		super();
	}

	makeDough() {
		let image = new Image();
		image.src = "images/dough.png";
		image.onload = () => this.ctx.drawImage(image, 0, 0, 200, 200);
	}

	addSauce() {
		let image = new Image();
		image.src = "images/saucetomate.png";
		image.onload = () => this.ctx.drawImage(image, 0, 0, 200, 200);
	}

	addToping() {
		let image1 = new Image();
		image1.src = "images/mozzarella.png";
		image1.onload = () => this.ctx.drawImage(image1, 0, 0, 200, 200);

		let image2 = new Image();
		image2.src = "images/jambon.png";
		image2.onload = () => this.ctx.drawImage(image2, 0, 0, 200, 200);

		let image3 = new Image();
		image3.src = "images/champignon.png";
		image3.onload = () => this.ctx.drawImage(image3, 0, 0, 200, 200);
	}
}
