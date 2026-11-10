/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a9780; name: FUN_006a9780
 */


void FUN_006a9780(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02710a48 + 0x10);
  lVar4 = *(long *)(param_2 + 8);
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 6);
    lVar4 = *(long *)(param_2 + 0x10);
    lVar1 = *(long *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x28);
    param_1[4] = *(long *)(param_2 + 0x20);
    param_1[5] = lVar2;
    param_1[2] = lVar4;
    param_1[3] = lVar1;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x16);
    lVar4 = *(long *)(param_2 + 0x90);
    lVar1 = *(long *)(param_2 + 0x98);
    lVar2 = *(long *)(param_2 + 0xa8);
    param_1[0x14] = *(long *)(param_2 + 0xa0);
    param_1[0x15] = lVar2;
    param_1[0x12] = lVar4;
    param_1[0x13] = lVar1;
  }
  puVar3 = PTR_DAT_027150e0;
  param_1[0x22] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  return;
}


