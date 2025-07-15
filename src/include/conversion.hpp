#ifndef CONVERSION_HPP
#define CONVERSION_HPP

// Define la constante de conversión
constexpr double MMOL_TO_MDL_FACTOR = 18.0182;

// Función para convertir mmol/L a mg/dL
// Aquí implementamos el redondeo a entero más cercano para cumplir el requisito 1.1 -> 20
// Si se requiriera precisión flotante, se usaría EXPECT_NEAR en la prueba.
int mmol_to_mgdl(double mmol);

#endif // CONVERSION_HPP