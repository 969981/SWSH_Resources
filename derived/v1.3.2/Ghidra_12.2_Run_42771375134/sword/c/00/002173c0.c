/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002173c0; name: FUN_002173c0
 */


void FUN_002173c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_LAB_02711c28;
  *(undefined4 *)(param_1 + 1) = 0xe8;
  puVar2 = PTR_LAB_02711c30;
  *param_1 = "Scale";
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  param_1[4] = "ConvexMesh";
  puVar1 = PTR_LAB_02711c38;
  *(undefined4 *)(param_1 + 5) = 0xe9;
  puVar2 = PTR_LAB_02711c40;
  param_1[8] = "MaxMargin";
  param_1[6] = puVar1;
  param_1[7] = puVar2;
  *(undefined4 *)(param_1 + 9) = 0xea;
  puVar1 = PTR_LAB_02711c58;
  param_1[10] = PTR_LAB_02711c50;
  param_1[0xb] = puVar1;
  param_1[0xc] = "MeshFlags";
  puVar2 = PTR_LAB_02711c60;
  puVar1 = PTR_LAB_02711c48;
  *(undefined4 *)(param_1 + 0xd) = 0xeb;
  param_1[0xe] = puVar2;
  param_1[0xf] = puVar1;
  return;
}


