/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a67970; name: FUN_00a67970
 */


void FUN_00a67970(long *param_1,uint param_2,undefined8 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ushort *puVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 auStack_a0 [4];
  short local_9c;
  int local_80 [6];
  float local_68;
  
  if (param_2 == 0xff) {
    plVar11 = (long *)0x0;
LAB_00a679e8:
    uVar12 = 1;
  }
  else {
    plVar11 = (long *)param_1[(ulong)param_2 + 0xa9];
    if (plVar11 == (long *)0x0) goto LAB_00a679e8;
    (**(code **)(plVar11[9] + 0x10))();
    uVar12 = (**(code **)(*plVar11 + 0x218))(plVar11);
    uVar12 = uVar12 & 0xff;
  }
  puVar9 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x278) + 400);
  piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
  lVar7 = FUN_009c6000(param_1);
  uVar5 = (**(code **)(*param_1 + 0x870))(param_1);
  if (((lVar7 != 0) && (iVar6 = (**(code **)(*param_1 + 0x870))(param_1), iVar6 == 2)) &&
     ((uVar8 = FUN_008f35c0(lVar7,0x800), (uVar8 & 1) != 0 ||
      (uVar8 = FUN_008f35c0(lVar7,0x1000), (uVar8 & 1) != 0)))) {
    uVar5 = uVar5 + 1;
  }
  puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar9 = (uint *)((long)puVar9 + (ulong)(uVar5 & 0xff) * 4 + (ulong)*puVar9 + 4);
  piVar1 = (int *)((long)puVar9 + (ulong)*puVar9);
  puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar9 = (uint *)((long)puVar9 + (ulong)*puVar9);
  if (*puVar9 <= param_2) {
    *param_3 = 0;
    param_3[1] = 0;
    *param_4 = 0xb4;
    goto joined_r0x00a67b98;
  }
  puVar9 = puVar9 + (ulong)param_2 + 1;
  piVar2 = (int *)((long)puVar9 + (ulong)*puVar9);
  puVar9 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar9 = (uint *)((long)puVar9 + uVar12 * 4 + (ulong)*puVar9 + 4);
  piVar2 = (int *)((long)puVar9 + (ulong)*puVar9);
  cVar4 = FUN_00ad59f0(plVar11);
  if (cVar4 == '\0') {
    lVar7 = FUN_009c6000(param_1);
    fVar15 = 0.0;
    if (lVar7 != 0) {
      uVar12 = FUN_008f35c0(lVar7,0x400);
      fVar15 = 0.0;
      if ((uVar12 & 1) != 0) {
        uVar12 = (**(code **)(*param_1 + 0x748))(param_1,param_2);
        fVar15 = 0.0;
        if ((uVar12 & 1) == 0) {
          (**(code **)(*plVar11 + 0x220))(local_80,plVar11);
          if (local_80[0] == 0x37a) {
            (**(code **)(*plVar11 + 0x220))(auStack_a0,plVar11);
            fVar15 = DAT_01d4bd70;
            if (local_9c != 0) {
              fVar15 = 0.0;
            }
          }
          else {
            fVar15 = 0.0;
          }
        }
      }
    }
    uVar16 = 0;
    puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
    uVar3 = *puVar10;
    uVar14 = 0;
    fVar13 = 0.0;
    if (4 < uVar3) {
      uVar16 = 0;
      uVar14 = 0;
      if ((ulong)puVar10[2] != 0) {
        uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[2]);
      }
      if (uVar3 < 7) {
        fVar13 = 0.0;
      }
      else {
        fVar13 = 0.0;
        uVar16 = 0;
        if ((ulong)puVar10[3] != 0) {
          uVar16 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[3]);
        }
        if ((8 < uVar3) && ((ulong)puVar10[4] != 0)) {
          fVar13 = *(float *)((long)piVar2 + (ulong)puVar10[4]);
        }
      }
    }
    param_3[1] = (ulong)(uint)(fVar15 + fVar13);
    *param_3 = CONCAT44(uVar16,uVar14);
  }
  else {
    (**(code **)(*plVar11 + 0x1d0))(local_80,plVar11);
    uVar12 = (**(code **)(*param_1 + 0x748))(param_1,param_2);
    if ((uVar12 & 1) == 0) {
      local_68 = -local_68;
    }
    puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
    uVar3 = *puVar10;
    if (uVar3 < 5) {
      uVar14 = 0;
LAB_00a67c44:
      fVar13 = 0.0;
      fVar15 = fVar13;
    }
    else {
      uVar14 = 0;
      if ((ulong)puVar10[2] != 0) {
        uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[2]);
      }
      if (uVar3 < 7) goto LAB_00a67c44;
      fVar13 = 0.0;
      if ((ulong)puVar10[3] != 0) {
        fVar13 = *(float *)((long)piVar2 + (ulong)puVar10[3]);
      }
      fVar15 = 0.0;
      if ((8 < uVar3) && ((ulong)puVar10[4] != 0)) {
        fVar15 = *(float *)((long)piVar2 + (ulong)puVar10[4]);
      }
    }
    param_3[1] = (ulong)(uint)(local_68 + fVar15);
    *param_3 = CONCAT44(fVar13,uVar14);
  }
  puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
  *param_4 = *(undefined4 *)((long)puVar9 + (ulong)param_2 * 4 + (ulong)*puVar9 + 4);
joined_r0x00a67b98:
  if (plVar11 != (long *)0x0) {
    (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
  }
  return;
}


