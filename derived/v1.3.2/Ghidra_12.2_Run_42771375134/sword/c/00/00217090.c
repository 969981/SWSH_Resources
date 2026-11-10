/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00217090; name: FUN_00217090
 */


void FUN_00217090(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_00216cd0();
  *(undefined4 *)(param_1 + 0x2c0) = 200;
  *(undefined4 *)(param_1 + 0x2e0) = 0xc9;
  puVar1 = PTR_LAB_02711b98;
  *(char **)(param_1 + 0x2b8) = "Stiffness";
  *(char **)(param_1 + 0x2d8) = "Viscosity";
  puVar2 = PTR_LAB_02711ba0;
  *(undefined **)(param_1 + 0x2c8) = puVar1;
  puVar1 = PTR_LAB_02711ba8;
  *(undefined **)(param_1 + 0x2d0) = puVar2;
  puVar2 = PTR_LAB_02711bb0;
  *(undefined **)(param_1 + 0x2e8) = puVar1;
  *(char **)(param_1 + 0x2f8) = "RestParticleDistance";
  *(undefined **)(param_1 + 0x2f0) = puVar2;
  *(undefined4 *)(param_1 + 0x300) = 0xca;
  *(undefined **)(param_1 + 0x308) = PTR_LAB_02711bb8;
  *(undefined **)(param_1 + 0x310) = PTR_LAB_02711bc0;
  *(char **)(param_1 + 0x318) = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 800) = 0xcb;
  *(undefined **)(param_1 + 0x328) = PTR_LAB_02711bc8;
  return;
}


