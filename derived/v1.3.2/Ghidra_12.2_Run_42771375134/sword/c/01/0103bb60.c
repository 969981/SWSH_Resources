/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0103bb60; name: FUN_0103bb60
 */


void FUN_0103bb60(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x870);
  *(long *)(param_1 + 0x870) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar2 = param_2[1];
  *(long *)(param_1 + 0x880) = param_2[2];
  *(long *)(param_1 + 0x878) = lVar2;
  FUN_0103b260(param_1);
  return;
}


