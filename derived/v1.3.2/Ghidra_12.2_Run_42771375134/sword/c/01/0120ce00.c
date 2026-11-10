/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120ce00; name: FUN_0120ce00
 */


void FUN_0120ce00(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x7a78) == -3)) {
    return;
  }
  uVar1 = FUN_007b56f0(*(undefined8 *)PTR_DAT_027104b0);
  if ((uVar1 & 1) == 0) {
    FUN_0120c690(lVar2);
    return;
  }
  FUN_0120da90(lVar2);
  FUN_0120dc00(lVar2);
  FUN_0120dcf0(lVar2);
  return;
}


