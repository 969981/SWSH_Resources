/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069c1e0; name: FUN_0069c1e0
 */


void FUN_0069c1e0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x88);
  *param_1 = (long)(PTR_DAT_02715090 + 0x10);
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 6);
    lVar3 = *(long *)(param_2 + 0x90);
    lVar1 = *(long *)(param_2 + 0x98);
    lVar2 = *(long *)(param_2 + 0xa8);
    param_1[4] = *(long *)(param_2 + 0xa0);
    param_1[5] = lVar2;
    param_1[2] = lVar3;
    param_1[3] = lVar1;
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  if (*(code **)(param_2 + 0x120) != (code *)0x0) {
    (**(code **)(param_2 + 0x120))(param_2 + 0x130,param_1 + 0x16);
    lVar3 = *(long *)(param_2 + 0x110);
    lVar1 = *(long *)(param_2 + 0x118);
    lVar2 = *(long *)(param_2 + 0x128);
    param_1[0x14] = *(long *)(param_2 + 0x120);
    param_1[0x15] = lVar2;
    param_1[0x12] = lVar3;
    param_1[0x13] = lVar1;
  }
  *param_1 = (long)(PTR_DAT_02715070 + 0x10);
  return;
}


