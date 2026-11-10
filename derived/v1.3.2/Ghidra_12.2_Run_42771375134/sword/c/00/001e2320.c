/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e2320; name: FUN_001e2320
 */


long * FUN_001e2320(long *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_027110c8;
  plVar4 = (long *)*param_1;
  plVar4[2] = 0;
  plVar4[4] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)plVar4 + 10) = 0;
  *(uint *)(plVar4 + 3) = *(uint *)(plVar4 + 3) & 0xf000000;
  plVar4[5] = 0;
  *param_1 = *param_1 + 0xf0;
  if (plVar4[0x1c] != 0) {
    lVar3 = (**(code **)*param_2)(param_2,0x80000000);
    plVar4[0x1c] = lVar3;
  }
  if (plVar4[0x1d] != 0) {
    lVar3 = (**(code **)*param_2)(param_2,0x80000000);
    plVar4[0x1d] = lVar3;
  }
  uVar2 = (**(code **)(*param_2 + 8))(param_2);
  if (uVar2 < 0x3030200) {
    FUN_003bad50(plVar4 + 5,0);
  }
  return plVar4;
}


