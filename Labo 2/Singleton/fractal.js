class Fractal{
    static instanceFlag = false;
    static single = null;

    setParams(x, y, nbBranchLeft, size, thickness, angle, color, context2D, rgb) {
        this.x = x;
        this.y = y;
        this.angle = angle;
        this.size = size;
        this.thickness = thickness;
        this.nbBranchLeft = nbBranchLeft;
        this.color = color;
        this.context2D = context2D;
        this.rgb = rgb;
    }

    static getInstance() {
        if (!Fractal.instanceFlag){
            Fractal.instanceFlag = true;
            Fractal.single = new Fractal();
        }
        return Fractal.single;
    }

    draw() {
        this.drawStroke(this.x, this.y, this.nbBranchLeft, this.size, this.thickness, this.angle, this.color, this.context2D, this.rgb);
    }

    drawStroke(x, y, nbBranchLeft, size, thickness, angle, color, context2D, rgb) {
        context2D.beginPath();
        context2D.save();

        context2D.translate(x, y);
        context2D.rotate((angle * Math.PI) / 170);
        context2D.moveTo(0, 0);
        context2D.lineTo(0, -size);
        context2D.lineWidth = thickness;
        // Change the color
        context2D.strokeStyle = 'rgb(' + Math.floor((rgb[0] + color) % 255) + ',' + Math.floor(rgb[1] + color) + ', ' + Math.floor(rgb[2] + color) + ')';
        context2D.stroke();

        if (nbBranchLeft <= 0) { // Si le compteur de branches restantes atteint 0
            context2D.restore();
            return;
        }

        let orientation = Math.floor(Math.random() * Math.floor(2)); // Binaire pour décider si la branch penche vers la gauche ou la droite
        let nbBranch = Math.floor(Math.random() * Math.floor(3)) + 1; // Nombre de branches juste après celle-ci

        for (let i = 0; i < nbBranch; i++) {
            let branchMinus = Math.floor(Math.random() * Math.floor(3)) + 1; // Nombre de branches totales après celle créée 
            this.drawStroke(0, -size, nbBranchLeft - branchMinus, size * 0.8, thickness * 0.8, -50 + (orientation * 20) + ((i + 1) * 30), (color + 10) % 255, context2D, rgb); 
        }

        context2D.restore();
    }
}

function limitValue(value, max)
{
    if (value > max)
        return max;
    else if (value < 0)
        return 0;
    else return value;
}

function load()
{
    let canvas = document.getElementById("canvas");
    let context2D = canvas.getContext("2d");
    context2D.clearRect(0, 0, canvas.width, canvas.height); // Clear screen

    // Choose the color of the tree
    let rgb = []
    rgb.push(document.getElementById("red").value.length > 0 ? limitValue(parseInt(document.getElementById("red").value), 255) : 150);
    rgb.push(document.getElementById("green").value.length > 0 ? limitValue(parseInt(document.getElementById("green").value), 255) : 50);
    rgb.push(document.getElementById("blue").value.length > 0 ? limitValue(parseInt(document.getElementById("blue").value), 255) : 0);

    let size = document.getElementById("size").value.length > 0 ? limitValue(parseInt(document.getElementById("size").value), 150) : 100;
    let thickness = document.getElementById("thickness").value.length > 0 ? limitValue(parseInt(document.getElementById("thickness").value), 50) : 10;
    let nbBranch = document.getElementById("nbBranch").value.length > 0 ? limitValue(parseInt(document.getElementById("nbBranch").value), 255) : 25;

    root = Fractal.getInstance();
    root.setParams(500, 650, nbBranch, size, thickness, 0, 0, context2D, rgb);
    root.draw();
}

function randomize()
{
    document.getElementById("red").value = Math.floor(Math.random() * Math.floor(256));
    document.getElementById("green").value = Math.floor(Math.random() * Math.floor(256));
    document.getElementById("blue").value = Math.floor(Math.random() * Math.floor(256));
    document.getElementById("size").value = Math.floor(Math.random() * Math.floor(100)) + 50;
    document.getElementById("thickness").value = Math.floor(Math.random() * Math.floor(20));
    document.getElementById("nbBranch").value = Math.floor(Math.random() * Math.floor(25)) + 5;   

    load();
}
