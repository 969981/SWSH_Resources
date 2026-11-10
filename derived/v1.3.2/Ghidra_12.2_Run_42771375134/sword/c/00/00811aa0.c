/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00811aa0; name: FUN_00811aa0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00811aa0(uint param_1,long param_2,long *param_3,ulong *param_4)

{
  void *pvVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  byte *pbVar14;
  uint *puVar15;
  ulong *puVar16;
  long lVar17;
  code *pcVar18;
  undefined4 uVar19;
  undefined1 auVar20 [16];
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  
  plVar8 = (long *)(**(code **)(*param_3 + 0xb0))(param_3);
  if (param_2 == 0) {
LAB_00811ba0:
    uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,param_3);
    uVar9 = FUN_00810550(param_4,param_1,uVar9);
    return uVar9;
  }
  uVar3 = *(uint *)(param_2 + 0x3c);
  if ((param_1 & 7) != *(uint *)(PTR_DAT_02716f98 + (ulong)uVar3 * 4)) {
    if ((((param_1 & 7) != 2) || (uVar3 - 9 < 4)) || (*(int *)(param_2 + 0x40) != 3))
    goto LAB_00811ba0;
    pbVar14 = (byte *)*param_4;
    if (pbVar14 < (byte *)param_4[1]) {
      uVar10 = (ulong)*pbVar14;
      if (-1 < (char)*pbVar14) {
        *param_4 = (ulong)(pbVar14 + 1);
        goto LAB_00812184;
      }
    }
    else {
      uVar10 = 0;
    }
    uVar10 = FUN_0080d5d0(param_4,uVar10);
    if ((long)uVar10 < 0) {
      return 0;
    }
LAB_00812184:
    uVar7 = FUN_0080c950(param_4,uVar10);
    switch(*(undefined4 *)(param_2 + 0x3c)) {
    case 1:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        puVar16 = (ulong *)*param_4;
        if ((int)param_4[1] - (int)puVar16 < 8) {
          uVar10 = FUN_0080d2f0(param_4,&local_68);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
        }
        else {
          local_68 = *puVar16;
          *param_4 = (ulong)(puVar16 + 1);
        }
        (**(code **)(*plVar8 + 0x230))(local_68,plVar8,param_3,param_2);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 2:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        puVar12 = (undefined4 *)*param_4;
        if ((int)param_4[1] - (int)puVar12 < 4) {
          uVar10 = FUN_0080d200(param_4,&local_68);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          uVar19 = (undefined4)local_68;
        }
        else {
          uVar19 = *puVar12;
          local_68._4_4_ = (undefined4)(local_68 >> 0x20);
          local_68 = CONCAT44(local_68._4_4_,uVar19);
          *param_4 = (ulong)(puVar12 + 1);
        }
        (**(code **)(*plVar8 + 0x228))(uVar19,plVar8,param_3,param_2);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 3:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        pbVar14 = (byte *)*param_4;
        if ((pbVar14 < (byte *)param_4[1]) && (-1 < (char)*pbVar14)) {
          uVar10 = (ulong)*pbVar14;
          *param_4 = (ulong)(pbVar14 + 1);
        }
        else {
          auVar20 = FUN_0080d3e0(param_4);
          uVar10 = auVar20._0_8_;
          if ((auVar20._8_8_ & 1) == 0) {
            return 0;
          }
        }
        (**(code **)(*plVar8 + 0x210))(plVar8,param_3,param_2,uVar10);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 4:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        pbVar14 = (byte *)*param_4;
        if ((pbVar14 < (byte *)param_4[1]) && (-1 < (char)*pbVar14)) {
          uVar10 = (ulong)*pbVar14;
          *param_4 = (ulong)(pbVar14 + 1);
        }
        else {
          auVar20 = FUN_0080d3e0(param_4);
          uVar10 = auVar20._0_8_;
          if ((auVar20._8_8_ & 1) == 0) {
            return 0;
          }
        }
        (**(code **)(*plVar8 + 0x220))(plVar8,param_3,param_2,uVar10);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 5:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        pbVar14 = (byte *)*param_4;
        if (pbVar14 < (byte *)param_4[1]) {
          uVar10 = (ulong)*pbVar14;
          if ((char)*pbVar14 < '\0') goto LAB_008122f8;
          *param_4 = (ulong)(pbVar14 + 1);
        }
        else {
          uVar10 = 0;
LAB_008122f8:
          uVar10 = FUN_0080d5d0(param_4,uVar10);
          if ((long)uVar10 < 0) {
            return 0;
          }
        }
        (**(code **)(*plVar8 + 0x208))(plVar8,param_3,param_2,uVar10);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 6:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        puVar16 = (ulong *)*param_4;
        if ((int)param_4[1] - (int)puVar16 < 8) {
          uVar10 = FUN_0080d2f0(param_4,&local_68);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
        }
        else {
          local_68 = *puVar16;
          *param_4 = (ulong)(puVar16 + 1);
        }
        (**(code **)(*plVar8 + 0x220))(plVar8,param_3,param_2,local_68);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 7:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        puVar12 = (undefined4 *)*param_4;
        if ((int)param_4[1] - (int)puVar12 < 4) {
          uVar10 = FUN_0080d200(param_4,&local_68);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          uVar19 = (undefined4)local_68;
        }
        else {
          uVar19 = *puVar12;
          local_68._4_4_ = (undefined4)(local_68 >> 0x20);
          local_68 = CONCAT44(local_68._4_4_,uVar19);
          *param_4 = (ulong)(puVar12 + 1);
        }
        (**(code **)(*plVar8 + 0x218))(plVar8,param_3,param_2,uVar19);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 8:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        pbVar14 = (byte *)*param_4;
        if ((pbVar14 < (byte *)param_4[1]) && (-1 < (char)*pbVar14)) {
          uVar10 = (ulong)*pbVar14;
          *param_4 = (ulong)(pbVar14 + 1);
        }
        else {
          auVar20 = FUN_0080d3e0(param_4);
          uVar10 = auVar20._0_8_;
          if ((auVar20._8_8_ & 1) == 0) {
            return 0;
          }
        }
        (**(code **)(*plVar8 + 0x238))(plVar8,param_3,param_2,uVar10 != 0);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      return 0;
    case 0xd:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        pbVar14 = (byte *)*param_4;
        if (pbVar14 < (byte *)param_4[1]) {
          uVar10 = (ulong)*pbVar14;
          if ((char)*pbVar14 < '\0') goto LAB_0081240c;
          *param_4 = (ulong)(pbVar14 + 1);
        }
        else {
          uVar10 = 0;
LAB_0081240c:
          uVar10 = FUN_0080d5d0(param_4,uVar10);
          if ((long)uVar10 < 0) {
            return 0;
          }
        }
        (**(code **)(*plVar8 + 0x218))(plVar8,param_3,param_2,uVar10);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 0xe:
      iVar6 = FUN_0080cc60(param_4);
      if (0 < iVar6) {
LAB_00812460:
        do {
          pbVar14 = (byte *)*param_4;
          if (pbVar14 < (byte *)param_4[1]) {
            uVar10 = (ulong)*pbVar14;
            if ((char)*pbVar14 < '\0') goto LAB_00812488;
            *param_4 = (ulong)(pbVar14 + 1);
          }
          else {
            uVar10 = 0;
LAB_00812488:
            uVar10 = FUN_0080d5d0(param_4,uVar10);
            if ((long)uVar10 < 0) {
              return 0;
            }
          }
          lVar17 = (**(code **)(*param_3 + 0xb8))(param_3);
          if (*(int *)(*(long *)(lVar17 + 0x10) + 0x7c) == 3) {
            (**(code **)(*plVar8 + 0x250))(plVar8,param_3,param_2,uVar10 & 0xffffffff);
            iVar6 = FUN_0080cc60(param_4);
            if (iVar6 < 1) break;
            goto LAB_00812460;
          }
          lVar17 = FUN_007e3f10(*(undefined8 *)(param_2 + 0x70),uVar10 & 0xffffffff);
          if (lVar17 == 0) {
            uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,param_3);
            FUN_0080fc40(uVar9,param_1 >> 3,(long)(int)uVar10);
            iVar6 = FUN_0080cc60(param_4);
          }
          else {
            (**(code **)(*plVar8 + 0x248))(plVar8,param_3,param_2,lVar17);
            iVar6 = FUN_0080cc60(param_4);
          }
        } while (0 < iVar6);
      }
      break;
    case 0xf:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        puVar12 = (undefined4 *)*param_4;
        if ((int)param_4[1] - (int)puVar12 < 4) {
          uVar10 = FUN_0080d200(param_4,&local_68);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          uVar19 = (undefined4)local_68;
        }
        else {
          uVar19 = *puVar12;
          local_68._4_4_ = (undefined4)(local_68 >> 0x20);
          local_68 = CONCAT44(local_68._4_4_,uVar19);
          *param_4 = (ulong)(puVar12 + 1);
        }
        (**(code **)(*plVar8 + 0x208))(plVar8,param_3,param_2,uVar19);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 0x10:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        puVar16 = (ulong *)*param_4;
        if ((int)param_4[1] - (int)puVar16 < 8) {
          uVar10 = FUN_0080d2f0(param_4,&local_68);
          if ((uVar10 & 1) == 0) {
            return 0;
          }
        }
        else {
          local_68 = *puVar16;
          *param_4 = (ulong)(puVar16 + 1);
        }
        (**(code **)(*plVar8 + 0x210))(plVar8,param_3,param_2,local_68);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 0x11:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        pbVar14 = (byte *)*param_4;
        if (pbVar14 < (byte *)param_4[1]) {
          uVar10 = (ulong)*pbVar14;
          if ((char)*pbVar14 < '\0') goto LAB_008125c4;
          *param_4 = (ulong)(pbVar14 + 1);
        }
        else {
          uVar10 = 0;
LAB_008125c4:
          uVar10 = FUN_0080d5d0(param_4,uVar10);
          if ((long)uVar10 < 0) {
            return 0;
          }
        }
        (**(code **)(*plVar8 + 0x208))
                  (plVar8,param_3,param_2,-((uint)uVar10 & 1) ^ (uint)uVar10 >> 1);
        iVar6 = FUN_0080cc60(param_4);
      }
      break;
    case 0x12:
      iVar6 = FUN_0080cc60(param_4);
      while (0 < iVar6) {
        pbVar14 = (byte *)*param_4;
        if ((pbVar14 < (byte *)param_4[1]) && (-1 < (char)*pbVar14)) {
          uVar10 = (ulong)*pbVar14;
          *param_4 = (ulong)(pbVar14 + 1);
        }
        else {
          auVar20 = FUN_0080d3e0(param_4);
          uVar10 = auVar20._0_8_;
          if ((auVar20._8_8_ & 1) == 0) {
            return 0;
          }
        }
        (**(code **)(*plVar8 + 0x210))(plVar8,param_3,param_2,-(uVar10 & 1) ^ uVar10 >> 1);
        iVar6 = FUN_0080cc60(param_4);
      }
    }
    FUN_0080c9d0(param_4,uVar7);
    return 1;
  }
  switch(uVar3) {
  case 1:
    puVar16 = (ulong *)*param_4;
    if ((int)param_4[1] - (int)puVar16 < 8) {
      uVar10 = FUN_0080d2f0(param_4,&local_68);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
    }
    else {
      local_68 = *puVar16;
      *param_4 = (ulong)(puVar16 + 1);
    }
    if (*(int *)(param_2 + 0x40) == 3) {
      pcVar18 = *(code **)(*plVar8 + 0x230);
    }
    else {
      pcVar18 = *(code **)(*plVar8 + 0x110);
    }
    (*pcVar18)(local_68,plVar8,param_3,param_2);
    return 1;
  case 2:
    puVar12 = (undefined4 *)*param_4;
    if ((int)param_4[1] - (int)puVar12 < 4) {
      uVar10 = FUN_0080d200(param_4,&local_68);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      uVar7 = (undefined4)local_68;
    }
    else {
      uVar7 = *puVar12;
      local_68 = CONCAT44(local_68._4_4_,uVar7);
      *param_4 = (ulong)(puVar12 + 1);
    }
    if (*(int *)(param_2 + 0x40) == 3) {
      pcVar18 = *(code **)(*plVar8 + 0x228);
    }
    else {
      pcVar18 = *(code **)(*plVar8 + 0x108);
    }
    (*pcVar18)(uVar7,plVar8,param_3,param_2);
    return 1;
  case 3:
    pbVar14 = (byte *)*param_4;
    if ((pbVar14 < (byte *)param_4[1]) && (-1 < (char)*pbVar14)) {
      puVar13 = (ulong *)(pbVar14 + 1);
      uVar10 = (ulong)*pbVar14;
LAB_00811ea4:
      *param_4 = (ulong)puVar13;
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    else {
      auVar20 = FUN_0080d3e0(param_4);
      uVar10 = auVar20._0_8_;
      if ((auVar20._8_8_ & 1) == 0) {
        return 0;
      }
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    goto joined_r0x00812ac8;
  case 4:
    pbVar14 = (byte *)*param_4;
    if ((pbVar14 < (byte *)param_4[1]) && (-1 < (char)*pbVar14)) {
      puVar13 = (ulong *)(pbVar14 + 1);
      uVar10 = (ulong)*pbVar14;
LAB_00811cac:
      *param_4 = (ulong)puVar13;
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    else {
      auVar20 = FUN_0080d3e0(param_4);
      uVar10 = auVar20._0_8_;
      if ((auVar20._8_8_ & 1) == 0) {
        return 0;
      }
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    goto joined_r0x00812974;
  case 5:
    pbVar14 = (byte *)*param_4;
    if (pbVar14 < (byte *)param_4[1]) {
      uVar11 = (ulong)*pbVar14;
      if ((char)*pbVar14 < '\0') goto LAB_00812928;
      *param_4 = (ulong)(pbVar14 + 1);
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    else {
      uVar11 = 0;
LAB_00812928:
      uVar11 = FUN_0080d5d0(param_4,uVar11);
      if ((long)uVar11 < 0) {
        return 0;
      }
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    if (iVar6 == 3) {
      pcVar18 = *(code **)(lVar17 + 0x208);
    }
    else {
      pcVar18 = *(code **)(lVar17 + 0xe8);
    }
    break;
  case 6:
    puVar16 = (ulong *)*param_4;
    if (7 < (int)param_4[1] - (int)puVar16) {
      puVar13 = puVar16 + 1;
      uVar10 = *puVar16;
      local_68 = uVar10;
      goto LAB_00811cac;
    }
    uVar10 = FUN_0080d2f0(param_4,&local_68);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    iVar6 = *(int *)(param_2 + 0x40);
    lVar17 = *plVar8;
    uVar10 = local_68;
joined_r0x00812974:
    if (iVar6 == 3) {
      pcVar18 = *(code **)(lVar17 + 0x220);
    }
    else {
      pcVar18 = *(code **)(lVar17 + 0x100);
    }
    goto LAB_00812098;
  case 7:
    puVar15 = (uint *)*param_4;
    if ((int)param_4[1] - (int)puVar15 < 4) {
      uVar10 = FUN_0080d200(param_4,&local_68);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      uVar11 = local_68 & 0xffffffff;
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    else {
      uVar11 = (ulong)*puVar15;
      local_68 = CONCAT44(local_68._4_4_,*puVar15);
      *param_4 = (ulong)(puVar15 + 1);
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    if (iVar6 == 3) {
      pcVar18 = *(code **)(lVar17 + 0x218);
    }
    else {
      pcVar18 = *(code **)(lVar17 + 0xf8);
    }
    break;
  case 8:
    pbVar14 = (byte *)*param_4;
    if ((pbVar14 < (byte *)param_4[1]) && (-1 < (char)*pbVar14)) {
      uVar10 = (ulong)*pbVar14;
      *param_4 = (ulong)(pbVar14 + 1);
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    else {
      auVar20 = FUN_0080d3e0(param_4);
      uVar10 = auVar20._0_8_;
      if ((auVar20._8_8_ & 1) == 0) {
        return 0;
      }
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    if (iVar6 == 3) {
      pcVar18 = *(code **)(lVar17 + 0x238);
      uVar11 = (ulong)(uVar10 != 0);
    }
    else {
      pcVar18 = *(code **)(lVar17 + 0x118);
      uVar11 = (ulong)(uVar10 != 0);
    }
    break;
  case 9:
    iVar6 = *(int *)(*(long *)(param_2 + 0x30) + 0x7c);
    local_60 = 0;
    local_58 = (void *)0x0;
    local_68 = 0;
    uVar10 = FUN_008160d0(param_4,&local_68);
    if ((uVar10 & 1) == 0) goto joined_r0x00812130;
    bVar5 = (local_68 & 1) != 0;
    pbVar14 = *(byte **)(param_2 + 8);
    pvVar1 = (void *)((ulong)&local_68 | 1);
    if (bVar5) {
      pvVar1 = local_58;
    }
    uVar3 = (uint)((byte)local_68 >> 1);
    if (bVar5) {
      uVar3 = (uint)local_60;
    }
    if ((*pbVar14 & 1) == 0) {
      pbVar14 = pbVar14 + 1;
    }
    else {
      pbVar14 = *(byte **)(pbVar14 + 0x10);
    }
    if (iVar6 == 3) {
      uVar10 = FUN_008161e0(pvVar1,uVar3,0,pbVar14);
      goto joined_r0x00811dec;
    }
    goto LAB_00812114;
  case 10:
    if (*(int *)(param_2 + 0x40) == 3) {
      pcVar18 = *(code **)(*plVar8 + 600);
    }
    else {
      pcVar18 = *(code **)(*plVar8 + 0x138);
    }
    plVar8 = (long *)(*pcVar18)(plVar8,param_3,param_2,param_4[9]);
    uVar10 = param_4[7];
    *(int *)(param_4 + 7) = (int)uVar10 + -1;
    if ((int)uVar10 < 1) {
      return 0;
    }
    uVar10 = (**(code **)(*plVar8 + 0x58))(plVar8,param_4);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if ((int)param_4[7] < *(int *)((long)param_4 + 0x3c)) {
      *(int *)(param_4 + 7) = (int)param_4[7] + 1;
    }
    if ((uint)param_4[4] == (param_1 & 0xfffffff8 | 4)) {
      return 1;
    }
    return 0;
  case 0xb:
    if (*(int *)(param_2 + 0x40) == 3) {
      pcVar18 = *(code **)(*plVar8 + 600);
    }
    else {
      pcVar18 = *(code **)(*plVar8 + 0x138);
    }
    plVar8 = (long *)(*pcVar18)(plVar8,param_3,param_2,param_4[9]);
    pcVar2 = (char *)*param_4;
    if ((pcVar2 < (char *)param_4[1]) && (cVar4 = *pcVar2, -1 < cVar4)) {
      *param_4 = (ulong)(pcVar2 + 1);
      uVar10 = FUN_0080ca20(param_4,cVar4);
    }
    else {
      iVar6 = FUN_0080d720(param_4);
      if (iVar6 < 0) {
        return 0;
      }
      uVar10 = FUN_0080ca20(param_4,iVar6);
    }
    if ((long)uVar10 < 0) {
      return 0;
    }
    uVar11 = (**(code **)(*plVar8 + 0x58))(plVar8,param_4);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    uVar10 = FUN_0080cb90(param_4,uVar10 & 0xffffffff);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    return 1;
  case 0xc:
    local_68 = 0;
    local_60 = 0;
    local_58 = (void *)0x0;
    uVar10 = FUN_008160d0(param_4,&local_68);
joined_r0x00811dec:
    if ((uVar10 & 1) == 0) {
joined_r0x00812130:
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
      return 0;
    }
LAB_00812114:
    if (*(int *)(param_2 + 0x40) == 3) {
      pcVar18 = *(code **)(*plVar8 + 0x240);
    }
    else {
      pcVar18 = *(code **)(*plVar8 + 0x120);
    }
    (*pcVar18)(plVar8,param_3,param_2,&local_68);
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
switchD_00811b1c_default:
    return 1;
  case 0xd:
    pbVar14 = (byte *)*param_4;
    if (pbVar14 < (byte *)param_4[1]) {
      uVar11 = (ulong)*pbVar14;
      if ((char)*pbVar14 < '\0') goto LAB_00812980;
      *param_4 = (ulong)(pbVar14 + 1);
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    else {
      uVar11 = 0;
LAB_00812980:
      uVar11 = FUN_0080d5d0(param_4,uVar11);
      if ((long)uVar11 < 0) {
        return 0;
      }
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    if (iVar6 == 3) {
      pcVar18 = *(code **)(lVar17 + 0x218);
    }
    else {
      pcVar18 = *(code **)(lVar17 + 0xf8);
    }
    break;
  case 0xe:
    pbVar14 = (byte *)*param_4;
    if (pbVar14 < (byte *)param_4[1]) {
      uVar11 = (ulong)*pbVar14;
      if ((char)*pbVar14 < '\0') goto LAB_008129bc;
      *param_4 = (ulong)(pbVar14 + 1);
    }
    else {
      uVar11 = 0;
LAB_008129bc:
      uVar11 = FUN_0080d5d0(param_4,uVar11);
      if ((long)uVar11 < 0) {
        return 0;
      }
    }
    lVar17 = (**(code **)(*param_3 + 0xb8))(param_3);
    if (*(int *)(*(long *)(lVar17 + 0x10) + 0x7c) == 3) {
      if (*(int *)(param_2 + 0x40) == 3) {
        pcVar18 = *(code **)(*plVar8 + 0x250);
      }
      else {
        pcVar18 = *(code **)(*plVar8 + 0x130);
      }
      uVar11 = uVar11 & 0xffffffff;
      break;
    }
    uVar10 = FUN_007e3f10(*(undefined8 *)(param_2 + 0x70),uVar11 & 0xffffffff);
    if (uVar10 == 0) {
      uVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,param_3);
      FUN_0080fc40(uVar9,param_1 >> 3,(long)(int)uVar11);
      return 1;
    }
    if (*(int *)(param_2 + 0x40) == 3) {
      pcVar18 = *(code **)(*plVar8 + 0x248);
    }
    else {
      pcVar18 = *(code **)(*plVar8 + 0x128);
    }
    goto LAB_00812098;
  case 0xf:
    puVar15 = (uint *)*param_4;
    if ((int)param_4[1] - (int)puVar15 < 4) {
      uVar10 = FUN_0080d200(param_4,&local_68);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      uVar11 = local_68 & 0xffffffff;
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    else {
      uVar11 = (ulong)*puVar15;
      local_68 = CONCAT44(local_68._4_4_,*puVar15);
      *param_4 = (ulong)(puVar15 + 1);
      iVar6 = *(int *)(param_2 + 0x40);
      lVar17 = *plVar8;
    }
    goto joined_r0x00812afc;
  case 0x10:
    puVar16 = (ulong *)*param_4;
    if (7 < (int)param_4[1] - (int)puVar16) {
      puVar13 = puVar16 + 1;
      uVar10 = *puVar16;
      local_68 = uVar10;
      goto LAB_00811ea4;
    }
    uVar10 = FUN_0080d2f0(param_4,&local_68);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    iVar6 = *(int *)(param_2 + 0x40);
    lVar17 = *plVar8;
    uVar10 = local_68;
    goto joined_r0x00812ac8;
  case 0x11:
    pbVar14 = (byte *)*param_4;
    if (pbVar14 < (byte *)param_4[1]) {
      uVar10 = (ulong)*pbVar14;
      if ((char)*pbVar14 < '\0') goto LAB_00812ad4;
      *param_4 = (ulong)(pbVar14 + 1);
    }
    else {
      uVar10 = 0;
LAB_00812ad4:
      uVar10 = FUN_0080d5d0(param_4,uVar10);
      if ((long)uVar10 < 0) {
        return 0;
      }
    }
    uVar11 = (ulong)(-((uint)uVar10 & 1) ^ (uint)uVar10 >> 1);
    iVar6 = *(int *)(param_2 + 0x40);
    lVar17 = *plVar8;
joined_r0x00812afc:
    if (iVar6 == 3) {
      pcVar18 = *(code **)(lVar17 + 0x208);
    }
    else {
      pcVar18 = *(code **)(lVar17 + 0xe8);
    }
    break;
  case 0x12:
    pbVar14 = (byte *)*param_4;
    if ((pbVar14 < (byte *)param_4[1]) && (-1 < (char)*pbVar14)) {
      uVar10 = (ulong)*pbVar14;
      *param_4 = (ulong)(pbVar14 + 1);
    }
    else {
      auVar20 = FUN_0080d3e0(param_4);
      uVar10 = auVar20._0_8_;
      if ((auVar20._8_8_ & 1) == 0) {
        return 0;
      }
    }
    uVar10 = -(uVar10 & 1) ^ uVar10 >> 1;
    iVar6 = *(int *)(param_2 + 0x40);
    lVar17 = *plVar8;
joined_r0x00812ac8:
    if (iVar6 == 3) {
      pcVar18 = *(code **)(lVar17 + 0x210);
    }
    else {
      pcVar18 = *(code **)(lVar17 + 0xf0);
    }
LAB_00812098:
    (*pcVar18)(plVar8,param_3,param_2,uVar10);
    return 1;
  default:
    goto switchD_00811b1c_default;
  }
  (*pcVar18)(plVar8,param_3,param_2,uVar11);
  return 1;
}


