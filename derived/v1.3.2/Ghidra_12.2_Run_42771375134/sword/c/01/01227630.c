/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01227630; name: FUN_01227630
 */


/* WARNING: Removing unreachable block (ram,0x01227664) */

long FUN_01227630(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x18) + 0x54) == 0) {
      return param_1 + 0x30;
    }
    lVar2 = *(long *)(param_1 + 0x20);
  }
  lVar1 = param_1 + 0x30;
  if (lVar2 != 0) {
    lVar1 = lVar2;
  }
  return lVar1;
}


