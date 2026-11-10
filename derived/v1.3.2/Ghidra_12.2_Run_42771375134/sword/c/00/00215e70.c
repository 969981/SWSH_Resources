/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00215e70; name: FUN_00215e70
 */


void FUN_00215e70(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x8b;
  *(undefined4 *)(param_1 + 4) = 0x8c;
  puVar1 = PTR_LAB_027118a0;
  *param_1 = "NbParticles";
  puVar2 = PTR_LAB_027118a8;
  param_1[2] = puVar1;
  param_1[3] = "Phases";
  puVar1 = PTR_LAB_027118b0;
  param_1[7] = &DAT_01d435da;
  param_1[5] = puVar2;
  param_1[6] = puVar1;
  *(undefined4 *)(param_1 + 8) = 0x8d;
  puVar1 = PTR_LAB_027118b8;
  param_1[9] = PTR_LAB_027118c0;
  param_1[10] = puVar1;
  param_1[0xb] = "ParticleIndices";
  puVar2 = PTR_LAB_027118d0;
  puVar1 = PTR_LAB_027118c8;
  *(undefined4 *)(param_1 + 0xc) = 0x8e;
  param_1[0xd] = puVar1;
  param_1[0xe] = puVar2;
  param_1[0xf] = "Restvalues";
  puVar1 = PTR_LAB_027118d8;
  *(undefined4 *)(param_1 + 0x10) = 0x8f;
  puVar2 = PTR_LAB_027118e0;
  param_1[0x13] = "ReferenceCount";
  param_1[0x11] = puVar1;
  param_1[0x12] = puVar2;
  *(undefined4 *)(param_1 + 0x14) = 0x90;
  param_1[0x15] = PTR_LAB_027118e8;
  param_1[0x16] = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 0x17) = 0x91;
  param_1[0x18] = PTR_LAB_027118f0;
  return;
}


