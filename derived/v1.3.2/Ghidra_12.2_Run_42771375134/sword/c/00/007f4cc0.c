/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f4cc0; name: FUN_007f4cc0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_007f4cc0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  __tree_node_base **pp_Var4;
  ulong *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  __tree_node_base *p_Var8;
  int iVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  __tree_node_base *p_Var16;
  byte local_110 [16];
  void *local_100;
  ulong local_f8;
  ulong local_f0;
  void *local_e8;
  ulong local_e0;
  ulong local_d8;
  void *local_d0;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  ulong local_b0;
  ulong local_a8;
  void *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  __tree_node_base *local_80;
  __tree_node_base *local_78;
  long local_70;
  
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar11 = 0;
    lVar13 = 0;
    do {
      FUN_007f4cc0(param_1,*(long *)(param_2 + 0x50) + lVar11,
                   *(undefined8 *)(*(long *)(param_3 + 0x60) + lVar13 * 8 + 8));
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0xa8;
    } while (lVar13 < *(int *)(param_2 + 0x48));
  }
  iVar9 = *(int *)(param_2 + 0x58);
  if (0 < iVar9) {
    lVar11 = 0;
    lVar13 = 0;
    do {
      lVar1 = *(long *)(param_2 + 0x60) + lVar11;
      if ((0 < *(int *)(lVar1 + 0x2c)) && (*(int *)(*(long *)(lVar1 + 0x30) + 0x10) != 0)) {
        FUN_007eac10(param_1,*(undefined8 *)(lVar1 + 8),
                     *(undefined8 *)(*(long *)(param_3 + 0x78) + lVar13 * 8 + 8),9,
                     "The first enum value must be zero in proto3.");
        iVar9 = *(int *)(param_2 + 0x58);
      }
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0x38;
    } while (lVar13 < iVar9);
  }
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar11 = 0;
    lVar13 = 0;
    do {
      FUN_007f4a20(param_1,*(long *)(param_2 + 0x30) + lVar11,
                   *(undefined8 *)(*(long *)(param_3 + 0x30) + lVar13 * 8 + 8));
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0x90;
    } while (lVar13 < *(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar11 = 0;
    lVar13 = 0;
    do {
      FUN_007f4a20(param_1,*(long *)(param_2 + 0x80) + lVar11,
                   *(undefined8 *)(*(long *)(param_3 + 0x48) + lVar13 * 8 + 8));
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0x90;
    } while (lVar13 < *(int *)(param_2 + 0x78));
  }
  if (0 < *(int *)(param_2 + 0x68)) {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                 "Extension ranges are not allowed in proto3.");
  }
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x50) != '\0') {
    FUN_007eac10(param_1,*(undefined8 *)(param_2 + 8),param_3,9,
                 "MessageSet is not supported in proto3.");
  }
  local_78 = (__tree_node_base *)0x0;
  local_70 = 0;
  local_80 = (__tree_node_base *)&local_78;
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar13 = 0;
    do {
      pbVar12 = *(byte **)(*(long *)(param_2 + 0x30) + lVar13 * 0x90);
      local_98 = 0;
      local_90 = 0;
      local_88 = (void *)0x0;
      bVar3 = (*pbVar12 & 1) == 0;
      uVar14 = (ulong)(*pbVar12 >> 1);
      if (!bVar3) {
        uVar14 = *(ulong *)(pbVar12 + 8);
      }
      if (uVar14 != 0) {
        uVar14 = 0;
        do {
          pbVar10 = pbVar12 + 1;
          if (!bVar3) {
            pbVar10 = *(byte **)(pbVar12 + 0x10);
          }
          if (pbVar10[uVar14] != 0x5f) {
            std::string::push_back((char)&local_98);
          }
          bVar3 = (*pbVar12 & 1) == 0;
          uVar14 = uVar14 + 1;
          uVar2 = (ulong)(*pbVar12 >> 1);
          if (!bVar3) {
            uVar2 = *(ulong *)(pbVar12 + 8);
          }
        } while (uVar14 < uVar2);
      }
      pp_Var4 = (__tree_node_base **)FUN_007fe740(&local_80,&local_98);
      if ((__tree_node_base *)&local_78 == (__tree_node_base *)pp_Var4) {
        lVar11 = *(long *)(param_2 + 0x30) + lVar13 * 0x90;
        plVar7 = (long *)FUN_007fe850(&local_80,&local_b0,&local_98);
        if (*plVar7 == 0) {
          p_Var16 = operator_new(0x40);
          std::string::string((string *)(p_Var16 + 0x20),(string *)&local_98);
          *(undefined8 *)(p_Var16 + 0x38) = 0;
          *(ulong *)(p_Var16 + 0x10) = local_b0;
          *(undefined8 *)p_Var16 = 0;
          *(undefined8 *)(p_Var16 + 8) = 0;
          *plVar7 = (long)p_Var16;
          if (*(__tree_node_base **)local_80 == (__tree_node_base *)0x0) {
            p_Var8 = p_Var16;
          }
          else {
            p_Var8 = (__tree_node_base *)*plVar7;
            local_80 = *(__tree_node_base **)local_80;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_78,p_Var8);
          local_70 = local_70 + 1;
          *(long *)(p_Var16 + 0x38) = lVar11;
        }
        else {
          *(long *)(*plVar7 + 0x38) = lVar11;
        }
      }
      else {
        uVar15 = *(undefined8 *)(param_2 + 8);
        std::operator+("The JSON camel-case name of field \"",
                       *(string **)(*(long *)(param_2 + 0x30) + lVar13 * 0x90));
        puVar5 = (ulong *)std::string::append((char *)local_110);
        local_f8 = *puVar5;
        local_f0 = puVar5[1];
        local_e8 = (void *)puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar6 = (undefined8 *)FUN_007fe850(&local_80,&local_b0,&local_98);
        p_Var16 = (__tree_node_base *)*puVar6;
        if (p_Var16 == (__tree_node_base *)0x0) {
          p_Var16 = operator_new(0x40);
          std::string::string((string *)(p_Var16 + 0x20),(string *)&local_98);
          *(undefined8 *)(p_Var16 + 0x38) = 0;
          *(ulong *)(p_Var16 + 0x10) = local_b0;
          *(undefined8 *)p_Var16 = 0;
          *(undefined8 *)(p_Var16 + 8) = 0;
          *puVar6 = p_Var16;
          if (*(__tree_node_base **)local_80 == (__tree_node_base *)0x0) {
            p_Var8 = p_Var16;
          }
          else {
            p_Var8 = (__tree_node_base *)*puVar6;
            local_80 = *(__tree_node_base **)local_80;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_78,p_Var8);
          local_70 = local_70 + 1;
        }
        pbVar10 = (byte *)**(undefined8 **)(p_Var16 + 0x38);
        pbVar12 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar12 = pbVar10 + 1;
        }
        puVar5 = (ulong *)std::string::append((char *)&local_f8,(ulong)pbVar12);
        local_e0 = *puVar5;
        local_d8 = puVar5[1];
        local_d0 = (void *)puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar5 = (ulong *)std::string::append((char *)&local_e0);
        local_c8 = *puVar5;
        local_c0 = puVar5[1];
        local_b8 = (void *)puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar5 = (ulong *)std::string::append((char *)&local_c8);
        local_b0 = *puVar5;
        local_a8 = puVar5[1];
        local_a0 = (void *)puVar5[2];
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        FUN_007eaaf0(param_1,uVar15,param_3,9,&local_b0);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        if ((local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        if ((local_e0 & 1) != 0) {
          operator_delete(local_d0);
        }
        if ((local_f8 & 1) != 0) {
          operator_delete(local_e8);
        }
        if ((local_110[0] & 1) != 0) {
          operator_delete(local_100);
        }
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_2 + 0x2c));
  }
  FUN_007f8dd0(&local_80,local_78);
  return;
}


