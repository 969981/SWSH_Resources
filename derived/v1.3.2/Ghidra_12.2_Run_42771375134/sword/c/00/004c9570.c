/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c9570; name: FUN_004c9570
 */


void FUN_004c9570(void)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_02713518;
  if (*(long *)PTR_DAT_02713518 != 0) {
    lVar4 = *(long *)PTR_DAT_02713518;
    lVar6 = 0;
    do {
      while (lVar5 = lVar4, uVar3 = FUN_004d0510(*(undefined8 *)(lVar5 + 0x158)), (uVar3 & 1) == 0)
      {
        lVar4 = 0;
        if (*(long *)(lVar5 + 0x48) != 0) {
          *(undefined8 *)(*(long *)(lVar5 + 0x48) + 0x160) = *(undefined8 *)(lVar5 + 0x160);
          lVar4 = *(long *)(lVar5 + 0x48);
        }
        plVar1 = (long *)puVar2;
        if (*(long *)puVar2 != lVar5) {
          plVar1 = (long *)(lVar6 + 0x48);
        }
        *plVar1 = lVar4;
        *(undefined8 *)(lVar5 + 0x160) = 0;
        *(undefined8 *)(lVar5 + 0x48) = 0;
        if (lVar4 == 0) {
          return;
        }
      }
      lVar4 = *(long *)(lVar5 + 0x48);
      lVar6 = lVar5;
    } while (*(long *)(lVar5 + 0x48) != 0);
  }
  return;
}


