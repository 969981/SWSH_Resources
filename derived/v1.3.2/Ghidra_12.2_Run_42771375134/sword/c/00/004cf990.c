/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cf990; name: FUN_004cf990
 */


undefined1  [16] FUN_004cf990(ulong param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 2;
  lVar5 = FUN_004699e0(*param_2);
  uVar2 = *(uint *)(lVar5 + 0x18);
  iVar6 = uVar2 - 1;
  if (-1 < iVar6) {
    lVar8 = *(long *)(lVar5 + 0x10);
    iVar10 = 0;
    iVar12 = iVar6;
    do {
      while( true ) {
        iVar4 = iVar12 - iVar10;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = iVar10 + (iVar4 >> 1);
        uVar13 = *(ulong *)(lVar8 + (long)iVar4 * 8);
        if (param_1 > uVar13 || uVar13 == param_1) break;
        iVar12 = iVar4 + -1;
        if (iVar12 < iVar10) goto LAB_004cfab0;
      }
      if (param_1 <= uVar13) {
        puVar7 = (undefined8 *)(lVar8 + (long)iVar4 * 8);
        puVar9 = (undefined8 *)(lVar8 + (ulong)uVar2 * 8 + -8);
        if (puVar9 <= puVar7) goto LAB_004cfaac;
        uVar13 = (ulong)uVar2 * 8 + -9 + (long)iVar4 * -8;
        uVar2 = ((uint)(uVar13 >> 3) & 0x1fffffff) + 1;
        if ((uVar2 & 3) == 0) {
          if (uVar13 < 0x18) goto LAB_004cfaa4;
          goto LAB_004cfa7c;
        }
        lVar8 = -((ulong)uVar2 & 3);
        puVar11 = puVar7;
        do {
          puVar7 = puVar11 + 1;
          *puVar11 = *puVar7;
          lVar8 = lVar8 + 1;
          puVar11 = puVar7;
        } while (lVar8 != 0);
        if (0x17 < uVar13) {
LAB_004cfa7c:
          do {
            *puVar7 = puVar7[1];
            puVar7[1] = puVar7[2];
            puVar7[2] = puVar7[3];
            puVar11 = puVar7 + 4;
            puVar7[3] = *puVar11;
            puVar7 = puVar11;
          } while (puVar11 < puVar9);
        }
LAB_004cfaa4:
        iVar6 = *(int *)(lVar5 + 0x18) + -1;
LAB_004cfaac:
        *(int *)(lVar5 + 0x18) = iVar6;
        break;
      }
      iVar10 = iVar4 + 1;
    } while (iVar10 <= iVar12);
  }
LAB_004cfab0:
  puVar7 = (undefined8 *)*param_2;
  lVar8 = param_2[1];
  lVar5 = puVar7[8];
  plVar1 = (long *)(param_1 + 0x48);
  if (*(undefined8 **)(param_1 + 0x48) != puVar7) {
    plVar1 = (long *)(lVar8 + 0x40);
  }
  *plVar1 = lVar5;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  *param_2 = lVar5;
  param_2[1] = lVar8;
  if (puVar7 != (undefined8 *)0x0) {
    uVar3 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*puVar7)(puVar7);
    FUN_004047f0(uVar3,puVar7);
    lVar5 = *param_2;
    lVar8 = param_2[1];
  }
  auVar14._8_8_ = lVar8;
  auVar14._0_8_ = lVar5;
  return auVar14;
}


