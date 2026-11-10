/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fe780; name: FUN_004fe780
 */


void FUN_004fe780(long param_1,int param_2,uint param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  ulong *puVar16;
  
  puVar5 = PTR_DAT_027137c8;
  uVar8 = 0;
  if (param_3 != 0) {
    uVar8 = (param_2 - 1U) / param_3;
  }
  param_3 = (uVar8 + 1) * param_3;
  lVar1 = param_1 + 0x38;
  do {
    if (((param_3 != 0) && (param_3 <= *(uint *)(param_1 + 0x348))) &&
       (uVar6 = FUN_004ff2c0(lVar1,param_3), uVar6 != 0)) {
      puVar7 = (ulong *)FUN_00404690(*(undefined4 *)puVar5,0x28);
      if (puVar7 != (ulong *)0x0) {
        *puVar7 = 0;
        puVar7[1] = uVar6;
        *(uint *)((long)puVar7 + 0x1c) = param_3;
        *(undefined4 *)(puVar7 + 4) = 0xffffffff;
        puVar7[2] = 0;
        *(undefined2 *)((long)puVar7 + 0x24) = 0;
        *(int *)(puVar7 + 3) = param_2;
        *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_3;
        *param_4 = (long)puVar7;
        break;
      }
      FUN_004ff420(lVar1,(int)uVar6 - *(int *)(param_1 + 0x338),param_3);
    }
    *param_4 = 0;
    lVar9 = *(long *)(param_1 + 0x18);
    *param_4 = lVar9;
    if (lVar9 == 0) {
      FUN_004ffe60(*(undefined8 *)(param_1 + 0x360));
      return;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - *(int *)(lVar9 + 0x18);
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
      if (lVar9 == 0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      else {
        *(long *)(param_1 + 0x18) = lVar9;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    }
    *(undefined8 *)(*param_4 + 0x10) = 0;
    puVar7 = (ulong *)*param_4;
    uVar8 = *(uint *)((long)puVar7 + 0x1c);
    if (uVar8 != param_3) {
      uVar3 = (uint)puVar7[4];
      if (uVar3 != 0xffffffff) {
        uVar8 = *(uint *)(param_1 + 0x30);
        lVar9 = *(long *)(param_1 + 0x28);
        iVar12 = uVar8 - 1;
        iVar14 = 0;
        iVar15 = iVar12;
LAB_004fe8a0:
        while( true ) {
          iVar4 = iVar15 - iVar14;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          uVar2 = iVar14 + (iVar4 >> 1);
          puVar16 = *(ulong **)(lVar9 + (ulong)uVar2 * 8);
          if ((uint)puVar16[4] <= uVar3) break;
LAB_004fe8c0:
          iVar15 = uVar2 - 1;
          if (iVar15 < iVar14) goto LAB_004fe9a8;
        }
        if (uVar3 != (uint)puVar16[4]) goto LAB_004fe8d4;
        if (*puVar16 < *puVar7) goto LAB_004fe8c0;
        if (*puVar7 < *puVar16) goto LAB_004fe8d4;
        if (puVar7[1] < puVar16[1]) goto LAB_004fe8c0;
        if (puVar16[1] < puVar7[1]) goto LAB_004fe8d4;
        puVar11 = (undefined8 *)(lVar9 + (ulong)uVar2 * 8);
        puVar13 = (undefined8 *)(lVar9 + (ulong)uVar8 * 8 + -8);
        if (puVar13 <= puVar11) goto LAB_004fe9a4;
        uVar6 = (ulong)uVar8 * 8 + -9 + (ulong)uVar2 * -8;
        uVar8 = ((uint)(uVar6 >> 3) & 0x1fffffff) + 1;
        if ((uVar8 & 7) == 0) {
          if (uVar6 < 0x38) goto LAB_004fe99c;
          goto LAB_004fe964;
        }
        lVar9 = -((ulong)uVar8 & 7);
        do {
          puVar10 = puVar11 + 1;
          *puVar11 = *puVar10;
          lVar9 = lVar9 + 1;
          puVar11 = puVar10;
        } while (lVar9 != 0);
        if (0x37 < uVar6) {
LAB_004fe964:
          do {
            *puVar11 = puVar11[1];
            puVar11[1] = puVar11[2];
            puVar11[2] = puVar11[3];
            puVar11[3] = puVar11[4];
            puVar11[4] = puVar11[5];
            puVar11[5] = puVar11[6];
            puVar11[6] = puVar11[7];
            puVar10 = puVar11 + 8;
            puVar11[7] = *puVar10;
            puVar11 = puVar10;
          } while (puVar10 < puVar13);
        }
LAB_004fe99c:
        iVar12 = *(int *)(param_1 + 0x30) + -1;
LAB_004fe9a4:
        *(int *)(param_1 + 0x30) = iVar12;
LAB_004fe9a8:
        *(undefined4 *)(puVar7 + 4) = 0xffffffff;
        puVar7 = (ulong *)*param_4;
        uVar8 = *(uint *)((long)puVar7 + 0x1c);
      }
      *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - uVar8;
      FUN_004ff420(lVar1,(int)puVar7[1] - *(int *)(param_1 + 0x338),
                   *(undefined4 *)((long)puVar7 + 0x1c));
      if (puVar7 != (ulong *)0x0) {
        FUN_00404870(*(undefined4 *)puVar5,puVar7);
      }
      FUN_004ffe40(*(undefined8 *)(param_1 + 0x360));
      puVar7 = (ulong *)0x0;
      *param_4 = 0;
    }
  } while (puVar7 == (ulong *)0x0);
  *(short *)((long)puVar7 + 0x24) = *(short *)((long)puVar7 + 0x24) + 1;
  return;
LAB_004fe8d4:
  iVar14 = uVar2 + 1;
  if (iVar15 < iVar14) goto LAB_004fe9a8;
  goto LAB_004fe8a0;
}


