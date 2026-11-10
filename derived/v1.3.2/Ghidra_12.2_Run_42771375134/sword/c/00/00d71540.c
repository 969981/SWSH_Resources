/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d71540; name: FUN_00d71540
 */


void FUN_00d71540(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((*(int *)(param_2 + 4) == 0xc) && ((*(byte *)(param_2 + 0x39) >> 1 & 1) != 0)) {
    FUN_00cc1760(param_1,9);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x50);
    plVar1 = (long *)FUN_00cbd3c0();
    if (lVar2 == *plVar1) {
      if (*(int *)(param_2 + 4) == 9) {
        *(undefined8 *)(param_1 + 0x68) = 0x204012e61b300ed;
      }
      else if (*(int *)(param_2 + 4) == 0xc) {
        *(undefined8 *)(param_1 + 0x50) = 0xe6f3d2107bf81ff6;
      }
    }
  }
  FUN_00cc13b0(param_1,*(undefined4 *)(param_2 + 4),*(undefined8 *)(param_2 + 0x10));
  return;
}


