/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004048f0; name: FUN_004048f0
 */


void FUN_004048f0(int param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *(long *)PTR_DAT_02712a40;
  lVar2 = lVar1 + (long)param_1 * 0x68;
  plVar3 = (long *)(lVar2 + 0x20);
  if ((long *)*plVar3 != (long *)0x0) {
    lVar4 = *(long *)*plVar3;
    if (lVar4 == 0) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *plVar3 = 0;
    }
    else {
      *plVar3 = lVar4;
    }
    lVar1 = lVar1 + (long)param_1 * 0x68;
    *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x5c) + *(int *)(lVar1 + 4);
  }
  return;
}


