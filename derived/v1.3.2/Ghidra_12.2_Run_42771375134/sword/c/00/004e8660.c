/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e8660; name: FUN_004e8660
 */


void FUN_004e8660(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  uVar4 = *(uint *)(param_1 + 0x30);
  plVar1 = *(long **)(param_1 + 0x28);
  if (uVar4 != 0) {
    plVar2 = plVar1;
    do {
      while( true ) {
        lVar3 = *plVar2;
        uVar6 = *(uint *)(lVar3 + 0x30);
        if (uVar6 == 0) break;
        plVar8 = *(long **)(lVar3 + 0x28);
        lVar10 = (ulong)uVar6 * 8;
        plVar5 = plVar8;
        lVar9 = lVar10;
        while (*plVar5 != param_1) {
          plVar5 = plVar5 + 1;
          lVar9 = lVar9 + -8;
          if (lVar9 == 0) goto LAB_004e8778;
        }
        if (plVar8 + ((ulong)uVar6 - 1) <= plVar5) goto LAB_004e870c;
        uVar7 = (long)plVar8 + (lVar10 - (long)plVar5) + -9;
        uVar4 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
        if ((uVar4 & 7) == 0) {
          if (uVar7 < 0x38) goto LAB_004e8708;
          goto LAB_004e86d0;
        }
        lVar9 = -((ulong)uVar4 & 7);
        do {
          plVar1 = plVar5 + 1;
          *plVar5 = *plVar1;
          lVar9 = lVar9 + 1;
          plVar5 = plVar1;
        } while (lVar9 != 0);
        if (0x37 < uVar7) {
LAB_004e86d0:
          do {
            *plVar5 = plVar5[1];
            plVar5[1] = plVar5[2];
            plVar5[2] = plVar5[3];
            plVar5[3] = plVar5[4];
            plVar5[4] = plVar5[5];
            plVar5[5] = plVar5[6];
            plVar5[6] = plVar5[7];
            plVar1 = plVar5 + 8;
            plVar5[7] = *plVar1;
            plVar5 = plVar1;
          } while (plVar1 < plVar8 + ((ulong)uVar6 - 1));
        }
LAB_004e8708:
        uVar6 = *(uint *)(lVar3 + 0x30);
LAB_004e870c:
        *(uint *)(lVar3 + 0x30) = uVar6 - 1;
        plVar1 = *(long **)(param_1 + 0x28);
        uVar4 = *(uint *)(param_1 + 0x30);
        plVar2 = plVar2 + 1;
        if (plVar2 == plVar1 + uVar4) goto LAB_004e8788;
      }
LAB_004e8778:
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1 + uVar4);
  }
LAB_004e8788:
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if ((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x20) != '\0')) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


