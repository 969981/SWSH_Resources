/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f8e20; name: FUN_007f8e20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007f8e20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  void *pvVar5;
  ulong *puVar6;
  long *plVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  undefined8 local_68;
  
  DAT_029f55c0 = operator_new(0x18);
  DAT_029f55c0[1] = 0;
  *DAT_029f55c0 = (long)(DAT_029f55c0 + 1);
  DAT_029f55c0[2] = 0;
  uVar2 = s_google_protobuf__01cda862._8_8_;
  uVar1 = s_google_protobuf__01cda862._0_8_;
  lVar9 = 0;
  while( true ) {
    plVar3 = DAT_029f55c0;
    local_90 = 0;
    local_98 = 0x20;
    *(undefined8 *)((ulong)&local_98 | 1) = uVar1;
    *(undefined8 *)((char *)((ulong)&local_98 | 1) + 8) = uVar2;
    local_88 = (void *)0x0;
    puVar6 = (ulong *)std::string::append((char *)&local_98);
    local_80 = *puVar6;
    local_78 = puVar6[1];
    local_70 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    plVar7 = (long *)FUN_007f94e0(plVar3,&local_b0,&local_80);
    if (*plVar7 == 0) {
      p_Var8 = operator_new(0x38);
      pvVar5 = local_70;
      uVar4 = local_78;
      local_78 = 0;
      local_70 = (void *)0x0;
      *(ulong *)(p_Var8 + 0x20) = local_80;
      *(ulong *)(p_Var8 + 0x28) = uVar4;
      *(void **)(p_Var8 + 0x30) = pvVar5;
      local_80 = 0;
      *(ulong *)(p_Var8 + 0x10) = local_b0;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *plVar7 = (long)p_Var8;
      if (*(long *)*plVar3 != 0) {
        *plVar3 = *(long *)*plVar3;
        p_Var8 = (__tree_node_base *)*plVar7;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)plVar3[1],p_Var8);
      plVar3[2] = plVar3[2] + 1;
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    plVar3 = DAT_029f55c0;
    local_a0 = (void *)0x0;
    uStack_a8 = 0;
    *(undefined1 *)((undefined4 *)((ulong)&local_b0 | 1) + 1) = 0x6f;
    *(undefined4 *)((ulong)&local_b0 | 1) = 0x746f7270;
    local_b0 = 10;
    puVar6 = (ulong *)std::string::append((char *)&local_b0);
    local_98 = *puVar6;
    local_90 = puVar6[1];
    local_88 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    puVar6 = (ulong *)std::string::append((char *)&local_98);
    local_80 = *puVar6;
    local_78 = puVar6[1];
    local_70 = (void *)puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    plVar7 = (long *)FUN_007f94e0(plVar3,&local_68,&local_80);
    if (*plVar7 == 0) {
      p_Var8 = operator_new(0x38);
      pvVar5 = local_70;
      uVar4 = local_78;
      local_78 = 0;
      local_70 = (void *)0x0;
      *(ulong *)(p_Var8 + 0x20) = local_80;
      *(ulong *)(p_Var8 + 0x28) = uVar4;
      *(void **)(p_Var8 + 0x30) = pvVar5;
      local_80 = 0;
      *(undefined8 *)(p_Var8 + 0x10) = local_68;
      *(undefined8 *)p_Var8 = 0;
      *(undefined8 *)(p_Var8 + 8) = 0;
      *plVar7 = (long)p_Var8;
      if (*(long *)*plVar3 != 0) {
        *plVar3 = *(long *)*plVar3;
        p_Var8 = (__tree_node_base *)*plVar7;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                ((__tree_node_base *)plVar3[1],p_Var8);
      plVar3[2] = plVar3[2] + 1;
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (lVar9 == 0x30) break;
    lVar9 = lVar9 + 8;
  }
  FUN_008010b0(&LAB_007f9110);
  return;
}


