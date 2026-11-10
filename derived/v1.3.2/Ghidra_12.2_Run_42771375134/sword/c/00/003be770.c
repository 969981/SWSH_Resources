/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be770; name: FUN_003be770
 */


void FUN_003be770(undefined8 param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *(float *)((long)param_2 + 0x9c) = (float)param_1;
  if (lVar2 == 0) {
    return;
  }
  plVar1 = *(long **)(*(long *)(lVar2 + 0x48) + 0x760);
  (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + 0x60,*(uint *)(lVar2 + 0xb0) >> 6);
  if ((0.0 < (float)param_1) || ((param_3 & 1) != 0)) {
    FUN_003bfeb0(lVar2);
  }
  FUN_003bfac0(param_1,lVar2,param_3 & 1);
  return;
}


