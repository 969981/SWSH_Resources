/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01271de0; name: FUN_01271de0
 */


void FUN_01271de0(long *param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  bool bVar2;
  __tree_node_base *p_Var3;
  undefined8 *puVar4;
  __tree_node_base *p_Var5;
  long *plVar6;
  __tree_node_base *p_Var7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  if (param_1[2] != 0) {
    p_Var3 = (__tree_node_base *)*param_1;
    plVar11 = param_1 + 1;
    *param_1 = (long)plVar11;
    *(undefined8 *)(*plVar11 + 0x10) = 0;
    param_1[2] = 0;
    *plVar11 = 0;
    p_Var7 = *(__tree_node_base **)(p_Var3 + 8);
    if (p_Var7 != (__tree_node_base *)0x0) {
      p_Var3 = p_Var7;
    }
joined_r0x01271e30:
    p_Var7 = p_Var3;
    if (p_Var3 != (__tree_node_base *)0x0) {
LAB_01271e34:
      if (param_2 == param_3) {
        p_Var3 = *(__tree_node_base **)(p_Var7 + 0x10);
        while (p_Var5 = p_Var3, p_Var5 != (__tree_node_base *)0x0) {
          p_Var7 = p_Var5;
          p_Var3 = *(__tree_node_base **)(p_Var5 + 0x10);
        }
        FUN_007ae300(param_1,p_Var7);
        return;
      }
      *(undefined2 *)(p_Var7 + 0x1c) = *(undefined2 *)((long)param_2 + 0x1c);
      *(int *)(p_Var7 + 0x20) = (int)param_2[4];
      puVar4 = *(undefined8 **)(p_Var7 + 0x10);
      if (puVar4 == (undefined8 *)0x0) {
        p_Var3 = (__tree_node_base *)0x0;
        plVar6 = (long *)*plVar11;
      }
      else {
        if ((__tree_node_base *)*puVar4 == p_Var7) {
          *puVar4 = 0;
          p_Var3 = *(__tree_node_base **)(p_Var7 + 0x10);
          while (p_Var5 = *(__tree_node_base **)(p_Var3 + 8),
                *(__tree_node_base **)(p_Var3 + 8) != (__tree_node_base *)0x0) {
            do {
              p_Var3 = p_Var5;
              p_Var5 = *(__tree_node_base **)p_Var3;
            } while (*(__tree_node_base **)p_Var3 != (__tree_node_base *)0x0);
          }
        }
        else {
          puVar4[1] = 0;
          p_Var3 = *(__tree_node_base **)(p_Var7 + 0x10);
          p_Var5 = *(__tree_node_base **)p_Var3;
          while (p_Var5 != (__tree_node_base *)0x0) {
            do {
              p_Var3 = p_Var5;
              p_Var5 = *(__tree_node_base **)p_Var3;
            } while (*(__tree_node_base **)p_Var3 != (__tree_node_base *)0x0);
            p_Var5 = *(__tree_node_base **)(p_Var3 + 8);
          }
        }
        plVar6 = (long *)*plVar11;
      }
      if (plVar6 != (long *)0x0) {
        uVar1 = *(ushort *)((long)plVar6 + 0x1c);
        do {
          if (*(ushort *)(p_Var7 + 0x1c) < uVar1) {
            plVar10 = (long *)*plVar6;
            if (plVar10 == (long *)0x0) goto LAB_01271f10;
          }
          else {
            plVar10 = (long *)plVar6[1];
            if (plVar10 == (long *)0x0) {
              plVar10 = plVar6 + 1;
              goto LAB_01271f14;
            }
          }
          uVar1 = *(ushort *)((long)plVar10 + 0x1c);
          plVar6 = plVar10;
        } while( true );
      }
      plVar6 = plVar11;
      plVar10 = plVar11;
      goto LAB_01271f14;
    }
  }
LAB_01271f9c:
  if (param_2 == param_3) {
    return;
  }
  plVar11 = param_1 + 1;
LAB_01271fac:
  p_Var3 = (__tree_node_base *)FUN_017cd750(0x28);
  uVar8 = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined8 *)(p_Var3 + 0x1c) = uVar8;
  plVar6 = (long *)*plVar11;
  if (plVar6 != (long *)0x0) {
    do {
      if (((uint)uVar8 & 0xffff) < (uint)*(ushort *)((long)plVar6 + 0x1c)) {
        plVar10 = (long *)*plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_01272000;
      }
      else {
        plVar10 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          plVar10 = plVar6 + 1;
          goto LAB_01272004;
        }
      }
      plVar6 = plVar10;
    } while( true );
  }
  plVar6 = plVar11;
  plVar10 = plVar11;
  goto LAB_01272004;
LAB_01271f10:
  plVar10 = plVar6;
LAB_01271f14:
  *(undefined8 *)p_Var7 = 0;
  *(undefined8 *)(p_Var7 + 8) = 0;
  *(long **)(p_Var7 + 0x10) = plVar6;
  *plVar10 = (long)p_Var7;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    p_Var7 = (__tree_node_base *)*plVar10;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var7);
  param_1[2] = param_1[2] + 1;
  plVar6 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    plVar6 = param_2 + 2;
    bVar2 = *(long **)*plVar6 == param_2;
    param_2 = (long *)*plVar6;
    if (bVar2) goto joined_r0x01271e30;
    do {
      lVar9 = *plVar6;
      plVar6 = (long *)(lVar9 + 0x10);
      param_2 = (long *)*plVar6;
    } while (*param_2 != lVar9);
  }
  else {
    do {
      param_2 = plVar6;
      plVar6 = (long *)*param_2;
    } while ((long *)*param_2 != (long *)0x0);
  }
  p_Var7 = p_Var3;
  if (p_Var3 == (__tree_node_base *)0x0) goto LAB_01271f9c;
  goto LAB_01271e34;
LAB_01272000:
  plVar10 = plVar6;
LAB_01272004:
  *(undefined8 *)p_Var3 = 0;
  *(undefined8 *)(p_Var3 + 8) = 0;
  *(long **)(p_Var3 + 0x10) = plVar6;
  *plVar10 = (long)p_Var3;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    p_Var3 = (__tree_node_base *)*plVar10;
  }
  std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
            ((__tree_node_base *)param_1[1],p_Var3);
  param_1[2] = param_1[2] + 1;
  plVar6 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    plVar6 = param_2 + 2;
    bVar2 = *(long **)*plVar6 != param_2;
    param_2 = (long *)*plVar6;
    if (bVar2) {
      do {
        lVar9 = *plVar6;
        plVar6 = (long *)(lVar9 + 0x10);
        param_2 = (long *)*plVar6;
      } while (*param_2 != lVar9);
    }
  }
  else {
    do {
      param_2 = plVar6;
      plVar6 = (long *)*param_2;
    } while ((long *)*param_2 != (long *)0x0);
  }
  if (param_2 == param_3) {
    return;
  }
  goto LAB_01271fac;
}


