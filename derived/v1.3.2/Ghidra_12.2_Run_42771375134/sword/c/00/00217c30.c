/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00217c30; name: FUN_00217c30
 */


void FUN_00217c30(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_LAB_02711db0;
  puVar1 = PTR_LAB_02711da8;
  *(undefined4 *)(param_1 + 1) = 0x1a7;
  *param_1 = "Stiffness";
  param_1[4] = "StretchLimit";
  puVar3 = PTR_LAB_02711db8;
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  puVar1 = PTR_LAB_02711dc0;
  *(undefined4 *)(param_1 + 5) = 0x1a8;
  param_1[6] = puVar3;
  param_1[7] = puVar1;
  return;
}


