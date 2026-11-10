/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0082b8b0; name: FUN_0082b8b0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_0082b8b0(long *param_1,int param_2,ulong param_3,undefined1 *param_4,ulong *param_5,
            long *param_6)

{
  byte *pbVar1;
  char cVar2;
  undefined1 uVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  __tree_node_base *p_Var10;
  ulong uVar11;
  __tree_node_base *p_Var12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  ulong *puVar16;
  char *pcVar17;
  __tree_node_base *p_Var18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  ulong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 local_6c;
  
  if ((param_3 & 1) != 0) {
    pbVar1 = (byte *)*param_5;
    if (pbVar1 < (byte *)param_5[1]) {
      uVar11 = (ulong)*pbVar1;
      if (-1 < (char)*pbVar1) {
        *param_5 = (ulong)(pbVar1 + 1);
        goto LAB_0082c6e0;
      }
    }
    else {
      uVar11 = 0;
    }
    uVar11 = FUN_0080d5d0(param_5,uVar11);
    if ((long)uVar11 < 0) {
      return 0;
    }
LAB_0082c6e0:
    uVar6 = FUN_0080c950(param_5,uVar11);
    switch(*param_4) {
    case 1:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        puVar20 = (undefined8 *)*param_5;
        if ((int)param_5[1] - (int)puVar20 < 8) {
          uVar11 = FUN_0080d2f0(param_5,&local_80);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          uVar13 = CONCAT44(uStack_7c,local_80);
        }
        else {
          uVar13 = *puVar20;
          local_80 = (undefined4)uVar13;
          uStack_7c = (undefined4)((ulong)uVar13 >> 0x20);
          *param_5 = (ulong)(puVar20 + 1);
        }
        FUN_00827960(uVar13,param_1,param_2,1,param_4[2],*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 2:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        puVar19 = (undefined4 *)*param_5;
        if ((int)param_5[1] - (int)puVar19 < 4) {
          uVar11 = FUN_0080d200(param_5,&local_80);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
        }
        else {
          local_80 = *puVar19;
          *param_5 = (ulong)(puVar19 + 1);
        }
        FUN_008273f0(local_80,param_1,param_2,2,param_4[2],*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 3:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        pbVar1 = (byte *)*param_5;
        if ((pbVar1 < (byte *)param_5[1]) && (-1 < (char)*pbVar1)) {
          uVar11 = (ulong)*pbVar1;
          *param_5 = (ulong)(pbVar1 + 1);
        }
        else {
          auVar24 = FUN_0080d3e0(param_5);
          uVar11 = auVar24._0_8_;
          if ((auVar24._8_8_ & 1) == 0) {
            return 0;
          }
        }
        FUN_008263d0(param_1,param_2,3,param_4[2],uVar11,*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 4:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        pbVar1 = (byte *)*param_5;
        if ((pbVar1 < (byte *)param_5[1]) && (-1 < (char)*pbVar1)) {
          uVar11 = (ulong)*pbVar1;
          *param_5 = (ulong)(pbVar1 + 1);
        }
        else {
          auVar24 = FUN_0080d3e0(param_5);
          uVar11 = auVar24._0_8_;
          if ((auVar24._8_8_ & 1) == 0) {
            return 0;
          }
        }
        FUN_00826e90(param_1,param_2,4,param_4[2],uVar11,*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 5:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        pbVar1 = (byte *)*param_5;
        if (pbVar1 < (byte *)param_5[1]) {
          uVar11 = (ulong)*pbVar1;
          if ((char)*pbVar1 < '\0') goto LAB_0082c8a4;
          *param_5 = (ulong)(pbVar1 + 1);
        }
        else {
          uVar11 = 0;
LAB_0082c8a4:
          uVar11 = FUN_0080d5d0(param_5,uVar11);
          if ((long)uVar11 < 0) {
            return 0;
          }
        }
        FUN_00825e70(param_1,param_2,5,param_4[2],uVar11,*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 6:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        puVar20 = (undefined8 *)*param_5;
        if ((int)param_5[1] - (int)puVar20 < 8) {
          uVar11 = FUN_0080d2f0(param_5,&local_80);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          uVar13 = CONCAT44(uStack_7c,local_80);
        }
        else {
          uVar13 = *puVar20;
          local_80 = (undefined4)uVar13;
          uStack_7c = (undefined4)((ulong)uVar13 >> 0x20);
          *param_5 = (ulong)(puVar20 + 1);
        }
        FUN_00826e90(param_1,param_2,6,param_4[2],uVar13,*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 7:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        puVar19 = (undefined4 *)*param_5;
        if ((int)param_5[1] - (int)puVar19 < 4) {
          uVar11 = FUN_0080d200(param_5,&local_80);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
        }
        else {
          local_80 = *puVar19;
          *param_5 = (ulong)(puVar19 + 1);
        }
        FUN_00826930(param_1,param_2,7,param_4[2],local_80,*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 8:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        pbVar1 = (byte *)*param_5;
        if ((pbVar1 < (byte *)param_5[1]) && (-1 < (char)*pbVar1)) {
          uVar11 = (ulong)*pbVar1;
          *param_5 = (ulong)(pbVar1 + 1);
        }
        else {
          auVar24 = FUN_0080d3e0(param_5);
          uVar11 = auVar24._0_8_;
          if ((auVar24._8_8_ & 1) == 0) {
            return 0;
          }
        }
        FUN_00827ee0(param_1,param_2,8,param_4[2],uVar11 != 0,*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      FUN_00801270(&local_80,3,
                   "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/extension_set.cc"
                   ,0x4c5);
      uVar13 = FUN_00800f30(&local_80,"Non-primitive types can\'t be packed.");
      FUN_00800fa0(&local_88,uVar13);
      FUN_00801290(&local_80);
      break;
    case 0xd:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        pbVar1 = (byte *)*param_5;
        if (pbVar1 < (byte *)param_5[1]) {
          uVar11 = (ulong)*pbVar1;
          if ((char)*pbVar1 < '\0') goto LAB_0082c9bc;
          *param_5 = (ulong)(pbVar1 + 1);
        }
        else {
          uVar11 = 0;
LAB_0082c9bc:
          uVar11 = FUN_0080d5d0(param_5,uVar11);
          if ((long)uVar11 < 0) {
            return 0;
          }
        }
        FUN_00826930(param_1,param_2,0xd,param_4[2],uVar11,*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 0xe:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        pbVar1 = (byte *)*param_5;
        if (pbVar1 < (byte *)param_5[1]) {
          uVar11 = (ulong)*pbVar1;
          if ((char)*pbVar1 < '\0') goto LAB_0082ca5c;
          *param_5 = (ulong)(pbVar1 + 1);
          uVar9 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar11);
          if ((uVar9 & 1) == 0) goto LAB_0082ca3c;
LAB_0082ca80:
          FUN_00828850(param_1,param_2,0xe,param_4[2],uVar11 & 0xffffffff,
                       *(undefined8 *)(param_4 + 0x18));
        }
        else {
          uVar11 = 0;
LAB_0082ca5c:
          uVar11 = FUN_0080d5d0(param_5,uVar11);
          if ((long)uVar11 < 0) {
            return 0;
          }
          uVar9 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar11 & 0xffffffff);
          if ((uVar9 & 1) != 0) goto LAB_0082ca80;
LAB_0082ca3c:
          (**(code **)(*param_6 + 0x20))(param_6,param_2,uVar11 & 0xffffffff);
        }
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 0xf:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        puVar19 = (undefined4 *)*param_5;
        if ((int)param_5[1] - (int)puVar19 < 4) {
          uVar11 = FUN_0080d200(param_5,&local_80);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
        }
        else {
          local_80 = *puVar19;
          *param_5 = (ulong)(puVar19 + 1);
        }
        FUN_00825e70(param_1,param_2,0xf,param_4[2],local_80,*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 0x10:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        puVar20 = (undefined8 *)*param_5;
        if ((int)param_5[1] - (int)puVar20 < 8) {
          uVar11 = FUN_0080d2f0(param_5,&local_80);
          if ((uVar11 & 1) == 0) {
            return 0;
          }
          uVar13 = CONCAT44(uStack_7c,local_80);
        }
        else {
          uVar13 = *puVar20;
          local_80 = (undefined4)uVar13;
          uStack_7c = (undefined4)((ulong)uVar13 >> 0x20);
          *param_5 = (ulong)(puVar20 + 1);
        }
        FUN_008263d0(param_1,param_2,0x10,param_4[2],uVar13,*(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 0x11:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        pbVar1 = (byte *)*param_5;
        if (pbVar1 < (byte *)param_5[1]) {
          uVar11 = (ulong)*pbVar1;
          if ((char)*pbVar1 < '\0') goto LAB_0082cb14;
          *param_5 = (ulong)(pbVar1 + 1);
        }
        else {
          uVar11 = 0;
LAB_0082cb14:
          uVar11 = FUN_0080d5d0(param_5,uVar11);
          if ((long)uVar11 < 0) {
            return 0;
          }
        }
        FUN_00825e70(param_1,param_2,0x11,param_4[2],-((uint)uVar11 & 1) ^ (uint)uVar11 >> 1,
                     *(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
      break;
    case 0x12:
      iVar7 = FUN_0080cc60(param_5);
      while (0 < iVar7) {
        pbVar1 = (byte *)*param_5;
        if ((pbVar1 < (byte *)param_5[1]) && (-1 < (char)*pbVar1)) {
          uVar11 = (ulong)*pbVar1;
          *param_5 = (ulong)(pbVar1 + 1);
        }
        else {
          auVar24 = FUN_0080d3e0(param_5);
          uVar11 = auVar24._0_8_;
          if ((auVar24._8_8_ & 1) == 0) {
            return 0;
          }
        }
        FUN_008263d0(param_1,param_2,0x12,param_4[2],-(uVar11 & 1) ^ uVar11 >> 1,
                     *(undefined8 *)(param_4 + 0x18));
        iVar7 = FUN_0080cc60(param_5);
      }
    }
    FUN_0080c9d0(param_5,uVar6);
    return 1;
  }
  switch(*param_4) {
  case 1:
    puVar16 = (ulong *)*param_5;
    if ((int)param_5[1] - (int)puVar16 < 8) {
      uVar11 = FUN_0080d2f0(param_5,&local_80);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      uVar11 = CONCAT44(uStack_7c,local_80);
      cVar2 = param_4[1];
    }
    else {
      uVar11 = *puVar16;
      local_80 = (undefined4)uVar11;
      uStack_7c = (undefined4)(uVar11 >> 0x20);
      *param_5 = (ulong)(puVar16 + 1);
      cVar2 = param_4[1];
    }
    if (cVar2 != '\0') {
      FUN_00827960(uVar11,param_1,param_2,1,param_4[2],*(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      lVar21 = *plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082cec4;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082cec4:
      lVar21 = *plVar8;
    }
    if (lVar21 != 0) break;
    p_Var10 = operator_new(0x40);
    *(int *)(p_Var10 + 0x20) = param_2;
    p_Var18 = p_Var10 + 0x28;
    *(long **)(p_Var10 + 0x10) = plVar4;
    *(undefined8 *)(p_Var10 + 0x30) = local_74;
    *(undefined8 *)(p_Var10 + 0x38) = local_6c;
    *(ulong *)(p_Var10 + 0x28) = CONCAT44(uStack_78,uStack_7c);
    *(undefined8 *)p_Var10 = 0;
    *(undefined8 *)(p_Var10 + 8) = 0;
    *plVar8 = (long)p_Var10;
    if (*(long *)*param_1 == 0) {
      p_Var12 = p_Var10;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var12 = (__tree_node_base *)*plVar8;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var12);
    param_1[2] = param_1[2] + 1;
    *(undefined8 *)(p_Var10 + 0x38) = uVar13;
    uVar15 = 1;
LAB_0082d338:
    *(undefined2 *)(p_Var10 + 0x30) = uVar15;
    goto LAB_0082d33c;
  case 2:
    puVar19 = (undefined4 *)*param_5;
    if ((int)param_5[1] - (int)puVar19 < 4) {
      uVar11 = FUN_0080d200(param_5,&local_80);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      cVar2 = param_4[1];
      uVar6 = local_80;
    }
    else {
      uVar6 = *puVar19;
      *param_5 = (ulong)(puVar19 + 1);
      cVar2 = param_4[1];
    }
    local_80 = uVar6;
    if (cVar2 != '\0') {
      FUN_008273f0(uVar6,param_1,param_2,2,param_4[2],*(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      p_Var18 = (__tree_node_base *)*plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082cfdc;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082cfdc:
      p_Var18 = (__tree_node_base *)*plVar8;
    }
    if (p_Var18 == (__tree_node_base *)0x0) {
      p_Var18 = operator_new(0x40);
      *(int *)(p_Var18 + 0x20) = param_2;
      *(long **)(p_Var18 + 0x10) = plVar4;
      *(undefined8 *)(p_Var18 + 0x30) = local_74;
      *(undefined8 *)(p_Var18 + 0x38) = local_6c;
      *(ulong *)(p_Var18 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var18 = 0;
      *(undefined8 *)(p_Var18 + 8) = 0;
      *plVar8 = (long)p_Var18;
      if (*(long *)*param_1 == 0) {
        p_Var10 = p_Var18;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var10 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var10);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var18 + 0x38) = uVar13;
      uVar15 = 2;
LAB_0082d204:
      *(undefined2 *)(p_Var18 + 0x30) = uVar15;
      goto LAB_0082d208;
    }
    goto LAB_0082d17c;
  case 3:
    pbVar1 = (byte *)*param_5;
    if ((pbVar1 < (byte *)param_5[1]) && (-1 < (char)*pbVar1)) {
      uVar11 = (ulong)*pbVar1;
      *param_5 = (ulong)(pbVar1 + 1);
      cVar2 = param_4[1];
    }
    else {
      auVar24 = FUN_0080d3e0(param_5);
      uVar11 = auVar24._0_8_;
      if ((auVar24._8_8_ & 1) == 0) {
        return 0;
      }
      cVar2 = param_4[1];
    }
    if (cVar2 != '\0') {
      uVar3 = param_4[2];
      uVar14 = *(undefined8 *)(param_4 + 0x18);
      uVar13 = 3;
LAB_0082be48:
      FUN_008263d0(param_1,param_2,uVar13,uVar3,uVar11,uVar14);
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      lVar21 = *plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082bf2c;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082bf2c:
      lVar21 = *plVar8;
    }
    if (lVar21 == 0) {
      p_Var10 = operator_new(0x40);
      *(int *)(p_Var10 + 0x20) = param_2;
      p_Var18 = p_Var10 + 0x28;
      *(long **)(p_Var10 + 0x10) = plVar4;
      *(undefined8 *)(p_Var10 + 0x30) = local_74;
      *(undefined8 *)(p_Var10 + 0x38) = local_6c;
      *(ulong *)(p_Var10 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var10 = 0;
      *(undefined8 *)(p_Var10 + 8) = 0;
      *plVar8 = (long)p_Var10;
      if (*(long *)*param_1 == 0) {
        p_Var12 = p_Var10;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var12 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var12);
      param_1[2] = param_1[2] + 1;
      uVar15 = 3;
      *(undefined8 *)(p_Var10 + 0x38) = uVar13;
      goto LAB_0082d338;
    }
    break;
  case 4:
    pbVar1 = (byte *)*param_5;
    if ((pbVar1 < (byte *)param_5[1]) && (-1 < (char)*pbVar1)) {
      uVar11 = (ulong)*pbVar1;
      *param_5 = (ulong)(pbVar1 + 1);
      cVar2 = param_4[1];
    }
    else {
      auVar24 = FUN_0080d3e0(param_5);
      uVar11 = auVar24._0_8_;
      if ((auVar24._8_8_ & 1) == 0) {
        return 0;
      }
      cVar2 = param_4[1];
    }
    if (cVar2 != '\0') {
      FUN_00826e90(param_1,param_2,4,param_4[2],uVar11,*(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      lVar21 = *plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082bfc0;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082bfc0:
      lVar21 = *plVar8;
    }
    if (lVar21 == 0) {
      p_Var10 = operator_new(0x40);
      *(int *)(p_Var10 + 0x20) = param_2;
      p_Var18 = p_Var10 + 0x28;
      *(long **)(p_Var10 + 0x10) = plVar4;
      *(undefined8 *)(p_Var10 + 0x30) = local_74;
      *(undefined8 *)(p_Var10 + 0x38) = local_6c;
      *(ulong *)(p_Var10 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var10 = 0;
      *(undefined8 *)(p_Var10 + 8) = 0;
      *plVar8 = (long)p_Var10;
      if (*(long *)*param_1 == 0) {
        p_Var12 = p_Var10;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var12 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var12);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var10 + 0x38) = uVar13;
      uVar15 = 4;
      goto LAB_0082d338;
    }
    break;
  case 5:
    pbVar1 = (byte *)*param_5;
    if (pbVar1 < (byte *)param_5[1]) {
      uVar11 = (ulong)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_0082d06c;
      *param_5 = (ulong)(pbVar1 + 1);
      cVar2 = param_4[1];
    }
    else {
      uVar11 = 0;
LAB_0082d06c:
      uVar11 = FUN_0080d5d0(param_5,uVar11);
      if ((long)uVar11 < 0) {
        return 0;
      }
      cVar2 = param_4[1];
    }
    if (cVar2 != '\0') {
      FUN_00825e70(param_1,param_2,5,param_4[2],uVar11 & 0xffffffff,*(undefined8 *)(param_4 + 0x18))
      ;
      return 1;
    }
    uVar6 = (undefined4)uVar11;
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      lVar21 = *plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082bad4;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082bad4:
      lVar21 = *plVar8;
    }
    if (lVar21 == 0) {
      p_Var10 = operator_new(0x40);
      *(int *)(p_Var10 + 0x20) = param_2;
      p_Var18 = p_Var10 + 0x28;
      *(long **)(p_Var10 + 0x10) = plVar4;
      *(undefined8 *)(p_Var10 + 0x30) = local_74;
      *(undefined8 *)(p_Var10 + 0x38) = local_6c;
      *(ulong *)(p_Var10 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var10 = 0;
      *(undefined8 *)(p_Var10 + 8) = 0;
      *plVar8 = (long)p_Var10;
      if (*(long *)*param_1 == 0) {
        p_Var12 = p_Var10;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var12 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var12);
      param_1[2] = param_1[2] + 1;
      uVar15 = 5;
      *(undefined8 *)(p_Var10 + 0x38) = uVar13;
LAB_0082d648:
      *(undefined2 *)(p_Var10 + 0x30) = uVar15;
      goto LAB_0082d64c;
    }
    goto LAB_0082d5c0;
  case 6:
    puVar16 = (ulong *)*param_5;
    if ((int)param_5[1] - (int)puVar16 < 8) {
      uVar11 = FUN_0080d2f0(param_5,&local_88);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
    }
    else {
      local_88 = *puVar16;
      *param_5 = (ulong)(puVar16 + 1);
    }
    uVar11 = local_88;
    if (param_4[1] != '\0') {
      FUN_00826e90(param_1,param_2,6,param_4[2],local_88,*(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      p_Var18 = (__tree_node_base *)*plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082c190;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082c190:
      p_Var18 = (__tree_node_base *)*plVar8;
    }
    if (p_Var18 != (__tree_node_base *)0x0) goto LAB_0082c528;
    p_Var18 = operator_new(0x40);
    *(int *)(p_Var18 + 0x20) = param_2;
    *(long **)(p_Var18 + 0x10) = plVar4;
    *(undefined8 *)(p_Var18 + 0x30) = local_74;
    *(undefined8 *)(p_Var18 + 0x38) = local_6c;
    *(ulong *)(p_Var18 + 0x28) = CONCAT44(uStack_78,uStack_7c);
    *(undefined8 *)p_Var18 = 0;
    *(undefined8 *)(p_Var18 + 8) = 0;
    *plVar8 = (long)p_Var18;
    if (*(long *)*param_1 == 0) {
      p_Var10 = p_Var18;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var10 = (__tree_node_base *)*plVar8;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var10);
    param_1[2] = param_1[2] + 1;
    *(undefined8 *)(p_Var18 + 0x38) = uVar13;
    uVar15 = 6;
LAB_0082c6b4:
    *(undefined2 *)(p_Var18 + 0x30) = uVar15;
    local_88 = uVar11;
    goto LAB_0082c6b8;
  case 7:
    puVar19 = (undefined4 *)*param_5;
    if ((int)param_5[1] - (int)puVar19 < 4) {
      uVar11 = FUN_0080d200(param_5,&local_88);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
    }
    else {
      local_88 = CONCAT44(local_88._4_4_,*puVar19);
      *param_5 = (ulong)(puVar19 + 1);
    }
    uVar22 = (uint)local_88;
    if (param_4[1] != '\0') {
      FUN_00826930(param_1,param_2,7,param_4[2],local_88 & 0xffffffff,
                   *(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      p_Var18 = (__tree_node_base *)*plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082c210;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082c210:
      p_Var18 = (__tree_node_base *)*plVar8;
    }
    if (p_Var18 == (__tree_node_base *)0x0) {
      p_Var18 = operator_new(0x40);
      *(int *)(p_Var18 + 0x20) = param_2;
      *(long **)(p_Var18 + 0x10) = plVar4;
      *(undefined8 *)(p_Var18 + 0x30) = local_74;
      *(undefined8 *)(p_Var18 + 0x38) = local_6c;
      *(ulong *)(p_Var18 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var18 = 0;
      *(undefined8 *)(p_Var18 + 8) = 0;
      *plVar8 = (long)p_Var18;
      if (*(long *)*param_1 == 0) {
        p_Var10 = p_Var18;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var10 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var10);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var18 + 0x38) = uVar13;
      uVar15 = 7;
LAB_0082d498:
      *(undefined2 *)(p_Var18 + 0x30) = uVar15;
      goto LAB_0082d49c;
    }
    goto LAB_0082d410;
  case 8:
    pbVar1 = (byte *)*param_5;
    if ((pbVar1 < (byte *)param_5[1]) && (-1 < (char)*pbVar1)) {
      uVar11 = (ulong)*pbVar1;
      *param_5 = (ulong)(pbVar1 + 1);
      cVar2 = param_4[1];
    }
    else {
      auVar24 = FUN_0080d3e0(param_5);
      uVar11 = auVar24._0_8_;
      if ((auVar24._8_8_ & 1) == 0) {
        return 0;
      }
      cVar2 = param_4[1];
    }
    if (cVar2 != '\0') {
      FUN_00827ee0(param_1,param_2,8,param_4[2],uVar11 != 0,*(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      p_Var18 = (__tree_node_base *)*plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082bc10;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082bc10:
      p_Var18 = (__tree_node_base *)*plVar8;
    }
    if (p_Var18 == (__tree_node_base *)0x0) {
      p_Var18 = operator_new(0x40);
      *(int *)(p_Var18 + 0x20) = param_2;
      *(long **)(p_Var18 + 0x10) = plVar4;
      *(undefined8 *)(p_Var18 + 0x30) = local_74;
      *(undefined8 *)(p_Var18 + 0x38) = local_6c;
      *(ulong *)(p_Var18 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var18 = 0;
      *(undefined8 *)(p_Var18 + 8) = 0;
      *plVar8 = (long)p_Var18;
      if (*(long *)*param_1 == 0) {
        p_Var10 = p_Var18;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var10 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var10);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var18 + 0x38) = uVar13;
      *(undefined2 *)(p_Var18 + 0x30) = 8;
    }
    else {
      *(undefined8 *)(p_Var18 + 0x38) = uVar13;
    }
    p_Var18[0x32] = (__tree_node_base)((byte)p_Var18[0x32] & 0xf0);
    p_Var18[0x28] = (__tree_node_base)(uVar11 != 0);
    return 1;
  case 9:
    uVar14 = *(undefined8 *)(param_4 + 0x18);
    uVar13 = 9;
    if (param_4[1] == '\0') goto LAB_0082bc3c;
LAB_0082bcc4:
    uVar13 = FUN_00828de0(param_1,param_2,uVar13,uVar14);
    goto LAB_0082bcc8;
  case 10:
    if (param_4[1] == '\0') {
      plVar8 = (long *)FUN_00828f90(param_1,param_2,10,*(undefined8 *)(param_4 + 8),
                                    *(undefined8 *)(param_4 + 0x18));
      iVar7 = (int)param_5[7];
      *(int *)(param_5 + 7) = iVar7 + -1;
    }
    else {
      plVar8 = (long *)FUN_00829560();
      iVar7 = (int)param_5[7];
      *(int *)(param_5 + 7) = iVar7 + -1;
    }
    if (iVar7 < 1) {
      return 0;
    }
    uVar11 = (**(code **)(*plVar8 + 0x58))(plVar8,param_5);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    if ((int)param_5[7] < *(int *)((long)param_5 + 0x3c)) {
      *(int *)(param_5 + 7) = (int)param_5[7] + 1;
    }
    if ((uint)param_5[4] == (param_2 << 3 | 4U)) {
      return 1;
    }
    return 0;
  case 0xb:
    if (param_4[1] == '\0') {
      plVar8 = (long *)FUN_00828f90(param_1,param_2,0xb,*(undefined8 *)(param_4 + 8),
                                    *(undefined8 *)(param_4 + 0x18));
      pcVar17 = (char *)*param_5;
      if (pcVar17 < (char *)param_5[1]) goto LAB_0082c0ac;
LAB_0082c0d0:
      iVar7 = FUN_0080d720(param_5);
      if (iVar7 < 0) {
        return 0;
      }
      uVar11 = FUN_0080ca20(param_5,iVar7);
    }
    else {
      plVar8 = (long *)FUN_00829560();
      pcVar17 = (char *)*param_5;
      if ((char *)param_5[1] <= pcVar17) goto LAB_0082c0d0;
LAB_0082c0ac:
      cVar2 = *pcVar17;
      if (cVar2 < '\0') goto LAB_0082c0d0;
      *param_5 = (ulong)(pcVar17 + 1);
      uVar11 = FUN_0080ca20(param_5,cVar2);
    }
    if ((long)uVar11 < 0) {
      return 0;
    }
    uVar9 = (**(code **)(*plVar8 + 0x58))(plVar8,param_5);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    uVar11 = FUN_0080cb90(param_5,uVar11 & 0xffffffff);
    goto joined_r0x0082c114;
  case 0xc:
    uVar14 = *(undefined8 *)(param_4 + 0x18);
    uVar13 = 0xc;
    if (param_4[1] != '\0') goto LAB_0082bcc4;
LAB_0082bc3c:
    uVar13 = FUN_00828ab0();
LAB_0082bcc8:
    uVar11 = FUN_008160d0(param_5,uVar13);
joined_r0x0082c114:
    if ((uVar11 & 1) == 0) {
      return 0;
    }
    return 1;
  case 0xd:
    pbVar1 = (byte *)*param_5;
    if (pbVar1 < (byte *)param_5[1]) {
      uVar11 = (ulong)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_0082d0ac;
      *param_5 = (ulong)(pbVar1 + 1);
      cVar2 = param_4[1];
    }
    else {
      uVar11 = 0;
LAB_0082d0ac:
      uVar11 = FUN_0080d5d0(param_5,uVar11);
      if ((long)uVar11 < 0) {
        return 0;
      }
      cVar2 = param_4[1];
    }
    if (cVar2 != '\0') {
      FUN_00826930(param_1,param_2,0xd,param_4[2],uVar11 & 0xffffffff,
                   *(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar6 = (undefined4)uVar11;
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      lVar21 = *plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082bd74;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082bd74:
      lVar21 = *plVar8;
    }
    if (lVar21 == 0) {
      p_Var10 = operator_new(0x40);
      *(int *)(p_Var10 + 0x20) = param_2;
      p_Var18 = p_Var10 + 0x28;
      *(long **)(p_Var10 + 0x10) = plVar4;
      *(undefined8 *)(p_Var10 + 0x30) = local_74;
      *(undefined8 *)(p_Var10 + 0x38) = local_6c;
      *(ulong *)(p_Var10 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var10 = 0;
      *(undefined8 *)(p_Var10 + 8) = 0;
      *plVar8 = (long)p_Var10;
      if (*(long *)*param_1 == 0) {
        p_Var12 = p_Var10;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var12 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var12);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var10 + 0x38) = uVar13;
      uVar15 = 0xd;
      goto LAB_0082d648;
    }
    goto LAB_0082d5c0;
  case 0xe:
    pbVar1 = (byte *)*param_5;
    if (pbVar1 < (byte *)param_5[1]) {
      uVar11 = (ulong)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_0082d4dc;
      *param_5 = (ulong)(pbVar1 + 1);
      uVar9 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar11);
    }
    else {
      uVar11 = 0;
LAB_0082d4dc:
      uVar11 = FUN_0080d5d0(param_5,uVar11);
      if ((long)uVar11 < 0) {
        return 0;
      }
      uVar9 = (**(code **)(param_4 + 8))(*(undefined8 *)(param_4 + 0x10),uVar11 & 0xffffffff);
    }
    if ((uVar9 & 1) == 0) {
      (**(code **)(*param_6 + 0x20))(param_6,param_2,uVar11 & 0xffffffff);
      return 1;
    }
    uVar6 = (undefined4)uVar11;
    if (param_4[1] != '\0') {
      FUN_00828850(param_1,param_2,0xe,param_4[2],uVar11 & 0xffffffff,
                   *(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      lVar21 = *plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082d5b8;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082d5b8:
      lVar21 = *plVar8;
    }
    if (lVar21 == 0) {
      p_Var10 = operator_new(0x40);
      *(int *)(p_Var10 + 0x20) = param_2;
      p_Var18 = p_Var10 + 0x28;
      *(long **)(p_Var10 + 0x10) = plVar4;
      *(undefined8 *)(p_Var10 + 0x30) = local_74;
      *(undefined8 *)(p_Var10 + 0x38) = local_6c;
      *(ulong *)(p_Var10 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var10 = 0;
      *(undefined8 *)(p_Var10 + 8) = 0;
      *plVar8 = (long)p_Var10;
      if (*(long *)*param_1 == 0) {
        p_Var12 = p_Var10;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var12 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var12);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var10 + 0x38) = uVar13;
      uVar15 = 0xe;
      goto LAB_0082d648;
    }
LAB_0082d5c0:
    p_Var18 = (__tree_node_base *)(lVar21 + 0x28);
    *(undefined8 *)(lVar21 + 0x38) = uVar13;
LAB_0082d64c:
    p_Var18[10] = (__tree_node_base)((byte)p_Var18[10] & 0xf0);
    *(undefined4 *)p_Var18 = uVar6;
    return 1;
  case 0xf:
    puVar19 = (undefined4 *)*param_5;
    if ((int)param_5[1] - (int)puVar19 < 4) {
      uVar11 = FUN_0080d200(param_5,&local_80);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      cVar2 = param_4[1];
      uVar6 = local_80;
    }
    else {
      uVar6 = *puVar19;
      *param_5 = (ulong)(puVar19 + 1);
      cVar2 = param_4[1];
    }
    local_80 = uVar6;
    if (cVar2 != '\0') {
      FUN_00825e70(param_1,param_2,0xf,param_4[2],uVar6,*(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      p_Var18 = (__tree_node_base *)*plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082d174;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082d174:
      p_Var18 = (__tree_node_base *)*plVar8;
    }
    if (p_Var18 == (__tree_node_base *)0x0) {
      p_Var18 = operator_new(0x40);
      *(int *)(p_Var18 + 0x20) = param_2;
      *(long **)(p_Var18 + 0x10) = plVar4;
      *(undefined8 *)(p_Var18 + 0x30) = local_74;
      *(undefined8 *)(p_Var18 + 0x38) = local_6c;
      *(ulong *)(p_Var18 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var18 = 0;
      *(undefined8 *)(p_Var18 + 8) = 0;
      *plVar8 = (long)p_Var18;
      if (*(long *)*param_1 == 0) {
        p_Var10 = p_Var18;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var10 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var10);
      param_1[2] = param_1[2] + 1;
      uVar15 = 0xf;
      *(undefined8 *)(p_Var18 + 0x38) = uVar13;
      goto LAB_0082d204;
    }
LAB_0082d17c:
    *(undefined8 *)(p_Var18 + 0x38) = uVar13;
LAB_0082d208:
    p_Var18[0x32] = (__tree_node_base)((byte)p_Var18[0x32] & 0xf0);
    *(undefined4 *)(p_Var18 + 0x28) = uVar6;
    return 1;
  case 0x10:
    puVar16 = (ulong *)*param_5;
    if ((int)param_5[1] - (int)puVar16 < 8) {
      uVar11 = FUN_0080d2f0(param_5,&local_80);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      uVar11 = CONCAT44(uStack_7c,local_80);
      cVar2 = param_4[1];
    }
    else {
      uVar11 = *puVar16;
      local_80 = (undefined4)uVar11;
      uStack_7c = (undefined4)(uVar11 >> 0x20);
      *param_5 = (ulong)(puVar16 + 1);
      cVar2 = param_4[1];
    }
    if (cVar2 != '\0') {
      uVar3 = param_4[2];
      uVar14 = *(undefined8 *)(param_4 + 0x18);
      uVar13 = 0x10;
      goto LAB_0082be48;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      lVar21 = *plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082d2a8;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082d2a8:
      lVar21 = *plVar8;
    }
    if (lVar21 == 0) {
      p_Var10 = operator_new(0x40);
      *(int *)(p_Var10 + 0x20) = param_2;
      p_Var18 = p_Var10 + 0x28;
      *(long **)(p_Var10 + 0x10) = plVar4;
      *(undefined8 *)(p_Var10 + 0x30) = local_74;
      *(undefined8 *)(p_Var10 + 0x38) = local_6c;
      *(ulong *)(p_Var10 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var10 = 0;
      *(undefined8 *)(p_Var10 + 8) = 0;
      *plVar8 = (long)p_Var10;
      if (*(long *)*param_1 == 0) {
        p_Var12 = p_Var10;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var12 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var12);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var10 + 0x38) = uVar13;
      uVar15 = 0x10;
      goto LAB_0082d338;
    }
    break;
  case 0x11:
    pbVar1 = (byte *)*param_5;
    if (pbVar1 < (byte *)param_5[1]) {
      uVar11 = (ulong)*pbVar1;
      if ((char)*pbVar1 < '\0') goto LAB_0082d354;
      *param_5 = (ulong)(pbVar1 + 1);
    }
    else {
      uVar11 = 0;
LAB_0082d354:
      uVar11 = FUN_0080d5d0(param_5,uVar11);
      if ((long)uVar11 < 0) {
        return 0;
      }
    }
    uVar22 = -((uint)uVar11 & 1) ^ (uint)uVar11 >> 1;
    if (param_4[1] != '\0') {
      FUN_00825e70(param_1,param_2,0x11,param_4[2],uVar22,*(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      p_Var18 = (__tree_node_base *)*plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082d408;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082d408:
      p_Var18 = (__tree_node_base *)*plVar8;
    }
    local_88._0_4_ = uVar22;
    if (p_Var18 == (__tree_node_base *)0x0) {
      p_Var18 = operator_new(0x40);
      *(int *)(p_Var18 + 0x20) = param_2;
      *(long **)(p_Var18 + 0x10) = plVar4;
      *(undefined8 *)(p_Var18 + 0x30) = local_74;
      *(undefined8 *)(p_Var18 + 0x38) = local_6c;
      *(ulong *)(p_Var18 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var18 = 0;
      *(undefined8 *)(p_Var18 + 8) = 0;
      *plVar8 = (long)p_Var18;
      if (*(long *)*param_1 == 0) {
        p_Var10 = p_Var18;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var10 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var10);
      param_1[2] = param_1[2] + 1;
      uVar15 = 0x11;
      *(undefined8 *)(p_Var18 + 0x38) = uVar13;
      goto LAB_0082d498;
    }
LAB_0082d410:
    *(undefined8 *)(p_Var18 + 0x38) = uVar13;
    uVar22 = (uint)local_88;
LAB_0082d49c:
    p_Var18[0x32] = (__tree_node_base)((byte)p_Var18[0x32] & 0xf0);
    *(uint *)(p_Var18 + 0x28) = uVar22;
    return 1;
  case 0x12:
    pbVar1 = (byte *)*param_5;
    if ((pbVar1 < (byte *)param_5[1]) && (-1 < (char)*pbVar1)) {
      uVar11 = (ulong)*pbVar1;
      *param_5 = (ulong)(pbVar1 + 1);
    }
    else {
      auVar24 = FUN_0080d3e0(param_5);
      uVar11 = auVar24._0_8_;
      if ((auVar24._8_8_ & 1) == 0) {
        return 0;
      }
    }
    uVar11 = -(uVar11 & 1) ^ uVar11 >> 1;
    if (param_4[1] != '\0') {
      FUN_008263d0(param_1,param_2,0x12,param_4[2],uVar11,*(undefined8 *)(param_4 + 0x18));
      return 1;
    }
    uVar13 = *(undefined8 *)(param_4 + 0x18);
    local_6c = 0;
    local_74 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    plVar8 = param_1 + 1;
    plVar23 = (long *)*plVar8;
    if (plVar23 == (long *)0x0) {
      p_Var18 = (__tree_node_base *)*plVar8;
      plVar4 = plVar8;
    }
    else {
      iVar5 = (int)plVar23[4];
      iVar7 = iVar5 - param_2;
      plVar8 = param_1 + 1;
      while( true ) {
        while (plVar4 = plVar23, param_2 < iVar5) {
          plVar23 = (long *)*plVar4;
          plVar8 = plVar4;
          if (plVar23 == (long *)0x0) goto LAB_0082c28c;
          iVar5 = (int)plVar23[4];
          iVar7 = iVar5 - param_2;
        }
        if (iVar7 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar8 = plVar4 + 1;
        plVar23 = (long *)*plVar8;
        if (plVar23 == (long *)0x0) break;
        iVar5 = (int)plVar23[4];
        iVar7 = iVar5 - param_2;
      }
LAB_0082c28c:
      p_Var18 = (__tree_node_base *)*plVar8;
    }
    local_88 = uVar11;
    if (p_Var18 == (__tree_node_base *)0x0) {
      p_Var18 = operator_new(0x40);
      *(int *)(p_Var18 + 0x20) = param_2;
      *(long **)(p_Var18 + 0x10) = plVar4;
      *(undefined8 *)(p_Var18 + 0x30) = local_74;
      *(undefined8 *)(p_Var18 + 0x38) = local_6c;
      *(ulong *)(p_Var18 + 0x28) = CONCAT44(uStack_78,uStack_7c);
      *(undefined8 *)p_Var18 = 0;
      *(undefined8 *)(p_Var18 + 8) = 0;
      *plVar8 = (long)p_Var18;
      if (*(long *)*param_1 == 0) {
        p_Var10 = p_Var18;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var10 = (__tree_node_base *)*plVar8;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var10);
      param_1[2] = param_1[2] + 1;
      uVar15 = 0x12;
      *(undefined8 *)(p_Var18 + 0x38) = uVar13;
      goto LAB_0082c6b4;
    }
LAB_0082c528:
    *(undefined8 *)(p_Var18 + 0x38) = uVar13;
LAB_0082c6b8:
    p_Var18[0x32] = (__tree_node_base)((byte)p_Var18[0x32] & 0xf0);
    *(ulong *)(p_Var18 + 0x28) = local_88;
  default:
    goto LAB_0082d52c;
  }
  p_Var18 = (__tree_node_base *)(lVar21 + 0x28);
  *(undefined8 *)(lVar21 + 0x38) = uVar13;
LAB_0082d33c:
  p_Var18[10] = (__tree_node_base)((byte)p_Var18[10] & 0xf0);
  *(ulong *)p_Var18 = uVar11;
LAB_0082d52c:
  return 1;
}


