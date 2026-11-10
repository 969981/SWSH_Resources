/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00217b00; name: FUN_00217b00
 */


void FUN_00217b00(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_LAB_02711d68;
  *(undefined4 *)(param_1 + 1) = 0x1a1;
  puVar2 = PTR_LAB_02711d70;
  *param_1 = "Stiffness";
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  param_1[4] = "StiffnessMultiplier";
  puVar1 = PTR_LAB_02711d78;
  *(undefined4 *)(param_1 + 5) = 0x1a2;
  puVar2 = PTR_LAB_02711d80;
  param_1[8] = "CompressionLimit";
  param_1[6] = puVar1;
  param_1[7] = puVar2;
  *(undefined4 *)(param_1 + 9) = 0x1a3;
  puVar1 = PTR_LAB_02711d98;
  param_1[10] = PTR_LAB_02711d90;
  param_1[0xb] = puVar1;
  param_1[0xc] = "StretchLimit";
  puVar2 = PTR_LAB_02711da0;
  puVar1 = PTR_LAB_02711d88;
  *(undefined4 *)(param_1 + 0xd) = 0x1a4;
  param_1[0xe] = puVar2;
  param_1[0xf] = puVar1;
  return;
}


