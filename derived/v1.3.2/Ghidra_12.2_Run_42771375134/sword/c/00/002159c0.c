/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002159c0; name: FUN_002159c0
 */


void FUN_002159c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0x6d;
  *(undefined4 *)(param_1 + 4) = 0x6e;
  puVar1 = PTR_LAB_027117c8;
  *param_1 = "MaxNbActors";
  puVar2 = PTR_LAB_027117d0;
  param_1[2] = puVar1;
  param_1[3] = "Actors";
  puVar1 = PTR_LAB_027117d8;
  param_1[7] = "SelfCollision";
  param_1[5] = puVar2;
  param_1[6] = puVar1;
  *(undefined4 *)(param_1 + 8) = 0x6f;
  param_1[9] = PTR_LAB_027117e0;
  param_1[10] = "ConcreteTypeName";
  *(undefined4 *)(param_1 + 0xb) = 0x70;
  param_1[0xc] = PTR_LAB_027117e8;
  return;
}


