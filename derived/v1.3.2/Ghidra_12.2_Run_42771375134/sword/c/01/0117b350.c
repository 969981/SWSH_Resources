/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117b350; name: FUN_0117b350
 */


byte FUN_0117b350(long param_1)

{
  long *plVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar2 = true;
    plVar10 = *(long **)(param_1 + 0x98);
  }
  else {
    lVar5 = FUN_007b5710(*(undefined8 *)PTR_DAT_027104b0);
    if (*(long *)(lVar5 + 0x48) == 0) {
      lVar5 = 0;
    }
    else {
      plVar10 = *(long **)(lVar5 + 0x40);
      plVar6 = plVar10 + *(long *)(lVar5 + 0x48);
      lVar5 = 0;
LAB_0117b394:
      do {
        lVar8 = *plVar10;
        bVar3 = FUN_007b5850(lVar8);
        if ((bVar3 < 2) && (plVar7 = *(long **)(param_1 + 0x98), plVar7 != (long *)0x0)) {
          for (plVar1 = (long *)*plVar7; plVar1 != (long *)plVar7[1]; plVar1 = plVar1 + 5) {
            if (*plVar1 == lVar8) {
              if ((int)plVar1[1] != 0) {
                lVar5 = lVar5 + 1;
              }
              plVar10 = plVar10 + 1;
              if (plVar10 != plVar6) goto LAB_0117b394;
              goto LAB_0117b448;
            }
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar6);
    }
LAB_0117b448:
    bVar2 = lVar5 == 2;
    plVar10 = *(long **)(param_1 + 0x98);
  }
  if (plVar10 != (long *)0x0) {
    plVar6 = (long *)*plVar10;
    if (plVar6 != (long *)plVar10[1]) {
      uVar9 = 0;
      do {
        if ((*plVar6 != 0) && ((int)plVar6[1] != 0)) {
          uVar9 = uVar9 + 1;
        }
        plVar6 = plVar6 + 5;
      } while ((long *)plVar10[1] != plVar6);
      goto LAB_0117b45c;
    }
  }
  uVar9 = 0;
LAB_0117b45c:
  uVar4 = FUN_0120e820(*(undefined8 *)PTR_DAT_027185f8);
  if (uVar9 < uVar4) {
    bVar3 = 0;
  }
  else {
    bVar3 = bVar2 | *(char *)(param_1 + 0xc0) == '\0';
  }
  return bVar3;
}


