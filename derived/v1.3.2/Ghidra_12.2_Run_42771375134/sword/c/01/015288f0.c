/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015288f0; name: FUN_015288f0
 */


uint FUN_015288f0(uint param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  uVar1 = FUN_01529320(param_1);
  if (param_2 <= uVar1) {
    uVar1 = param_2;
  }
  if (0x33 < param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(uint *)(lVar2 + (long)(int)param_1 * 4 + 0x60) = uVar1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return uVar1;
}


