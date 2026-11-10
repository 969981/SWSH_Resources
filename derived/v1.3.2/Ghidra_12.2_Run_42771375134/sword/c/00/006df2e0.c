/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006df2e0; name: FUN_006df2e0
 */


void FUN_006df2e0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_30 [2];
  
  lVar3 = *(long *)PTR_DAT_02710910;
  lVar1 = lVar3 + 0x1c8;
  if ((double)*(long *)(lVar3 + 0x1d0) <= (double)*(long *)(lVar3 + 0x1e0)) {
    lVar1 = lVar3 + 0x1d8;
  }
  (**(code **)(*param_1 + 0x28))(param_1,lVar1);
  local_30[0] = param_1[0x28];
  local_30[1] = 0;
  uVar2 = FUN_006d38b0();
  FUN_006d3940(uVar2,local_30);
  return;
}


