/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f34270; name: FUN_00f34270
 */


undefined1  [16] FUN_00f34270(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  __tree_node_base *p_Var3;
  undefined8 uVar4;
  ulong uVar5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  plVar7 = param_1 + 1;
  plVar8 = (long *)*plVar7;
  if (plVar8 == (long *)0x0) {
    plVar9 = plVar7;
  }
  else {
    uVar5 = plVar8[4];
    plVar7 = param_1 + 1;
    while( true ) {
      while (plVar1 = plVar8, plVar9 = plVar1, *param_2 < uVar5) {
        plVar8 = (long *)*plVar1;
        if (plVar8 == (long *)0x0) {
          p_Var6 = (__tree_node_base *)*plVar1;
          goto joined_r0x00f34300;
        }
        uVar5 = plVar8[4];
        plVar7 = plVar1;
      }
      if (*param_2 <= uVar5) break;
      plVar7 = plVar1 + 1;
      plVar8 = (long *)*plVar7;
      if (plVar8 == (long *)0x0) break;
      uVar5 = plVar8[4];
    }
  }
  p_Var6 = (__tree_node_base *)*plVar7;
  plVar1 = plVar7;
joined_r0x00f34300:
  if (p_Var6 == (__tree_node_base *)0x0) {
    p_Var6 = (__tree_node_base *)
             (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x48,8);
    if (p_Var6 == (__tree_node_base *)0x0) {
      (**(code **)(*(long *)param_1[2] + 0xb8))();
    }
    lVar10 = param_1[2];
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    uVar4 = *(undefined8 *)*param_4;
    *(undefined8 *)(p_Var6 + 0x38) = 0;
    *(undefined8 *)(p_Var6 + 0x40) = 0;
    *(undefined8 *)(p_Var6 + 0x28) = 0;
    *(undefined8 *)(p_Var6 + 0x30) = 0;
    *(undefined8 *)(p_Var6 + 0x20) = uVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *(long **)(p_Var6 + 0x10) = plVar9;
    *plVar1 = (long)p_Var6;
    if (*(long *)*param_1 == 0) {
      p_Var3 = p_Var6;
    }
    else {
      *param_1 = *(long *)*param_1;
      p_Var3 = (__tree_node_base *)*plVar1;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],p_Var3);
    uVar4 = 1;
    param_1[5] = param_1[5] + 1;
  }
  else {
    uVar4 = 0;
  }
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = p_Var6;
  return auVar11;
}


