class Fractal{
    constructor(x, y, nbBranchLeft, size, thickness, angle, color, context2D, rgb){
        this.x = x;
        this.y = y;
        this.angle = angle;
        this.size = size;
        this.thickness = thickness;
        this.nbBranchLeft = nbBranchLeft;
        this.branches = [];
        this.color = color;
        this.context2D = context2D;
        this.rgb = rgb;
    }

    draw() {
        this.context2D.beginPath();
        this.context2D.save();

        this.context2D.translate(this.x, this.y);
        this.context2D.rotate((this.angle * Math.PI) / 170);
        this.context2D.moveTo(0, 0);
        this.context2D.lineTo(0, -this.size);
        this.context2D.lineWidth = this.thickness;
        // Change the color
        this.context2D.strokeStyle = 'rgb(' + Math.floor((this.rgb[0] + this.color) % 255) + ',' + Math.floor(this.rgb[1] + this.color) + ', ' + Math.floor(this.rgb[2] + this.color) + ')';
        this.context2D.stroke();

        if (this.nbBranchLeft <= 0) { // Si le compteur de branches restantes atteint 0
            this.context2D.restore();
            return;
        }

        let orientation = Math.floor(Math.random() * Math.floor(2)); // Binaire pour décider si la branch penche vers la gauche ou la droite
        let nbBranch = Math.floor(Math.random() * Math.floor(3)) + 1; // Nombre de branches juste après celle-ci

        for (let i = 0; i < nbBranch; i++) {
            let branchMinus = Math.floor(Math.random() * Math.floor(3)) + 1; // Nombre de branches totales après celle créée 

            let branch = new Fractal(0, -this.size, this.nbBranchLeft - branchMinus, this.size * 0.8, this.thickness * 0.8, -50 + (orientation * 20) + ((i + 1) * 30), (this.color + 10) % 255, this.context2D, this.rgb);
            this.branches.push(branch); // Stockage des références vers chacune des branches suivante (directement)
            branch.draw(); 
        }

        this.context2D.restore();
    }
}

function load()
{
    let canvas = document.getElementById("canvas");
    let context2D = canvas.getContext("2d");
    context2D.clearRect(0, 0, canvas.width, canvas.height); // Clear screen

    // Choose the color of the tree
    let rgb = []
    rgb.push(document.getElementById("red").value.length > 0 ? parseInt(document.getElementById("red").value) % 255 : 150);
    rgb.push(document.getElementById("green").value.length > 0 ? parseInt(document.getElementById("green").value)  % 255 : 50);
    rgb.push(document.getElementById("blue").value.length > 0 ? parseInt(document.getElementById("blue").value) % 255 : 0);

    let size = document.getElementById("size").value.length > 0 ? parseInt(document.getElementById("size").value) % 100 : 100;
    let thickness = document.getElementById("thickness").value.length > 0 ? parseInt(document.getElementById("thickness").value) % 50 : 10;
    let nbBranch = document.getElementById("nbBranch").value.length > 0 ? parseInt(document.getElementById("nbBranch").value) % 40 : 25;

    root = new Fractal(500, 500, nbBranch, size, thickness, 0, 0, context2D, rgb);
    root.draw()
}

function randomize()
{
    document.getElementById("red").value = Math.floor(Math.random() * Math.floor(256));
    document.getElementById("green").value = Math.floor(Math.random() * Math.floor(256));
    document.getElementById("blue").value = Math.floor(Math.random() * Math.floor(256));
    document.getElementById("size").value = Math.floor(Math.random() * Math.floor(50)) + 50;
    document.getElementById("thickness").value = Math.floor(Math.random() * Math.floor(20));
    document.getElementById("nbBranch").value = Math.floor(Math.random() * Math.floor(20)) + 10;   

    load();
}
