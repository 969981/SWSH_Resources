/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00113eb0; name: FUN_00113eb0
 */


void FUN_00113eb0(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  uint local_24;
  
  if (param_2 != 0xffffffff) {
    local_24 = param_2;
    if (*(uint *)(param_1 + 0x58) < (*(uint *)(param_1 + 0x5c) & 0x7fffffff)) {
      *(uint *)(*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 4) = param_2;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    }
    else {
      FUN_001b4230(param_1 + 0x50,&local_24);
    }
    FUN_00116010(param_1 + 0x310,local_24);
    uVar1 = (ulong)local_24;
    if ((*(uint *)(*(long *)(param_1 + 0xa0) + (ulong)(local_24 >> 5) * 4) & 1 << (uVar1 & 0x1f)) !=
        0) {
      FUN_00116010(param_1 + 0xb0);
      lVar2 = (ulong)(local_24 >> 5) * 4;
      *(uint *)(*(long *)(param_1 + 0xa0) + lVar2) =
           *(uint *)(*(long *)(param_1 + 0xa0) + lVar2) &
           (1 << ((ulong)local_24 & 0x1f) ^ 0xffffffffU);
      uVar1 = (ulong)local_24;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar1 * 8) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x40) + uVar1 * 8) = 0;
  }
  return;
}


