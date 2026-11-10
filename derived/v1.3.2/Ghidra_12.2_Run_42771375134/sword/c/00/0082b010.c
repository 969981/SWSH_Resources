/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0082b010; name: FUN_0082b010
 */


void FUN_0082b010(long *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long *plVar8;
  __tree_node_base *p_Var9;
  __tree_node_base *p_Var10;
  __tree_node_base *p_Var11;
  long lVar12;
  __tree_node_base *p_Var13;
  __tree_node_base *p_Var14;
  __tree_node_base *p_Var15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  if (param_1 == param_2) {
    return;
  }
  p_Var13 = (__tree_node_base *)(param_1 + 1);
  p_Var6 = *(__tree_node_base **)p_Var13;
  if (p_Var6 == (__tree_node_base *)0x0) {
LAB_0082b080:
    p_Var9 = p_Var13;
  }
  else {
    p_Var10 = p_Var6;
    p_Var9 = p_Var13;
    do {
      if (param_3 <= *(int *)(p_Var10 + 0x20)) {
        p_Var9 = p_Var10;
      }
      p_Var10 = *(__tree_node_base **)(p_Var10 + (ulong)(*(int *)(p_Var10 + 0x20) < param_3) * 8);
    } while (p_Var10 != (__tree_node_base *)0x0);
    if ((p_Var9 == p_Var13) || (param_3 < *(int *)(p_Var9 + 0x20))) goto LAB_0082b080;
  }
  p_Var10 = (__tree_node_base *)(param_2 + 1);
  p_Var11 = *(__tree_node_base **)p_Var10;
  if (p_Var11 == (__tree_node_base *)0x0) {
LAB_0082b0c4:
    p_Var14 = p_Var10;
  }
  else {
    p_Var14 = p_Var10;
    p_Var15 = p_Var11;
    do {
      if (param_3 <= *(int *)(p_Var15 + 0x20)) {
        p_Var14 = p_Var15;
      }
      p_Var15 = *(__tree_node_base **)(p_Var15 + (ulong)(*(int *)(p_Var15 + 0x20) < param_3) * 8);
    } while (p_Var15 != (__tree_node_base *)0x0);
    if ((p_Var14 == p_Var10) || (param_3 < *(int *)(p_Var14 + 0x20))) goto LAB_0082b0c4;
  }
  if ((p_Var9 == p_Var13) && (p_Var14 == p_Var10)) {
    return;
  }
  if ((p_Var9 != p_Var13) && (p_Var14 != p_Var10)) {
    if (param_1[3] == param_2[3]) {
      uVar2 = *(undefined8 *)(p_Var9 + 0x28);
      uVar4 = *(undefined8 *)(p_Var9 + 0x30);
      uVar16 = *(undefined8 *)(p_Var9 + 0x38);
      uVar3 = *(undefined8 *)(p_Var14 + 0x28);
      uVar17 = *(undefined8 *)(p_Var14 + 0x38);
      *(undefined8 *)(p_Var9 + 0x30) = *(undefined8 *)(p_Var14 + 0x30);
      *(undefined8 *)(p_Var9 + 0x38) = uVar17;
      *(undefined8 *)(p_Var9 + 0x28) = uVar3;
      *(undefined8 *)(p_Var14 + 0x30) = uVar4;
      *(undefined8 *)(p_Var14 + 0x38) = uVar16;
      *(undefined8 *)(p_Var14 + 0x28) = uVar2;
      return;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_68 = 0;
    local_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uStack_70 = (long *)&uStack_68;
    FUN_00829da0(&uStack_70,param_3,p_Var14 + 0x28);
    plVar7 = (long *)CONCAT44(local_64,uStack_68);
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)&uStack_68;
      do {
        if (param_3 <= (int)plVar7[4]) {
          plVar8 = plVar7;
        }
        plVar7 = (long *)plVar7[(int)plVar7[4] < param_3];
      } while (plVar7 != (long *)0x0);
      if ((plVar8 != (long *)&uStack_68) && ((int)plVar8[4] <= param_3)) goto LAB_0082b15c;
    }
    plVar8 = (long *)&uStack_68;
LAB_0082b15c:
    FUN_00825830(p_Var14 + 0x28);
    FUN_00829da0(param_2,param_3,p_Var9 + 0x28);
    FUN_00825830(p_Var9 + 0x28);
    FUN_00829da0(param_1,param_3,plVar8 + 5);
    if (CONCAT44(uStack_54,uStack_58) == 0) {
      plVar7 = uStack_70;
      while (plVar7 != (long *)&uStack_68) {
        FUN_00825500(plVar7 + 5);
        plVar8 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar8 = plVar7 + 2;
          if (*(long **)*plVar8 == plVar7) {
            plVar7 = (long *)*plVar8;
          }
          else {
            do {
              lVar12 = *plVar8;
              plVar8 = (long *)(lVar12 + 0x10);
              plVar7 = (long *)*plVar8;
            } while (*plVar7 != lVar12);
          }
        }
        else {
          do {
            plVar7 = plVar8;
            plVar8 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
      }
    }
    FUN_0082f090(&uStack_70,CONCAT44(local_64,uStack_68));
    return;
  }
  if (p_Var9 != p_Var13) {
    if (p_Var14 != p_Var10) {
      return;
    }
    if (param_1[3] == param_2[3]) {
      local_5c = (undefined4)*(undefined8 *)(p_Var9 + 0x38);
      uStack_58 = (undefined4)((ulong)*(undefined8 *)(p_Var9 + 0x38) >> 0x20);
      local_64 = (undefined4)*(undefined8 *)(p_Var9 + 0x30);
      uStack_60 = (undefined4)((ulong)*(undefined8 *)(p_Var9 + 0x30) >> 0x20);
      uStack_70._4_4_ = (undefined4)*(undefined8 *)(p_Var9 + 0x28);
      uStack_68 = (undefined4)((ulong)*(undefined8 *)(p_Var9 + 0x28) >> 0x20);
      if (p_Var11 != (__tree_node_base *)0x0) {
        p_Var6 = (__tree_node_base *)(param_2 + 1);
        iVar5 = *(int *)(p_Var11 + 0x20);
        iVar1 = iVar5 - param_3;
        p_Var10 = p_Var11;
        do {
          if (param_3 < iVar5) {
            p_Var9 = *(__tree_node_base **)p_Var10;
            p_Var6 = p_Var10;
            if (p_Var9 == (__tree_node_base *)0x0) {
              lVar12 = *(long *)p_Var10;
              goto joined_r0x0082b378;
            }
          }
          else {
            if (iVar1 < 0 == SBORROW4(iVar5,param_3)) goto LAB_0082b370;
            p_Var6 = p_Var10 + 8;
            p_Var9 = *(__tree_node_base **)p_Var6;
            if (p_Var9 == (__tree_node_base *)0x0) goto LAB_0082b370;
          }
          iVar5 = *(int *)(p_Var9 + 0x20);
          iVar1 = iVar5 - param_3;
          p_Var10 = p_Var9;
        } while( true );
      }
      lVar12 = *(long *)p_Var10;
      p_Var6 = p_Var10;
      goto joined_r0x0082b378;
    }
    FUN_00829da0(param_2,param_3,p_Var9 + 0x28);
    p_Var6 = *(__tree_node_base **)p_Var13;
    goto joined_r0x0082b530;
  }
  if (param_1[3] == param_2[3]) {
    local_5c = (undefined4)*(undefined8 *)(p_Var14 + 0x38);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(p_Var14 + 0x38) >> 0x20);
    local_64 = (undefined4)*(undefined8 *)(p_Var14 + 0x30);
    uStack_60 = (undefined4)((ulong)*(undefined8 *)(p_Var14 + 0x30) >> 0x20);
    uStack_70._4_4_ = (undefined4)*(undefined8 *)(p_Var14 + 0x28);
    uStack_68 = (undefined4)((ulong)*(undefined8 *)(p_Var14 + 0x28) >> 0x20);
    if (p_Var6 != (__tree_node_base *)0x0) {
      p_Var9 = (__tree_node_base *)(param_1 + 1);
      iVar5 = *(int *)(p_Var6 + 0x20);
      iVar1 = iVar5 - param_3;
      p_Var13 = p_Var6;
      do {
        if (param_3 < iVar5) {
          p_Var6 = *(__tree_node_base **)p_Var13;
          p_Var9 = p_Var13;
          if (p_Var6 == (__tree_node_base *)0x0) {
            lVar12 = *(long *)p_Var13;
            goto joined_r0x0082b30c;
          }
        }
        else {
          if (iVar1 < 0 == SBORROW4(iVar5,param_3)) goto LAB_0082b304;
          p_Var9 = p_Var13 + 8;
          p_Var6 = *(__tree_node_base **)p_Var9;
          if (p_Var6 == (__tree_node_base *)0x0) goto LAB_0082b304;
        }
        iVar5 = *(int *)(p_Var6 + 0x20);
        iVar1 = iVar5 - param_3;
        p_Var13 = p_Var6;
      } while( true );
    }
    lVar12 = *(long *)p_Var13;
    p_Var9 = p_Var13;
    goto joined_r0x0082b30c;
  }
  FUN_00829da0(param_1,param_3,p_Var14 + 0x28);
  p_Var13 = *(__tree_node_base **)p_Var10;
