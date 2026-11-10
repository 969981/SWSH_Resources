/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cbe980; name: FUN_00cbe980
 */


void FUN_00cbe980(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_0271c650 + 0x58;
  puVar2 = PTR_DAT_0271c650 + 0x98;
  lVar3 = 0x798;
  *param_1 = (long)(PTR_DAT_0271c650 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  do {
    if (*(long *)((long)param_1 + lVar3) != 0) {
      (**(code **)(*(long *)(*(long *)((long)param_1 + lVar3) + 0x48) + 0x18))();
      *(undefined8 *)((long)param_1 + lVar3) = 0;
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != 0x58);
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


