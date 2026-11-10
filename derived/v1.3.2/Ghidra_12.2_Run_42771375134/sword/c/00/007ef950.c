/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ef950; name: FUN_007ef950
 */


void FUN_007ef950(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  long *plVar6;
  __tree_node_base *p_Var7;
  __tree_node_base **pp_Var8;
  ulong *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  byte local_a8;
  undefined7 uStack_a7;
  void *local_98;
  ulong local_90;
  ulong local_88;
  char *local_80;
  __tree_node_base *local_78;
  __tree_node_base *local_70;
  long local_68;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    return;
  }
  local_70 = (__tree_node_base *)0x0;
  local_68 = 0;
  local_78 = (__tree_node_base *)&local_70;
  local_80 = operator_new(0x20);
  local_90 = 0x21;
  local_88 = 0x1e;
  *(ulong *)(local_80 + 0x16) =
       CONCAT62(s_google_protobuf_MessageOptions_01d06b1a._24_6_,
                s_google_protobuf_MessageOptions_01d06b1a._22_2_);
  uVar2 = s_google_protobuf_MessageOptions_01d06b1a._0_8_;
  uVar1 = CONCAT26(s_google_protobuf_MessageOptions_01d06b1a._22_2_,
                   s_google_protobuf_MessageOptions_01d06b1a._16_6_);
  *(undefined8 *)(local_80 + 8) = s_google_protobuf_MessageOptions_01d06b1a._8_8_;
  *(undefined8 *)(local_80 + 0x10) = uVar1;
  *(undefined8 *)local_80 = uVar2;
  local_80[0x1e] = '\0';
  plVar6 = (long *)FUN_007f94e0(&local_78,&local_a8,&local_90);
  if (*plVar6 == 0) {
    p_Var7 = operator_new(0x38);
    pcVar5 = local_80;
    uVar4 = local_88;
    local_88 = 0;
    local_80 = (char *)0x0;
    *(ulong *)(p_Var7 + 0x20) = local_90;
    *(ulong *)(p_Var7 + 0x28) = uVar4;
    *(char **)(p_Var7 + 0x30) = pcVar5;
    local_90 = 0;
    *(ulong *)(p_Var7 + 0x10) = CONCAT71(uStack_a7,local_a8);
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *plVar6 = (long)p_Var7;
    if (*(__tree_node_base **)local_78 != (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)*plVar6;
      local_78 = *(__tree_node_base **)local_78;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var7);
    local_68 = local_68 + 1;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  local_80 = operator_new(0x20);
  uVar3 = s_google_protobuf_FileOptions_01cf97ae._16_8_;
  uVar2 = s_google_protobuf_FileOptions_01cf97ae._8_8_;
  uVar1 = s_google_protobuf_FileOptions_01cf97ae._0_8_;
  local_90 = 0x21;
  local_88 = 0x1b;
  local_80[0x1a] = 's';
  *(undefined8 *)local_80 = uVar1;
  local_80[0x18] = 'o';
  local_80[0x19] = 'n';
  *(undefined8 *)(local_80 + 8) = uVar2;
  *(undefined8 *)(local_80 + 0x10) = uVar3;
  local_80[0x1b] = '\0';
  plVar6 = (long *)FUN_007f94e0(&local_78,&local_a8,&local_90);
  if (*plVar6 == 0) {
    p_Var7 = operator_new(0x38);
    pcVar5 = local_80;
    uVar4 = local_88;
    local_88 = 0;
    local_80 = (char *)0x0;
    *(ulong *)(p_Var7 + 0x20) = local_90;
    *(ulong *)(p_Var7 + 0x28) = uVar4;
    *(char **)(p_Var7 + 0x30) = pcVar5;
    local_90 = 0;
    *(ulong *)(p_Var7 + 0x10) = CONCAT71(uStack_a7,local_a8);
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *plVar6 = (long)p_Var7;
    if (*(__tree_node_base **)local_78 != (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)*plVar6;
      local_78 = *(__tree_node_base **)local_78;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var7);
    local_68 = local_68 + 1;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  local_80 = operator_new(0x20);
  local_90 = 0x21;
  local_88 = 0x1c;
  local_80[0x18] = 'i';
  uVar2 = s_google_protobuf_FieldOptions_01cf2d37._16_8_;
  uVar1 = s_google_protobuf_FieldOptions_01cf2d37._0_8_;
  local_80[0x19] = 'o';
  local_80[0x1a] = 'n';
  local_80[0x1b] = 's';
  *(undefined8 *)(local_80 + 8) = s_google_protobuf_FieldOptions_01cf2d37._8_8_;
  *(undefined8 *)(local_80 + 0x10) = uVar2;
  *(undefined8 *)local_80 = uVar1;
  local_80[0x1c] = '\0';
  plVar6 = (long *)FUN_007f94e0(&local_78,&local_a8,&local_90);
  if (*plVar6 == 0) {
    p_Var7 = operator_new(0x38);
    pcVar5 = local_80;
    uVar4 = local_88;
    local_88 = 0;
    local_80 = (char *)0x0;
    *(ulong *)(p_Var7 + 0x20) = local_90;
    *(ulong *)(p_Var7 + 0x28) = uVar4;
    *(char **)(p_Var7 + 0x30) = pcVar5;
    local_90 = 0;
    *(ulong *)(p_Var7 + 0x10) = CONCAT71(uStack_a7,local_a8);
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *plVar6 = (long)p_Var7;
    if (*(__tree_node_base **)local_78 != (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)*plVar6;
      local_78 = *(__tree_node_base **)local_78;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var7);
    local_68 = local_68 + 1;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  local_80 = operator_new(0x20);
  local_90 = 0x21;
  local_80[0x1a] = 's';
  uVar2 = s_google_protobuf_EnumOptions_01d301a5._16_8_;
  uVar1 = s_google_protobuf_EnumOptions_01d301a5._0_8_;
  local_88 = 0x1b;
  *(undefined8 *)(local_80 + 8) = s_google_protobuf_EnumOptions_01d301a5._8_8_;
  *(undefined8 *)(local_80 + 0x10) = uVar2;
  *(undefined8 *)local_80 = uVar1;
  local_80[0x18] = 'o';
  local_80[0x19] = 'n';
  local_80[0x1b] = '\0';
  plVar6 = (long *)FUN_007f94e0(&local_78,&local_a8,&local_90);
  if (*plVar6 == 0) {
    p_Var7 = operator_new(0x38);
    pcVar5 = local_80;
    uVar4 = local_88;
    local_88 = 0;
    local_80 = (char *)0x0;
    *(ulong *)(p_Var7 + 0x20) = local_90;
    *(ulong *)(p_Var7 + 0x28) = uVar4;
    *(char **)(p_Var7 + 0x30) = pcVar5;
    local_90 = 0;
    *(ulong *)(p_Var7 + 0x10) = CONCAT71(uStack_a7,local_a8);
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *plVar6 = (long)p_Var7;
    if (*(__tree_node_base **)local_78 != (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)*plVar6;
      local_78 = *(__tree_node_base **)local_78;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var7);
    local_68 = local_68 + 1;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  local_80 = operator_new(0x30);
  local_90 = 0x31;
  local_80[0x20] = '\0';
  uVar1 = s_google_protobuf_EnumValueOptions_01ce14f4._24_8_;
  local_88 = 0x20;
  *(undefined8 *)(local_80 + 0x10) = s_google_protobuf_EnumValueOptions_01ce14f4._16_8_;
  *(undefined8 *)(local_80 + 0x18) = uVar1;
  uVar1 = s_google_protobuf_EnumValueOptions_01ce14f4._8_8_;
  *(undefined8 *)local_80 = s_google_protobuf_EnumValueOptions_01ce14f4._0_8_;
  *(undefined8 *)(local_80 + 8) = uVar1;
  plVar6 = (long *)FUN_007f94e0(&local_78,&local_a8,&local_90);
  if (*plVar6 == 0) {
    p_Var7 = operator_new(0x38);
    pcVar5 = local_80;
    uVar4 = local_88;
    local_88 = 0;
    local_80 = (char *)0x0;
    *(ulong *)(p_Var7 + 0x20) = local_90;
    *(ulong *)(p_Var7 + 0x28) = uVar4;
    *(char **)(p_Var7 + 0x30) = pcVar5;
    local_90 = 0;
    *(ulong *)(p_Var7 + 0x10) = CONCAT71(uStack_a7,local_a8);
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *plVar6 = (long)p_Var7;
    if (*(__tree_node_base **)local_78 != (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)*plVar6;
      local_78 = *(__tree_node_base **)local_78;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var7);
    local_68 = local_68 + 1;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  local_80 = operator_new(0x20);
  local_90 = 0x21;
  local_88 = 0x1e;
  *(ulong *)(local_80 + 0x16) =
       CONCAT62(s_google_protobuf_ServiceOptions_01d2c75b._24_6_,
                s_google_protobuf_ServiceOptions_01d2c75b._22_2_);
  uVar2 = s_google_protobuf_ServiceOptions_01d2c75b._0_8_;
  uVar1 = CONCAT26(s_google_protobuf_ServiceOptions_01d2c75b._22_2_,
                   s_google_protobuf_ServiceOptions_01d2c75b._16_6_);
  *(undefined8 *)(local_80 + 8) = s_google_protobuf_ServiceOptions_01d2c75b._8_8_;
  *(undefined8 *)(local_80 + 0x10) = uVar1;
  *(undefined8 *)local_80 = uVar2;
  local_80[0x1e] = '\0';
  plVar6 = (long *)FUN_007f94e0(&local_78,&local_a8,&local_90);
  if (*plVar6 == 0) {
    p_Var7 = operator_new(0x38);
    pcVar5 = local_80;
    uVar4 = local_88;
    local_88 = 0;
    local_80 = (char *)0x0;
    *(ulong *)(p_Var7 + 0x20) = local_90;
    *(ulong *)(p_Var7 + 0x28) = uVar4;
    *(char **)(p_Var7 + 0x30) = pcVar5;
    local_90 = 0;
    *(ulong *)(p_Var7 + 0x10) = CONCAT71(uStack_a7,local_a8);
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *plVar6 = (long)p_Var7;
    if (*(__tree_node_base **)local_78 != (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)*plVar6;
      local_78 = *(__tree_node_base **)local_78;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var7);
    local_68 = local_68 + 1;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  local_80 = operator_new(0x20);
  local_90 = 0x21;
  local_88 = 0x1d;
  *(ulong *)(local_80 + 0x15) =
       CONCAT53(s_google_protobuf_MethodOptions_01ce4e5b._24_5_,
                s_google_protobuf_MethodOptions_01ce4e5b._21_3_);
  uVar2 = s_google_protobuf_MethodOptions_01ce4e5b._0_8_;
  uVar1 = CONCAT35(s_google_protobuf_MethodOptions_01ce4e5b._21_3_,
                   s_google_protobuf_MethodOptions_01ce4e5b._16_5_);
  *(undefined8 *)(local_80 + 8) = s_google_protobuf_MethodOptions_01ce4e5b._8_8_;
  *(undefined8 *)(local_80 + 0x10) = uVar1;
  *(undefined8 *)local_80 = uVar2;
  local_80[0x1d] = '\0';
  plVar6 = (long *)FUN_007f94e0(&local_78,&local_a8,&local_90);
  if (*plVar6 == 0) {
    p_Var7 = operator_new(0x38);
    pcVar5 = local_80;
    uVar4 = local_88;
    local_88 = 0;
    local_80 = (char *)0x0;
    *(ulong *)(p_Var7 + 0x20) = local_90;
    *(ulong *)(p_Var7 + 0x28) = uVar4;
    *(char **)(p_Var7 + 0x30) = pcVar5;
    local_90 = 0;
    *(ulong *)(p_Var7 + 0x10) = CONCAT71(uStack_a7,local_a8);
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *plVar6 = (long)p_Var7;
    if (*(__tree_node_base **)local_78 != (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)*plVar6;
      local_78 = *(__tree_node_base **)local_78;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var7);
    local_68 = local_68 + 1;
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  local_80 = operator_new(0x20);
  local_90 = 0x21;
  local_88 = 0x1d;
  *(ulong *)(local_80 + 0x15) =
       CONCAT53(s_google_protobuf_StreamOptions_01d250b4._24_5_,
                s_google_protobuf_StreamOptions_01d250b4._21_3_);
  uVar2 = s_google_protobuf_StreamOptions_01d250b4._0_8_;
  uVar1 = CONCAT35(s_google_protobuf_StreamOptions_01d250b4._21_3_,
                   s_google_protobuf_StreamOptions_01d250b4._16_5_);
  *(undefined8 *)(local_80 + 8) = s_google_protobuf_StreamOptions_01d250b4._8_8_;
  *(undefined8 *)(local_80 + 0x10) = uVar1;
  *(undefined8 *)local_80 = uVar2;
  local_80[0x1d] = '\0';
  plVar6 = (long *)FUN_007f94e0(&local_78,&local_a8,&local_90);
  if (*plVar6 == 0) {
    p_Var7 = operator_new(0x38);
    pcVar5 = local_80;
    uVar4 = local_88;
    local_88 = 0;
    local_80 = (char *)0x0;
    *(ulong *)(p_Var7 + 0x20) = local_90;
    *(ulong *)(p_Var7 + 0x28) = uVar4;
    *(char **)(p_Var7 + 0x30) = pcVar5;
    local_90 = 0;
    *(ulong *)(p_Var7 + 0x10) = CONCAT71(uStack_a7,local_a8);
    *(undefined8 *)p_Var7 = 0;
    *(undefined8 *)(p_Var7 + 8) = 0;
    *plVar6 = (long)p_Var7;
    if (*(__tree_node_base **)local_78 != (__tree_node_base *)0x0) {
      p_Var7 = (__tree_node_base *)*plVar6;
      local_78 = *(__tree_node_base **)local_78;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var7);
    local_68 = local_68 + 1;
    if ((local_90 & 1) == 0) goto LAB_007efcac;
LAB_007f003c:
    operator_delete(local_80);
    plVar6 = *(long **)(param_1 + 0x78);
    if (plVar6 == (long *)(param_1 + 0x80)) goto LAB_007f01b0;
  }
  else {
    if ((local_90 & 1) != 0) goto LAB_007f003c;
LAB_007efcac:
    plVar6 = *(long **)(param_1 + 0x78);
    if (plVar6 == (long *)(param_1 + 0x80)) goto LAB_007f01b0;
  }
LAB_007f006c:
  do {
    puVar10 = (undefined8 *)plVar6[4];
    if (*(int *)(puVar10 + 0xf) < 1) {
      if (*(int *)(puVar10 + 0xf) == 0) goto LAB_007f00e4;
    }
    else {
      lVar14 = 0;
      lVar13 = 0x50;
      do {
        pp_Var8 = (__tree_node_base **)
                  FUN_007f97c0(&local_78,*(undefined8 *)(*(long *)(puVar10[0x11] + lVar13) + 8));
        if ((__tree_node_base *)&local_70 != (__tree_node_base *)pp_Var8) {
          puVar10 = (undefined8 *)plVar6[4];
          if ((int)lVar14 != *(int *)(puVar10 + 0xf)) goto LAB_007f0154;
          goto LAB_007f00e4;
        }
        puVar10 = (undefined8 *)plVar6[4];
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x90;
      } while (lVar14 < *(int *)(puVar10 + 0xf));
      if ((int)lVar14 == *(int *)(puVar10 + 0xf)) {
LAB_007f00e4:
        std::operator+("Import ",(string *)*puVar10);
        puVar9 = (ulong *)std::string::append((char *)&local_a8);
        local_90 = *puVar9;
        local_88 = puVar9[1];
        local_80 = (char *)puVar9[2];
        puVar9[1] = 0;
        puVar9[2] = 0;
        *puVar9 = 0;
        if ((local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
        FUN_007eb150(param_1,*(undefined8 *)plVar6[4],param_2,9,&local_90);
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
    }
LAB_007f0154:
    plVar11 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar11 = plVar6 + 2;
      plVar12 = (long *)*plVar11;
      if ((long *)*plVar12 == plVar6) {
        plVar6 = plVar12;
        if (plVar12 == (long *)(param_1 + 0x80)) break;
        goto LAB_007f006c;
      }
      do {
        lVar14 = *plVar11;
        plVar11 = (long *)(lVar14 + 0x10);
        plVar6 = (long *)*plVar11;
      } while (*plVar6 != lVar14);
    }
    else {
      do {
        plVar6 = plVar11;
        plVar11 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  } while (plVar6 != (long *)(param_1 + 0x80));
LAB_007f01b0:
  FUN_007f7520(&local_78,local_70);
  return;
}


