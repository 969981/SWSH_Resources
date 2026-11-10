/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ef4d0; name: FUN_007ef4d0
 */


void FUN_007ef4d0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  __tree_node_base **pp_Var7;
  __tree_node_base *p_Var8;
  __tree_node_base *p_Var9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  byte local_b0;
  undefined7 uStack_af;
  void *local_a0;
  ulong local_98;
  ulong local_90;
  void *local_88;
  undefined8 *local_80;
  __tree_node_base *local_78;
  __tree_node_base *local_70;
  long local_68;
  
  local_70 = (__tree_node_base *)0x0;
  local_68 = 0;
  local_78 = (__tree_node_base *)&local_70;
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x50) + lVar11);
      std::string::string((string *)&local_98,(string *)*puVar1);
      local_80 = puVar1;
      puVar5 = (undefined8 *)FUN_007fe980(&local_78,&local_b0,&local_98);
      p_Var9 = (__tree_node_base *)*puVar5;
      if (p_Var9 == (__tree_node_base *)0x0) {
        p_Var9 = operator_new(0x40);
        pvVar4 = local_88;
        uVar3 = local_98;
        *(undefined8 *)p_Var9 = 0;
        *(undefined8 *)(p_Var9 + 8) = 0;
        local_98 = 0;
        *(ulong *)(p_Var9 + 0x20) = uVar3;
        *(ulong *)(p_Var9 + 0x28) = local_90;
        local_90 = 0;
        local_88 = (void *)0x0;
        *(void **)(p_Var9 + 0x30) = pvVar4;
        *(undefined8 **)(p_Var9 + 0x38) = local_80;
        *(ulong *)(p_Var9 + 0x10) = CONCAT71(uStack_af,local_b0);
        *puVar5 = p_Var9;
        if (*(__tree_node_base **)local_78 == (__tree_node_base *)0x0) {
          p_Var8 = p_Var9;
        }
        else {
          p_Var8 = (__tree_node_base *)*puVar5;
          local_78 = *(__tree_node_base **)local_78;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_70,p_Var8);
        local_68 = local_68 + 1;
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if ((!bVar2) &&
         ((*(char *)(*(long *)(*(long *)(p_Var9 + 0x38) + 0x20) + 0x53) != '\0' ||
          (*(char *)(puVar1[4] + 0x53) != '\0')))) {
        uVar10 = *(undefined8 *)(param_2 + 8);
        std::operator+("Expanded map entry type ",(string *)*puVar1);
        puVar6 = (ulong *)std::string::append((char *)&local_b0);
        local_98 = *puVar6;
        local_90 = puVar6[1];
        local_88 = (void *)puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        FUN_007eaaf0(param_1,uVar10,param_3,0,&local_98);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
      FUN_007ef4d0(param_1,*(long *)(param_2 + 0x50) + lVar11,
                   *(undefined8 *)(*(long *)(param_3 + 0x60) + lVar12 * 8 + 8));
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0xa8;
    } while (lVar12 < *(int *)(param_2 + 0x48));
  }
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      pp_Var7 = (__tree_node_base **)
                FUN_007feab0(&local_78,*(undefined8 *)(*(long *)(param_2 + 0x30) + lVar11));
      if (((__tree_node_base *)&local_70 != (__tree_node_base *)pp_Var7) &&
         (*(char *)(*(long *)(pp_Var7[7] + 0x20) + 0x53) != '\0')) {
        uVar10 = *(undefined8 *)(param_2 + 8);
        std::operator+("Expanded map entry type ",*(string **)pp_Var7[7]);
        puVar6 = (ulong *)std::string::append((char *)&local_b0);
        local_98 = *puVar6;
        local_90 = puVar6[1];
        local_88 = (void *)puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        FUN_007eaaf0(param_1,uVar10,param_3,0,&local_98);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x90;
    } while (lVar12 < *(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x58)) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      pp_Var7 = (__tree_node_base **)
                FUN_007feab0(&local_78,*(undefined8 *)(*(long *)(param_2 + 0x60) + lVar11));
      if (((__tree_node_base *)&local_70 != (__tree_node_base *)pp_Var7) &&
         (*(char *)(*(long *)(pp_Var7[7] + 0x20) + 0x53) != '\0')) {
        uVar10 = *(undefined8 *)(param_2 + 8);
        std::operator+("Expanded map entry type ",*(string **)pp_Var7[7]);
        puVar6 = (ulong *)std::string::append((char *)&local_b0);
        local_98 = *puVar6;
        local_90 = puVar6[1];
        local_88 = (void *)puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        FUN_007eaaf0(param_1,uVar10,param_3,0,&local_98);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x38;
    } while (lVar12 < *(int *)(param_2 + 0x58));
  }
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar11 = 0;
    lVar12 = 0;
    do {
      pp_Var7 = (__tree_node_base **)
                FUN_007feab0(&local_78,*(undefined8 *)(*(long *)(param_2 + 0x40) + lVar11));
      if (((__tree_node_base *)&local_70 != (__tree_node_base *)pp_Var7) &&
         (*(char *)(*(long *)(pp_Var7[7] + 0x20) + 0x53) != '\0')) {
        uVar10 = *(undefined8 *)(param_2 + 8);
        std::operator+("Expanded map entry type ",*(string **)pp_Var7[7]);
        puVar6 = (ulong *)std::string::append((char *)&local_b0);
        local_98 = *puVar6;
        local_90 = puVar6[1];
        local_88 = (void *)puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        FUN_007eaaf0(param_1,uVar10,param_3,0,&local_98);
        if ((local_98 & 1) != 0) {
          operator_delete(local_88);
        }
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x30;
    } while (lVar12 < *(int *)(param_2 + 0x38));
  }
  FUN_007f91a0(&local_78,local_70);
  return;
}


