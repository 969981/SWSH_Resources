/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007871e0; name: FUN_007871e0
 */


void FUN_007871e0(undefined4 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x2a8) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_00788660(*(long *)(param_2 + 0x288) + lVar2);
      if ((uVar1 & 1) != 0) {
        *(undefined4 *)(*(long *)(param_2 + 0x288) + lVar2 + 0x30) = param_1;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while (uVar3 < *(uint *)(param_2 + 0x2a8));
  }
  return;
}