joined_r0x0082b414:
  if (p_Var13 == (__tree_node_base *)0x0) {
    return;
  }
  p_Var6 = p_Var13;
  p_Var9 = p_Var10;
  do {
    if (param_3 <= *(int *)(p_Var6 + 0x20)) {
      p_Var9 = p_Var6;
    }
    p_Var6 = *(__tree_node_base **)(p_Var6 + (ulong)(*(int *)(p_Var6 + 0x20) < param_3) * 8);
  } while (p_Var6 != (__tree_node_base *)0x0);
  if (p_Var9 == p_Var10) {
    return;
  }
  if (param_3 < *(int *)(p_Var9 + 0x20)) {
    return;
  }
  plVar7 = *(long **)(p_Var9 + 8);
  if (*(long **)(p_Var9 + 8) == (long *)0x0) {
    p_Var6 = p_Var9 + 0x10;
    plVar8 = *(long **)p_Var6;
    if ((__tree_node_base *)*plVar8 != p_Var9) {
      do {
        lVar12 = *(long *)p_Var6;
        p_Var6 = (__tree_node_base *)(lVar12 + 0x10);
        plVar8 = *(long **)p_Var6;
      } while (*plVar8 != lVar12);
    }
  }
  else {
    do {
      plVar8 = plVar7;
      plVar7 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
  if ((__tree_node_base *)*param_2 == p_Var9) {
    *param_2 = (long)plVar8;
  }
  param_2[2] = param_2[2] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>(p_Var13,p_Var9);
LAB_0082b5f0:
  operator_delete(p_Var9);
  return;
LAB_0082b370:
  lVar12 = *(long *)p_Var6;
joined_r0x0082b378:
  if (lVar12 == 0) {
    p_Var9 = operator_new(0x40);
    *(int *)(p_Var9 + 0x20) = param_3;
    *(ulong *)(p_Var9 + 0x30) = CONCAT44(uStack_60,local_64);
    *(ulong *)(p_Var9 + 0x38) = CONCAT44(uStack_58,local_5c);
    *(ulong *)(p_Var9 + 0x28) = CONCAT44(uStack_68,uStack_70._4_4_);
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(__tree_node_base **)(p_Var9 + 0x10) = p_Var10;
    *(__tree_node_base **)p_Var6 = p_Var9;
    if (*(long *)*param_2 != 0) {
      *param_2 = *(long *)*param_2;
      p_Var9 = *(__tree_node_base **)p_Var6;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_2[1],p_Var9);
    param_2[2] = param_2[2] + 1;
  }
  p_Var6 = *(__tree_node_base **)p_Var13;
joined_r0x0082b530:
  if (p_Var6 == (__tree_node_base *)0x0) {
    return;
  }
  p_Var10 = p_Var6;
  p_Var9 = p_Var13;
  do {
    if (param_3 <= *(int *)(p_Var10 + 0x20)) {
      p_Var9 = p_Var10;
    }
    p_Var10 = *(__tree_node_base **)(p_Var10 + (ulong)(*(int *)(p_Var10 + 0x20) < param_3) * 8);
  } while (p_Var10 != (__tree_node_base *)0x0);
  if (p_Var9 == p_Var13) {
    return;
  }
  if (param_3 < *(int *)(p_Var9 + 0x20)) {
    return;
  }
  plVar7 = *(long **)(p_Var9 + 8);
  if (*(long **)(p_Var9 + 8) == (long *)0x0) {
    p_Var13 = p_Var9 + 0x10;
    plVar8 = *(long **)p_Var13;
    if ((__tree_node_base *)*plVar8 != p_Var9) {
      do {
        lVar12 = *(long *)p_Var13;
        p_Var13 = (__tree_node_base *)(lVar12 + 0x10);
        plVar8 = *(long **)p_Var13;
      } while (*plVar8 != lVar12);
    }
  }
  else {
    do {
      plVar8 = plVar7;
      plVar7 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
  if ((__tree_node_base *)*param_1 == p_Var9) {
    *param_1 = (long)plVar8;
  }
  param_1[2] = param_1[2] + -1;
  std::__tree_remove<std::__tree_node_base<void*>*>(p_Var6,p_Var9);
  goto LAB_0082b5f0;
LAB_0082b304:
  lVar12 = *(long *)p_Var9;
joined_r0x0082b30c:
  if (lVar12 == 0) {
    p_Var6 = operator_new(0x40);
    *(int *)(p_Var6 + 0x20) = param_3;
    *(ulong *)(p_Var6 + 0x30) = CONCAT44(uStack_60,local_64);
    *(ulong *)(p_Var6 + 0x38) = CONCAT44(uStack_58,local_5c);
    *(ulong *)(p_Var6 + 0x28) = CONCAT44(uStack_68,uStack_70._4_4_);
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(__tree_node_base **)(p_Var6 + 0x10) = p_Var13;
    *(__tree_node_base **)p_Var9 = p_Var6;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      p_Var6 = *(__tree_node_base **)p_Var9;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var6);
    param_1[2] = param_1[2] + 1;
  }
  p_Var13 = *(__tree_node_base **)p_Var10;
  goto joined_r0x0082b414;
}


