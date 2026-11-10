/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b8540; name: FUN_001b8540
 */


/* WARNING: Removing unreachable block (ram,0x001b856c) */

void FUN_001b8540(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x1cf0);
  if (param_3 <= *(uint *)(param_1 + 0x1cf0)) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      do {
        lVar3 = lVar2 * 8;
        lVar2 = lVar2 + 2;
        *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(*(long *)(param_1 + 0x1ce8) + lVar3);
        ((undefined8 *)(param_2 + lVar3))[1] =
             *(undefined8 *)(*(long *)(param_1 + 0x1ce8) + lVar3 + 8);
      } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar2);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
    *(undefined8 *)(param_2 + lVar2 * 8) = *(undefined8 *)(*(long *)(param_1 + 0x1ce8) + lVar2 * 8);
  }
  return;
}


