/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002175b0; name: FUN_002175b0
 */


void FUN_002175b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 1) = 0xf3;
  *(undefined4 *)(param_1 + 5) = 0xf4;
  puVar1 = PTR_LAB_02711c80;
  *param_1 = "Scale";
  param_1[4] = "MeshFlags";
  puVar2 = PTR_LAB_02711c88;
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  puVar1 = PTR_LAB_02711c98;
  param_1[6] = PTR_LAB_02711c90;
  param_1[7] = puVar1;
  param_1[8] = "TriangleMesh";
  puVar2 = PTR_LAB_02711ca0;
  puVar1 = PTR_LAB_02711c78;
  *(undefined4 *)(param_1 + 9) = 0xf5;
  param_1[10] = puVar2;
  param_1[0xb] = puVar1;
  return;
}


