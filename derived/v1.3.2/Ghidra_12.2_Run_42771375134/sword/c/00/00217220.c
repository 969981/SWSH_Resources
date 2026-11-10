/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00217220; name: FUN_00217220
 */


void FUN_00217220(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_LAB_02711bf0;
  puVar1 = PTR_LAB_02711be8;
  *(undefined4 *)(param_1 + 1) = 0xe0;
  *param_1 = "Radius";
  param_1[4] = "HalfHeight";
  puVar3 = PTR_LAB_02711bf8;
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  puVar1 = PTR_LAB_02711c00;
  *(undefined4 *)(param_1 + 5) = 0xe1;
  param_1[6] = puVar3;
  param_1[7] = puVar1;
  return;
}


