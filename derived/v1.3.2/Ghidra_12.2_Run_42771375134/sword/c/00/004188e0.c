/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004188e0; name: FUN_004188e0
 */


long FUN_004188e0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x108) + 0x18);
  if (lVar1 == 0) {
    if (param_2 == (long *)0x0) {
      return 0;
    }
    lVar1 = (**(code **)(**(long **)(param_1 + 0x110) + 0xb0))();
    *param_2 = lVar1;
    if (lVar1 != 0) {
      return 0;
    }
    lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x110) + 0x10) + 0xb0))();
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x78);
    if (param_2 == (long *)0x0) {
      return lVar1;
    }
    lVar2 = *(long *)(lVar1 + 0x78);
  }
  *param_2 = lVar2;
  return lVar1;
}


