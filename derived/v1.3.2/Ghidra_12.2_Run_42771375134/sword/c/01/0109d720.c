/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109d720; name: FUN_0109d720
 */


void FUN_0109d720(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(long *)(param_1 + 0x5d0) != 0) && (iVar1 = FUN_00884820(), iVar1 != 0)) {
    uVar3 = 0;
    do {
      uVar2 = FUN_0087d610(*(undefined8 *)(*(long *)(param_1 + 0x698 + uVar3 * 8) + 0x128),2);
      if ((uVar2 & 1) == 0) {
        FUN_0109ed50(*(undefined8 *)(param_1 + 0x698 + uVar3 * 8));
      }
      uVar3 = uVar3 + 1;
      uVar2 = FUN_00884820(*(undefined8 *)(param_1 + 0x5d0));
    } while (uVar3 < (uVar2 & 0xffffffff));
  }
  return;
}


