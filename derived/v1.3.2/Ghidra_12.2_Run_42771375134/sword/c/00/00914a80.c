/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914a80; name: FUN_00914a80
 */


void FUN_00914a80(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((*(int *)(param_1 + 0x100) == *(int *)(param_2 + 0x100)) &&
     (*(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104),
     *(int *)(param_1 + 0x100) != 0)) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_00915180(*(long *)(param_1 + 0xa0) + lVar1,*(long *)(param_2 + 0xa0) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x2728;
    } while (uVar2 < *(uint *)(param_1 + 0x100));
  }
  return;
}


