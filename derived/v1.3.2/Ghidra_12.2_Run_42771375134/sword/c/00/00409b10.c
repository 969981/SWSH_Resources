/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409b10; name: FUN_00409b10
 */


void FUN_00409b10(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0xe0);
  if ((plVar1 != (long *)0x0) && ((int)plVar1[1] != 0)) {
    lVar2 = *plVar1;
    do {
      FUN_00482e30(*(undefined4 *)(lVar2 + 4));
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != *plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x18);
  }
  return;
}


