/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01528880; name: FUN_01528880
 */


undefined4 FUN_01528880(uint param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (0x33 < param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = *(undefined4 *)(lVar2 + (long)(int)param_1 * 4 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar1;
}


