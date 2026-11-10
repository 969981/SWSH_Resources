/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004babe0; name: FUN_004babe0
 */


void FUN_004babe0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = FUN_004b5590(*(undefined8 *)PTR_DAT_02712b68);
  if (lVar1 != 0) {
    lVar3 = 0;
    plVar4 = (long *)(lVar1 + 0x28);
    do {
      lVar2 = lVar3;
      lVar3 = *plVar4;
      plVar4 = (long *)(lVar3 + 8);
    } while (lVar3 != 0 && lVar3 != param_1);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar1 + 0x28);
      if (*(long *)(lVar1 + 0x28) != lVar3) {
        plVar4 = (long *)(lVar2 + 8);
      }
      *plVar4 = *(long *)(lVar3 + 8);
      if (*(long *)(lVar1 + 0x20) == lVar3) {
        *(long *)(lVar1 + 0x20) = lVar2;
        return;
      }
    }
  }
  return;
}


