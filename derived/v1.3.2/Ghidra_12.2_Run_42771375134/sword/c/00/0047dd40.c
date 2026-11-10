/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047dd40; name: FUN_0047dd40
 */


void FUN_0047dd40(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02712e28;
  plVar3 = (long *)PTR_DAT_02713248;
  for (lVar4 = *(long *)(PTR_DAT_02713240 + 0x10); PTR_DAT_02713248 = (undefined *)plVar3,
      lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
    if (*(long *)(lVar4 + 0x108) != 0) {
      FUN_00458240();
      *(undefined8 *)(lVar4 + 0x108) = 0;
    }
    plVar3 = *(long **)(lVar4 + 0x110);
    if (plVar3 != (long *)0x0) {
      lVar2 = *plVar3;
      *(undefined4 *)(plVar3 + 2) = 0;
      *(undefined4 *)(plVar3 + 1) = 0;
      *plVar3 = 0;
      if (lVar2 != 0) {
        FUN_004047f0(*(undefined4 *)puVar1);
      }
      if (*(long *)(lVar4 + 0x110) != 0) {
        FUN_00404870(*(undefined4 *)puVar1);
      }
      *(undefined8 *)(lVar4 + 0x110) = 0;
    }
    plVar3 = (long *)PTR_DAT_02713248;
  }
  if (*plVar3 != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *plVar3 = 0;
  }
  return;
}


