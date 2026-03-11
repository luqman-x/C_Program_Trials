#include <stdio.h>
#include <string.h>
union VoxelData
{
    int raw_intensity;
    float adc_mapping;
    char tissue_code[4];
};
int main()
{ // Taking Inputs
    union VoxelData voxel;
    printf("Enter Raw scanner intensity: ");
    scanf("%d", &voxel.raw_intensity);

    printf("Enter Apparent Diffusion Coefficient Mapping value : ");
    scanf("%f", &voxel.adc_mapping);

    printf("Enter tissue classification code for the white matter: ");
    scanf("%s", &voxel.tissue_code);

    // Printing stored values
    printf("\n--- Stored Values ---\n");
    printf("Raw Intensity : %d\n", voxel.raw_intensity);
    printf("ADC Mapping   : %f\n", voxel.adc_mapping);
    printf("Tissue Code   : %s\n", voxel.tissue_code);

    return 0;
}