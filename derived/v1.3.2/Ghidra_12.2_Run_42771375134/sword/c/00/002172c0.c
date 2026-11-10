/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002172c0; name: FUN_002172c0
 */


void FUN_002172c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_LAB_02711c10;
  puVar1 = PTR_LAB_02711c08;
  *(undefined4 *)(param_1 + 1) = 0xe4;
  *param_1 = "Scale";
  param_1[4] = "Rotation";
  puVar3 = PTR_LAB_02711c18;
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  puVar1 = PTR_LAB_02711c20;
  *(undefined4 *)(param_1 + 5) = 0xe5;
  param_1[6] = puVar3;
  param_1[7] = puVar1;
  return;
}


