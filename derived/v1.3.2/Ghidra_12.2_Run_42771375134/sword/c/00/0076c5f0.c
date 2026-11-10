/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076c5f0; name: FUN_0076c5f0
 */


void FUN_0076c5f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_02716100;
  *param_1 = (long)(PTR_DAT_02716100 + 0x10);
  param_1[9] = (long)(puVar1 + 0x70);
  param_1[10] = (long)(puVar1 + 0xb0);
  plVar3 = param_1 + 0xc;
  if (*plVar3 != 0) {
    FUN_0076d7f0(plVar3);
    if (*plVar3 != 0) {
      (**(code **)(*(long *)param_1[0x4e] + 0x18))((long *)param_1[0x4e],*plVar3,param_1[0x4d],8);
    }
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0x4f) = 0;
  }
  param_1[0x4e] = 0;
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


