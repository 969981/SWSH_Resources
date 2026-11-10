/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00781e50; name: FUN_00781e50
 */


float FUN_00781e50(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long local_60 [3];
  long local_48;
  
  lVar1 = *(long *)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x70);
  while( true ) {
    if (lVar1 == lVar2) {
      return -1.0;
    }
    FUN_007825c0(local_60,lVar1,1);
    lVar3 = local_60[0];
    lVar5 = *param_2;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar3 == lVar5) break;
    lVar1 = lVar1 + 0x50;
  }
  uVar4 = FUN_007822c0(lVar1);
  return (float)uVar4;
}


