/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00527cc0; name: FUN_00527cc0
 */


int FUN_00527cc0(long param_1,ulong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                ,long *param_6,undefined8 *param_7)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  __tree_node_base *p_Var6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  undefined8 local_60;
  long local_58;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 == (long *)0x0) {
    return -1;
  }
  local_58 = 0;
  plVar11 = (long *)(param_1 + 0xf8);
  plVar9 = (long *)*plVar11;
  if (plVar9 == (long *)0x0) {
LAB_00527d38:
    iVar3 = (**(code **)(*plVar4 + 0x1f0))(plVar4,param_3,param_4,0,0,param_5,param_2,&local_58);
    lVar10 = local_58;
    if (iVar3 < 0) {
      return iVar3;
    }
    plVar4 = (long *)*plVar11;
    if (plVar4 == (long *)0x0) {
      lVar8 = *plVar11;
      plVar4 = plVar11;
    }
    else {
      plVar11 = (long *)(param_1 + 0xf8);
      bVar2 = param_2 <= (ulong)plVar4[4];
      if (!bVar2 || plVar4[4] == param_2) goto LAB_00527da4;
LAB_00527d94:
      plVar11 = plVar4;
      if ((long *)*plVar4 != (long *)0x0) {
        plVar9 = (long *)*plVar4;
LAB_00527d84:
        plVar4 = plVar9;
        bVar2 = param_2 <= (ulong)plVar4[4];
        if (!bVar2 || plVar4[4] == param_2) {
LAB_00527da4:
          if (!bVar2) goto code_r0x00527da8;
          goto LAB_00527db4;
        }
        goto LAB_00527d94;
      }
      lVar8 = *plVar4;
    }
joined_r0x00527dbc:
    if (lVar8 == 0) {
      p_Var6 = (__tree_node_base *)
               FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x30,"../src/GPU/GPUMemoryAllocator.h",
                            0x1b8,0);
      *(ulong *)(p_Var6 + 0x20) = param_2;
      *(long *)(p_Var6 + 0x28) = lVar10;
      *(long **)(p_Var6 + 0x10) = plVar4;
      *(undefined8 *)p_Var6 = 0;
      *(undefined8 *)(p_Var6 + 8) = 0;
      *plVar11 = (long)p_Var6;
      if (**(long **)(param_1 + 0xf0) != 0) {
        *(long *)(param_1 + 0xf0) = **(long **)(param_1 + 0xf0);
        p_Var6 = (__tree_node_base *)*plVar11;
      }
      std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                (*(__tree_node_base **)(param_1 + 0xf8),p_Var6);
      *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 1;
      lVar10 = *(long *)(param_1 + 0x110);
    }
    else {
      lVar10 = *(long *)(param_1 + 0x110);
    }
  }
  else {
    plVar7 = plVar11;
    do {
      if ((ulong)plVar9[4] >= param_2) {
        plVar7 = plVar9;
      }
      plVar9 = (long *)plVar9[(ulong)plVar9[4] < param_2];
    } while (plVar9 != (long *)0x0);
    if ((plVar7 == plVar11) || (param_2 < (ulong)plVar7[4])) goto LAB_00527d38;
    local_58 = plVar7[5];
    lVar10 = *(long *)(param_1 + 0x110);
  }
  if (lVar10 != 0) {
    lVar8 = param_1 + 0x110;
    do {
      bVar2 = *(ulong *)(lVar10 + 0x20) < param_2;
      if (!bVar2) {
        lVar8 = lVar10;
      }
      lVar10 = *(long *)(lVar10 + (ulong)bVar2 * 8);
    } while (lVar10 != 0);
    if ((lVar8 != param_1 + 0x110) && (*(ulong *)(lVar8 + 0x20) <= param_2)) {
      plVar4 = *(long **)(lVar8 + 0x28);
      goto joined_r0x00528010;
    }
  }
  plVar11 = (long *)(param_1 + 0x110);
  FUN_00550fe0(auStack_a8,"CRenderTexture::m_mapDeviceTextureRenderTexture[");
  FUN_00552650(auStack_b8,param_2 & 0xffffffff);
  FUN_005516e0(auStack_98,auStack_a8,auStack_b8);
  FUN_005528d0(auStack_88,auStack_98,&DAT_01d43d7d);
  uVar5 = FUN_00546bd0(param_5,0);
  FUN_005528d0(auStack_78,auStack_88,uVar5);
  FUN_005528d0(auStack_68,auStack_78,&DAT_01cffc78);
  FUN_00551380(auStack_78);
  FUN_00551380(auStack_88);
  FUN_00551380(auStack_98);
  FUN_00551380(auStack_b8);
  FUN_00551380(auStack_a8);
  puVar1 = PTR_PTR_02713988;
  plVar4 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x128,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",0x8da1,0);
  FUN_0059aa70(plVar4,local_60);
  iVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,*(undefined8 *)(param_1 + 0x18),local_58);
  if (iVar3 < 0) {
    FUN_00551380(auStack_68);
    return iVar3;
  }
  plVar9 = (long *)*plVar11;
  if (plVar9 == (long *)0x0) {
    lVar10 = *plVar11;
    plVar9 = plVar11;
  }
  else {
    plVar11 = (long *)(param_1 + 0x110);
    bVar2 = param_2 <= (ulong)plVar9[4];
    if (!bVar2 || plVar9[4] == param_2) goto LAB_00527fdc;
LAB_00527fcc:
    plVar11 = plVar9;
    if ((long *)*plVar9 != (long *)0x0) {
      plVar7 = (long *)*plVar9;
LAB_00527fbc:
      plVar9 = plVar7;
      bVar2 = param_2 <= (ulong)plVar9[4];
      if (!bVar2 || plVar9[4] == param_2) {
LAB_00527fdc:
        if (!bVar2) goto code_r0x00527fe0;
        goto LAB_00527fec;
      }
      goto LAB_00527fcc;
    }
    lVar10 = *plVar9;
  }
