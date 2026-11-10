/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010254f0; name: FUN_010254f0
 */


void FUN_010254f0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_1[6] = 1;
  puVar3 = PTR_LAB_027237c8;
  puVar2 = PTR_LAB_027237c0;
  lVar1 = (ulong)(param_3 - 1U) * 8 + 0x18;
  if (4 < param_3 - 1U) {
    lVar1 = 0x10;
  }
  param_1[4] = param_2;
  param_1[5] = lVar1;
  puVar5 = PTR_LAB_027237d8;
  puVar4 = PTR_LAB_027237d0;
  *param_1 = puVar2;
  param_1[1] = puVar3;
  param_1[2] = puVar4;
  param_1[3] = puVar5;
  return;
}


