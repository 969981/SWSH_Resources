/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00753de0; name: FUN_00753de0
 */


void FUN_00753de0(long param_1,int param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long local_50 [2];
  
  lVar2 = *(long *)(param_1 + 0x220);
  lVar1 = lVar2 + (long)param_2 * 0x80;
  if ((int)((ulong)(*(long *)(param_1 + 0x228) - lVar2) >> 7) <= param_2) {
    lVar1 = lVar2;
  }
  *(byte *)(lVar1 + 0x40) = param_3 & 1;
  if (0 < (int)((ulong)(*(long *)(lVar1 + 0x50) - *(long *)(lVar1 + 0x48)) >> 4) * -0x45d1745d) {
    iVar3 = 0;
    do {
      FUN_00dcc750(local_50,param_1,param_2,iVar3);
      local_50[1] = 0;
      FUN_007273c0(local_50[0],param_3 & 1,local_50 + 1);
      if (local_50[0] != 0) {
        (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
        local_50[0] = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)((ulong)(*(long *)(lVar1 + 0x50) - *(long *)(lVar1 + 0x48)) >> 4) *
                     -0x45d1745d);
  }
  return;
}


