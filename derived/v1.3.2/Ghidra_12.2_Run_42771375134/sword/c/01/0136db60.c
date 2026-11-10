/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136db60; name: FUN_0136db60
 */


void FUN_0136db60(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    FUN_0136f560(lVar2);
    uVar1 = FUN_0136f570(lVar2);
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
  }
  return;
}


