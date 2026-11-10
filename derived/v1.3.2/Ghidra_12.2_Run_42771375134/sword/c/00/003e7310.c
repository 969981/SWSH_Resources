/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e7310; name: FUN_003e7310
 */


void FUN_003e7310(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 local_34;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x728) + 0x130);
  uVar3 = (ulong)uVar1;
  plVar4 = *(long **)(*(long *)(param_1 + 0x728) + 0x128);
  *(undefined4 *)(param_1 + 0x11f0) = 0;
  if (uVar1 != 0) {
    uVar2 = 0;
    while( true ) {
      uVar3 = uVar3 - 1;
      local_34 = *(undefined4 *)(*plVar4 + 0x48);
      if ((uint)uVar2 < (*(uint *)(param_1 + 0x11f4) & 0x7fffffff)) {
        *(undefined4 *)(*(long *)(param_1 + 0x11e8) + uVar2 * 4) = local_34;
        *(int *)(param_1 + 0x11f0) = *(int *)(param_1 + 0x11f0) + 1;
      }
      else {
        FUN_001b4230(param_1 + 0x11e8,&local_34);
      }
      if (uVar3 == 0) break;
      uVar2 = (ulong)*(uint *)(param_1 + 0x11f0);
      plVar4 = plVar4 + 1;
    }
  }
  return;
}


