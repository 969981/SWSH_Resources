/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00829da0; name: FUN_00829da0
 */


void FUN_00829da0(long *param_1,int param_2,__tree_node_base *param_3)

{
  int iVar1;
  __tree_node_base _Var2;
  __tree_node_base _Var3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  string *this;
  __tree_node_base *p_Var8;
  __tree_node_base *p_Var9;
  long lVar10;
  code *pcVar11;
  __tree_node_base *p_Var12;
  int *piVar13;
  long lVar14;
  undefined4 uVar15;
  string *psVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  
  if (param_3[9] != (__tree_node_base)0x0) {
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    plVar7 = param_1 + 1;
    plVar21 = (long *)*plVar7;
    if (plVar21 == (long *)0x0) {
      plVar20 = plVar7;
    }
    else {
      plVar7 = param_1 + 1;
      iVar5 = (int)plVar21[4];
      iVar1 = iVar5 - param_2;
      while( true ) {
        while (plVar20 = plVar21, param_2 < iVar5) {
          plVar21 = (long *)*plVar20;
          plVar7 = plVar20;
          if (plVar21 == (long *)0x0) {
            p_Var12 = (__tree_node_base *)*plVar20;
            goto joined_r0x00829e44;
          }
          iVar5 = (int)plVar21[4];
          iVar1 = iVar5 - param_2;
        }
        if (iVar1 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar7 = plVar20 + 1;
        plVar21 = (long *)*plVar7;
        if (plVar21 == (long *)0x0) break;
        iVar5 = (int)plVar21[4];
        iVar1 = iVar5 - param_2;
      }
    }
    p_Var12 = (__tree_node_base *)*plVar7;
joined_r0x00829e44:
    if (p_Var12 == (__tree_node_base *)0x0) {
      p_Var12 = operator_new(0x40);
      *(int *)(p_Var12 + 0x20) = param_2;
      *(undefined8 *)(p_Var12 + 0x30) = 0;
      *(undefined8 *)(p_Var12 + 0x38) = 0;
      *(undefined8 *)(p_Var12 + 0x28) = 0;
      *(undefined8 *)p_Var12 = 0;
      *(undefined8 *)(p_Var12 + 8) = 0;
      *(long **)(p_Var12 + 0x10) = plVar20;
      *plVar7 = (long)p_Var12;
      if (*(long *)*param_1 == 0) {
        p_Var8 = p_Var12;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var8 = (__tree_node_base *)*plVar7;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var8);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var12 + 0x38) = uVar17;
      _Var2 = param_3[8];
      p_Var12[0x30] = _Var2;
      p_Var12[0x33] = param_3[0xb];
      bVar4 = true;
      p_Var12[0x31] = (__tree_node_base)0x1;
    }
    else {
      *(undefined8 *)(p_Var12 + 0x38) = uVar17;
      _Var2 = param_3[8];
      bVar4 = false;
    }
    p_Var12 = p_Var12 + 0x28;
    switch(*(undefined4 *)(PTR_DAT_02717150 + (ulong)(byte)_Var2 * 4)) {
    case 1:
    case 8:
      if (bVar4) {
        lVar14 = param_1[3];
        if (lVar14 == 0) {
          puVar6 = operator_new(0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        else {
          puVar6 = (undefined8 *)FUN_0080efb0(lVar14,0,0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          plVar7 = (long *)FUN_0080efb0(lVar14,0,8);
          puVar6[1] = plVar7;
          *plVar7 = lVar14;
          FUN_0080eeb0(lVar14,puVar6,PTR_LAB_02717158);
        }
        *(undefined8 **)p_Var12 = puVar6;
      }
      else {
        puVar6 = *(undefined8 **)p_Var12;
      }
      FUN_0081a4e0(puVar6,*(undefined8 *)param_3);
      return;
    case 2:
      if (bVar4) {
        lVar14 = param_1[3];
        if (lVar14 == 0) {
          puVar6 = operator_new(0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        else {
          puVar6 = (undefined8 *)FUN_0080efb0(lVar14,0,0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          plVar7 = (long *)FUN_0080efb0(lVar14,0,8);
          puVar6[1] = plVar7;
          *plVar7 = lVar14;
          FUN_0080eeb0(lVar14,puVar6,PTR_LAB_02717160);
        }
        *(undefined8 **)p_Var12 = puVar6;
      }
      else {
        puVar6 = *(undefined8 **)p_Var12;
      }
      FUN_0081afb0(puVar6,*(undefined8 *)param_3);
      return;
    case 3:
      if (bVar4) {
        lVar14 = param_1[3];
        if (lVar14 == 0) {
          puVar6 = operator_new(0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        else {
          puVar6 = (undefined8 *)FUN_0080efb0(lVar14,0,0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          plVar7 = (long *)FUN_0080efb0(lVar14,0,8);
          puVar6[1] = plVar7;
          *plVar7 = lVar14;
          FUN_0080eeb0(lVar14,puVar6,PTR_LAB_02717168);
        }
        *(undefined8 **)p_Var12 = puVar6;
      }
      else {
        puVar6 = *(undefined8 **)p_Var12;
      }
      FUN_0081aa50(puVar6,*(undefined8 *)param_3);
      return;
    case 4:
      if (bVar4) {
        lVar14 = param_1[3];
        if (lVar14 == 0) {
          puVar6 = operator_new(0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        else {
          puVar6 = (undefined8 *)FUN_0080efb0(lVar14,0,0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          plVar7 = (long *)FUN_0080efb0(lVar14,0,8);
          puVar6[1] = plVar7;
          *plVar7 = lVar14;
          FUN_0080eeb0(lVar14,puVar6,PTR_LAB_02717170);
        }
        *(undefined8 **)p_Var12 = puVar6;
      }
      else {
        puVar6 = *(undefined8 **)p_Var12;
      }
      FUN_0081b510(puVar6,*(undefined8 *)param_3);
      return;
    case 5:
      if (bVar4) {
        lVar14 = param_1[3];
        if (lVar14 == 0) {
          puVar6 = operator_new(0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        else {
          puVar6 = (undefined8 *)FUN_0080efb0(lVar14,0,0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          plVar7 = (long *)FUN_0080efb0(lVar14,0,8);
          puVar6[1] = plVar7;
          *plVar7 = lVar14;
          FUN_0080eeb0(lVar14,puVar6,PTR_LAB_02717180);
        }
        *(undefined8 **)p_Var12 = puVar6;
      }
      else {
        puVar6 = *(undefined8 **)p_Var12;
      }
      FUN_0081bff0(puVar6,*(undefined8 *)param_3);
      return;
    case 6:
      if (bVar4) {
        lVar14 = param_1[3];
        if (lVar14 == 0) {
          puVar6 = operator_new(0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        else {
          puVar6 = (undefined8 *)FUN_0080efb0(lVar14,0,0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          plVar7 = (long *)FUN_0080efb0(lVar14,0,8);
          puVar6[1] = plVar7;
          *plVar7 = lVar14;
          FUN_0080eeb0(lVar14,puVar6,PTR_LAB_02717178);
        }
        *(undefined8 **)p_Var12 = puVar6;
      }
      else {
        puVar6 = *(undefined8 **)p_Var12;
      }
      FUN_0081ba80(puVar6,*(undefined8 *)param_3);
      return;
    case 7:
      if (bVar4) {
        lVar14 = param_1[3];
        if (lVar14 == 0) {
          puVar6 = operator_new(0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        else {
          puVar6 = (undefined8 *)FUN_0080efb0(lVar14,0,0x10);
          *puVar6 = 0;
          puVar6[1] = 0;
          plVar7 = (long *)FUN_0080efb0(lVar14,0,8);
          puVar6[1] = plVar7;
          *plVar7 = lVar14;
          FUN_0080eeb0(lVar14,puVar6,PTR_LAB_02717188);
        }
        *(undefined8 **)p_Var12 = puVar6;
      }
      else {
        puVar6 = *(undefined8 **)p_Var12;
      }
      FUN_0081c540(puVar6,*(undefined8 *)param_3);
      return;
    case 9:
      if (bVar4) {
        lVar14 = param_1[3];
        if (lVar14 == 0) {
          plVar7 = operator_new(0x18);
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = 0;
        }
        else {
          plVar7 = (long *)FUN_0080efb0(lVar14,0,0x18);
          plVar7[1] = 0;
          plVar7[2] = 0;
          *plVar7 = lVar14;
          FUN_0080eeb0(lVar14,plVar7,PTR_LAB_02717190);
        }
        *(long **)p_Var12 = plVar7;
      }
      else {
        plVar7 = *(long **)p_Var12;
      }
      FUN_0081cef0(plVar7,*(undefined8 *)param_3);
      return;
    case 10:
      goto switchD_00829fbc_caseD_a;
    default:
      return;
    }
  }
  if (((byte)param_3[10] & 1) != 0) {
    return;
  }
  _Var2 = param_3[8];
  switch(*(undefined4 *)(PTR_DAT_02717150 + (ulong)(byte)_Var2 * 4)) {
  case 1:
    uVar15 = *(undefined4 *)param_3;
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      iVar5 = (int)plVar7[4];
      iVar1 = iVar5 - param_2;
      plVar21 = param_1 + 1;
      while( true ) {
        while (plVar20 = plVar7, param_2 < iVar5) {
          plVar7 = (long *)*plVar20;
          plVar21 = plVar20;
          if (plVar7 == (long *)0x0) goto LAB_0082a698;
          iVar5 = (int)plVar7[4];
          iVar1 = iVar5 - param_2;
        }
        if (iVar1 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar21 = plVar20 + 1;
        plVar7 = (long *)*plVar21;
        if (plVar7 == (long *)0x0) break;
        iVar5 = (int)plVar7[4];
        iVar1 = iVar5 - param_2;
      }
      goto LAB_0082a69c;
    }
    goto LAB_0082a6b0;
  case 2:
    uVar17 = *(undefined8 *)param_3;
    uVar18 = *(undefined8 *)(param_3 + 0x10);
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      iVar5 = (int)plVar7[4];
      iVar1 = iVar5 - param_2;
      plVar21 = param_1 + 1;
      while( true ) {
        while (plVar20 = plVar7, param_2 < iVar5) {
          plVar7 = (long *)*plVar20;
          plVar21 = plVar20;
          if (plVar7 == (long *)0x0) goto LAB_0082a4c4;
          iVar5 = (int)plVar7[4];
          iVar1 = iVar5 - param_2;
        }
        if (iVar1 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar21 = plVar20 + 1;
        plVar7 = (long *)*plVar21;
        if (plVar7 == (long *)0x0) break;
        iVar5 = (int)plVar7[4];
        iVar1 = iVar5 - param_2;
      }
      goto LAB_0082a4c8;
    }
    goto LAB_0082a4dc;
  case 3:
    uVar15 = *(undefined4 *)param_3;
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      iVar5 = (int)plVar7[4];
      iVar1 = iVar5 - param_2;
      plVar21 = param_1 + 1;
      while( true ) {
        while (plVar20 = plVar7, param_2 < iVar5) {
          plVar7 = (long *)*plVar20;
          plVar21 = plVar20;
          if (plVar7 == (long *)0x0) goto LAB_0082a698;
          iVar5 = (int)plVar7[4];
          iVar1 = iVar5 - param_2;
        }
        if (iVar1 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar21 = plVar20 + 1;
        plVar7 = (long *)*plVar21;
        if (plVar7 == (long *)0x0) break;
        iVar5 = (int)plVar7[4];
        iVar1 = iVar5 - param_2;
      }
      goto LAB_0082a69c;
    }
    goto LAB_0082a6b0;
  case 4:
    uVar17 = *(undefined8 *)param_3;
    uVar18 = *(undefined8 *)(param_3 + 0x10);
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      iVar5 = (int)plVar7[4];
      iVar1 = iVar5 - param_2;
      plVar21 = param_1 + 1;
      while( true ) {
        while (plVar20 = plVar7, param_2 < iVar5) {
          plVar7 = (long *)*plVar20;
          plVar21 = plVar20;
          if (plVar7 == (long *)0x0) goto LAB_0082a4c4;
          iVar5 = (int)plVar7[4];
          iVar1 = iVar5 - param_2;
        }
        if (iVar1 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar21 = plVar20 + 1;
        plVar7 = (long *)*plVar21;
        if (plVar7 == (long *)0x0) break;
        iVar5 = (int)plVar7[4];
        iVar1 = iVar5 - param_2;
      }
      goto LAB_0082a4c8;
    }
    goto LAB_0082a4dc;
  case 5:
    uVar17 = *(undefined8 *)param_3;
    uVar18 = *(undefined8 *)(param_3 + 0x10);
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      iVar5 = (int)plVar7[4];
      iVar1 = iVar5 - param_2;
      plVar21 = param_1 + 1;
      while( true ) {
        while (plVar20 = plVar7, param_2 < iVar5) {
          plVar7 = (long *)*plVar20;
          plVar21 = plVar20;
          if (plVar7 == (long *)0x0) goto LAB_0082a4c4;
          iVar5 = (int)plVar7[4];
          iVar1 = iVar5 - param_2;
        }
        if (iVar1 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar21 = plVar20 + 1;
        plVar7 = (long *)*plVar21;
        if (plVar7 == (long *)0x0) break;
        iVar5 = (int)plVar7[4];
        iVar1 = iVar5 - param_2;
      }
      goto LAB_0082a4c8;
    }
LAB_0082a4dc:
    plVar21 = param_1 + 1;
    p_Var12 = (__tree_node_base *)*plVar21;
    plVar20 = plVar21;
joined_r0x0082a4cc:
    if (p_Var12 == (__tree_node_base *)0x0) {
      p_Var12 = operator_new(0x40);
      *(int *)(p_Var12 + 0x20) = param_2;
      *(long **)(p_Var12 + 0x10) = plVar20;
      *(undefined8 *)(p_Var12 + 0x30) = 0;
      *(undefined8 *)(p_Var12 + 0x38) = 0;
      *(undefined8 *)(p_Var12 + 0x28) = 0;
      *(undefined8 *)p_Var12 = 0;
      *(undefined8 *)(p_Var12 + 8) = 0;
      *plVar21 = (long)p_Var12;
      if (*(long *)*param_1 == 0) {
        p_Var8 = p_Var12;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var8 = (__tree_node_base *)*plVar21;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var8);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var12 + 0x38) = uVar18;
      p_Var12[0x30] = _Var2;
      p_Var12[0x31] = (__tree_node_base)0x0;
    }
    else {
      *(undefined8 *)(p_Var12 + 0x38) = uVar18;
    }
    p_Var12[0x32] = (__tree_node_base)((byte)p_Var12[0x32] & 0xf0);
    *(undefined8 *)(p_Var12 + 0x28) = uVar17;
    break;
  case 6:
    uVar15 = *(undefined4 *)param_3;
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      iVar5 = (int)plVar7[4];
      iVar1 = iVar5 - param_2;
      plVar21 = param_1 + 1;
      while( true ) {
        while (plVar20 = plVar7, param_2 < iVar5) {
          plVar7 = (long *)*plVar20;
          plVar21 = plVar20;
          if (plVar7 == (long *)0x0) goto LAB_0082a698;
          iVar5 = (int)plVar7[4];
          iVar1 = iVar5 - param_2;
        }
        if (iVar1 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar21 = plVar20 + 1;
        plVar7 = (long *)*plVar21;
        if (plVar7 == (long *)0x0) break;
        iVar5 = (int)plVar7[4];
        iVar1 = iVar5 - param_2;
      }
      goto LAB_0082a69c;
    }
    goto LAB_0082a6b0;
  case 7:
    _Var3 = *param_3;
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    plVar7 = param_1 + 1;
    plVar21 = (long *)*plVar7;
    if (plVar21 == (long *)0x0) {
      p_Var12 = (__tree_node_base *)*plVar7;
      plVar20 = plVar7;
      if (p_Var12 != (__tree_node_base *)0x0) goto LAB_0082a620;
LAB_0082aaac:
      p_Var12 = operator_new(0x40);
      *(int *)(p_Var12 + 0x20) = param_2;
      *(long **)(p_Var12 + 0x10) = plVar20;
      *(undefined8 *)(p_Var12 + 0x30) = 0;
      *(undefined8 *)(p_Var12 + 0x38) = 0;
      *(undefined8 *)(p_Var12 + 0x28) = 0;
      *(undefined8 *)p_Var12 = 0;
      *(undefined8 *)(p_Var12 + 8) = 0;
      *plVar7 = (long)p_Var12;
      if (*(long *)*param_1 == 0) {
        p_Var8 = p_Var12;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var8 = (__tree_node_base *)*plVar7;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var8);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var12 + 0x38) = uVar17;
      p_Var12[0x30] = _Var2;
      p_Var12[0x31] = (__tree_node_base)0x0;
    }
    else {
      iVar5 = (int)plVar21[4];
      iVar1 = iVar5 - param_2;
      plVar7 = param_1 + 1;
      while( true ) {
        while (plVar20 = plVar21, param_2 < iVar5) {
          plVar21 = (long *)*plVar20;
          plVar7 = plVar20;
          if (plVar21 == (long *)0x0) goto LAB_0082a618;
          iVar5 = (int)plVar21[4];
          iVar1 = iVar5 - param_2;
        }
        if (iVar1 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar7 = plVar20 + 1;
        plVar21 = (long *)*plVar7;
        if (plVar21 == (long *)0x0) break;
        iVar5 = (int)plVar21[4];
        iVar1 = iVar5 - param_2;
      }
LAB_0082a618:
      p_Var12 = (__tree_node_base *)*plVar7;
      if (p_Var12 == (__tree_node_base *)0x0) goto LAB_0082aaac;
LAB_0082a620:
      *(undefined8 *)(p_Var12 + 0x38) = uVar17;
    }
    p_Var12[0x32] = (__tree_node_base)((byte)p_Var12[0x32] & 0xf0);
    p_Var12[0x28] = _Var3;
    break;
  case 8:
    uVar15 = *(undefined4 *)param_3;
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      iVar5 = (int)plVar7[4];
      iVar1 = iVar5 - param_2;
      plVar21 = param_1 + 1;
      while( true ) {
        while (plVar20 = plVar7, param_2 < iVar5) {
          plVar7 = (long *)*plVar20;
          plVar21 = plVar20;
          if (plVar7 == (long *)0x0) goto LAB_0082a698;
          iVar5 = (int)plVar7[4];
          iVar1 = iVar5 - param_2;
        }
        if (iVar1 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar21 = plVar20 + 1;
        plVar7 = (long *)*plVar21;
        if (plVar7 == (long *)0x0) break;
        iVar5 = (int)plVar7[4];
        iVar1 = iVar5 - param_2;
      }
      goto LAB_0082a69c;
    }
LAB_0082a6b0:
    plVar21 = param_1 + 1;
    p_Var12 = (__tree_node_base *)*plVar21;
    plVar20 = plVar21;
joined_r0x0082a6b8:
    if (p_Var12 == (__tree_node_base *)0x0) {
      p_Var12 = operator_new(0x40);
      *(int *)(p_Var12 + 0x20) = param_2;
      *(long **)(p_Var12 + 0x10) = plVar20;
      *(undefined8 *)(p_Var12 + 0x30) = 0;
      *(undefined8 *)(p_Var12 + 0x38) = 0;
      *(undefined8 *)(p_Var12 + 0x28) = 0;
      *(undefined8 *)p_Var12 = 0;
      *(undefined8 *)(p_Var12 + 8) = 0;
      *plVar21 = (long)p_Var12;
      if (*(long *)*param_1 == 0) {
        p_Var8 = p_Var12;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var8 = (__tree_node_base *)*plVar21;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var8);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var12 + 0x38) = uVar17;
      p_Var12[0x30] = _Var2;
      p_Var12[0x31] = (__tree_node_base)0x0;
    }
    else {
      *(undefined8 *)(p_Var12 + 0x38) = uVar17;
    }
    p_Var12[0x32] = (__tree_node_base)((byte)p_Var12[0x32] & 0xf0);
    *(undefined4 *)(p_Var12 + 0x28) = uVar15;
    break;
  case 9:
    psVar16 = *(string **)param_3;
    this = (string *)
           FUN_00828ab0(param_1,param_2,(ulong)(byte)_Var2,*(undefined8 *)(param_3 + 0x10));
    std::string::operator=(this,psVar16);
    break;
  case 10:
    uVar17 = *(undefined8 *)(param_3 + 0x10);
    plVar7 = param_1 + 1;
    plVar21 = (long *)*plVar7;
    if (plVar21 == (long *)0x0) {
      lVar14 = *plVar7;
      plVar20 = plVar7;
      if (lVar14 != 0) goto LAB_0082a7a4;
LAB_0082ab08:
      p_Var8 = operator_new(0x40);
      *(int *)(p_Var8 + 0x20) = param_2;
      p_Var12 = p_Var8 + 0x28;
      *(long **)(p_Var8 + 0x10) = plVar20;
      *(undefined8 *)(p_Var8 + 0x30) = 0;
      *(undefined8 *)(p_Var8 + 0x38) = 0;
      *(undefined8 *)(p_Var8 + 0x28) = 0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *plVar7 = (long)p_Var8;
      if (*(long *)*param_1 == 0) {
        p_Var9 = p_Var8;
      }
      else {
        *param_1 = *(long *)*param_1;
        p_Var9 = (__tree_node_base *)*plVar7;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)param_1[1],p_Var9);
      param_1[2] = param_1[2] + 1;
      *(undefined8 *)(p_Var8 + 0x38) = uVar17;
      p_Var8[0x30] = param_3[8];
      p_Var8[0x33] = param_3[0xb];
      p_Var8[0x31] = (__tree_node_base)0x0;
      if (((byte)param_3[10] >> 4 & 1) == 0) {
        p_Var8[0x32] = (__tree_node_base)((byte)p_Var8[0x32] & 0xf);
        plVar7 = (long *)(**(code **)(**(long **)param_3 + 0x20))(*(long **)param_3,param_1[3]);
        *(long **)(p_Var8 + 0x28) = plVar7;
LAB_0082abc8:
        uVar17 = *(undefined8 *)param_3;
        pcVar11 = *(code **)(*plVar7 + 0x50);
      }
      else {
        p_Var8[0x32] = (__tree_node_base)((byte)p_Var8[0x32] & 0xf | 0x10);
        plVar7 = (long *)(**(code **)(**(long **)param_3 + 0x10))(*(long **)param_3,param_1[3]);
        *(long **)(p_Var8 + 0x28) = plVar7;
LAB_0082abf8:
        uVar17 = *(undefined8 *)param_3;
        pcVar11 = *(code **)(*plVar7 + 0x60);
      }
    }
    else {
      iVar5 = (int)plVar21[4];
      iVar1 = iVar5 - param_2;
      plVar7 = param_1 + 1;
      while( true ) {
        while (plVar20 = plVar21, param_2 < iVar5) {
          plVar21 = (long *)*plVar20;
          plVar7 = plVar20;
          if (plVar21 == (long *)0x0) goto LAB_0082a79c;
          iVar5 = (int)plVar21[4];
          iVar1 = iVar5 - param_2;
        }
        if (iVar1 < 0 == SBORROW4(iVar5,param_2)) break;
        plVar7 = plVar20 + 1;
        plVar21 = (long *)*plVar7;
        if (plVar21 == (long *)0x0) break;
        iVar5 = (int)plVar21[4];
        iVar1 = iVar5 - param_2;
      }
LAB_0082a79c:
      lVar14 = *plVar7;
      if (lVar14 == 0) goto LAB_0082ab08;
LAB_0082a7a4:
      *(undefined8 *)(lVar14 + 0x38) = uVar17;
      p_Var12 = (__tree_node_base *)(lVar14 + 0x28);
      if (((byte)param_3[10] >> 4 & 1) == 0) {
        if ((*(byte *)(lVar14 + 0x32) >> 4 & 1) == 0) {
          plVar7 = *(long **)p_Var12;
        }
        else {
          plVar7 = (long *)(**(code **)(**(long **)p_Var12 + 0x20))
                                     (*(long **)p_Var12,*(undefined8 *)param_3);
        }
        goto LAB_0082abc8;
      }
      if ((*(byte *)(lVar14 + 0x32) >> 4 & 1) != 0) {
        plVar7 = *(long **)p_Var12;
        goto LAB_0082abf8;
      }
      plVar7 = *(long **)p_Var12;
      uVar17 = (**(code **)(**(long **)param_3 + 0x18))(*(long **)param_3,plVar7);
      pcVar11 = *(code **)(*plVar7 + 0x50);
    }
    (*pcVar11)(plVar7,uVar17);
    p_Var12[10] = (__tree_node_base)((byte)p_Var12[10] & 0xf0);
  }
  return;
switchD_00829fbc_caseD_a:
  if (bVar4) {
    lVar14 = param_1[3];
    if (lVar14 == 0) {
      plVar7 = operator_new(0x18);
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = 0;
    }
    else {
      plVar7 = (long *)FUN_0080efb0(lVar14,0,0x18);
      plVar7[1] = 0;
      plVar7[2] = 0;
      *plVar7 = lVar14;
      FUN_0080eeb0(lVar14,plVar7,PTR_LAB_02717198);
    }
    *(long **)p_Var12 = plVar7;
  }
  lVar14 = *(long *)param_3;
  if (*(int *)(lVar14 + 8) < 1) {
    return;
  }
  lVar19 = 0;
  do {
    plVar7 = *(long **)(*(long *)(lVar14 + 0x10) + lVar19 * 8 + 8);
    lVar10 = *(long *)p_Var12;
    piVar13 = *(int **)(lVar10 + 0x10);
    if (piVar13 == (int *)0x0) {
LAB_0082a9e4:
      plVar21 = (long *)(**(code **)(*plVar7 + 0x20))(plVar7,param_1[3]);
      FUN_00829780(*(undefined8 *)p_Var12,plVar21);
    }
    else {
      iVar1 = *(int *)(lVar10 + 8);
      if (*piVar13 <= iVar1) goto LAB_0082a9e4;
      *(int *)(lVar10 + 8) = iVar1 + 1;
      plVar21 = *(long **)(piVar13 + (long)iVar1 * 2 + 2);
      if (plVar21 == (long *)0x0) goto LAB_0082a9e4;
    }
    (**(code **)(*plVar21 + 0x50))(plVar21,plVar7);
    lVar19 = lVar19 + 1;
    if (*(int *)(lVar14 + 8) <= lVar19) {
      return;
    }
  } while( true );
LAB_0082a4c4:
  plVar20 = plVar21;
LAB_0082a4c8:
  p_Var12 = (__tree_node_base *)*plVar21;
  goto joined_r0x0082a4cc;
LAB_0082a698:
  plVar20 = plVar21;
LAB_0082a69c:
  p_Var12 = (__tree_node_base *)*plVar21;
  goto joined_r0x0082a6b8;
}


