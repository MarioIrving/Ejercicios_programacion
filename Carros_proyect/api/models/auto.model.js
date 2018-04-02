var mongoose = require('mongoose');

var autoSchema = new mongoose.Schema({
    folio: { type: String, required: true },
    marca: { type: String, required: true },
    modelo: { type: String, required: true },
    year: { type: Number, min:2010, max: 2018, required: true },
    color: { enum: ["azul", "rojo", "amarillo", "verde", "gris", "negro"], required: true},
    ranking: { type: Number, min:0, max:5, default:0},
    activo: { type: Boolean, default: true},
    imagen: [{ type: String }]
});

module.exports = mongoose.model('Registro', autoSchema);