joined_r0x00527ff4:
  if (lVar10 == 0) {
    p_Var6 = (__tree_node_base *)
             FUN_005b9a50(*(undefined8 *)puVar1,0x30,"../src/GPU/GPUMemoryAllocator.h",0x1b8,0);
    *(ulong *)(p_Var6 + 0x20) = param_2;
    *(long **)(p_Var6 + 0x28) = plVar4;
    *(long **)(p_Var6 + 0x10) = plVar9;
    *(undefined8 *)p_Var6 = 0;
    *(undefined8 *)(p_Var6 + 8) = 0;
    *plVar11 = (long)p_Var6;
    if (**(long **)(param_1 + 0x108) != 0) {
      *(long *)(param_1 + 0x108) = **(long **)(param_1 + 0x108);
      p_Var6 = (__tree_node_base *)*plVar11;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x110),p_Var6);
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
  }
  FUN_00551380(auStack_68);
joined_r0x00528010:
  if (param_6 != (long *)0x0) {
    *param_6 = local_58;
  }
  if (param_7 != (undefined8 *)0x0) {
    *param_7 = plVar4;
  }
  return 0;
code_r0x00527da8:
  plVar11 = plVar4 + 1;
  plVar9 = (long *)*plVar11;
  if ((long *)*plVar11 == (long *)0x0) {
LAB_00527db4:
    lVar8 = *plVar11;
    goto joined_r0x00527dbc;
  }
  goto LAB_00527d84;
code_r0x00527fe0:
  plVar11 = plVar9 + 1;
  plVar7 = (long *)*plVar11;
  if ((long *)*plVar11 == (long *)0x0) {
LAB_00527fec:
    lVar10 = *plVar11;
    goto joined_r0x00527ff4;
  }
  goto LAB_00527fbc;
}


