/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00539890; name: FUN_00539890
 */


undefined8
FUN_00539890(long param_1,ulong param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,long *param_8)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  __tree_node_base *p_Var5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long local_58;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0xffffffff;
  }
  local_58 = 0;
  plVar8 = (long *)(param_1 + 0xe0);
  plVar6 = (long *)*plVar8;
  if (plVar6 == (long *)0x0) {
LAB_00539910:
    uVar3 = FUN_00546f10(param_6);
  }
  else {
    plVar9 = plVar8;
    do {
      if ((ulong)plVar6[4] >= param_2) {
        plVar9 = plVar6;
      }
      plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar9 == plVar8) || (param_2 < (ulong)plVar9[4])) goto LAB_00539910;
    uVar3 = FUN_00546f10(param_6);
    if (plVar9 != plVar8) {
      local_58 = plVar9[5];
      goto joined_r0x00539a5c;
    }
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x218))
                    (*(long **)(param_1 + 0x18),param_3,param_4,param_5,uVar3,param_7,param_2,
                     &local_58);
  lVar1 = local_58;
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  plVar6 = (long *)*plVar8;
  if (plVar6 == (long *)0x0) {
    lVar7 = *plVar8;
    plVar6 = plVar8;
  }
  else {
    plVar8 = (long *)(param_1 + 0xe0);
    bVar2 = param_2 <= (ulong)plVar6[4];
    if (!bVar2 || plVar6[4] == param_2) goto LAB_00539988;
LAB_00539978:
    plVar8 = plVar6;
    if ((long *)*plVar6 != (long *)0x0) {
      plVar9 = (long *)*plVar6;
LAB_00539968:
      plVar6 = plVar9;
      bVar2 = param_2 <= (ulong)plVar6[4];
      if (!bVar2 || plVar6[4] == param_2) {
LAB_00539988:
        if (!bVar2) goto code_r0x0053998c;
        goto LAB_00539998;
      }
      goto LAB_00539978;
    }
    lVar7 = *plVar6;
  }
joined_r0x005399a0:
  if (lVar7 == 0) {
    p_Var5 = (__tree_node_base *)
             FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x30,"../src/GPU/GPUMemoryAllocator.h",
                          0x1b8,0);
    *(ulong *)(p_Var5 + 0x20) = param_2;
    *(long *)(p_Var5 + 0x28) = lVar1;
    *(long **)(p_Var5 + 0x10) = plVar6;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *plVar8 = (long)p_Var5;
    if (**(long **)(param_1 + 0xd8) != 0) {
      *(long *)(param_1 + 0xd8) = **(long **)(param_1 + 0xd8);
      p_Var5 = (__tree_node_base *)*plVar8;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0xe0),p_Var5);
    *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 1;
  }
joined_r0x00539a5c:
  if (param_8 != (long *)0x0) {
    *param_8 = local_58;
  }
  return 0;
code_r0x0053998c:
  plVar8 = plVar6 + 1;
  plVar9 = (long *)*plVar8;
  if ((long *)*plVar8 == (long *)0x0) {
LAB_00539998:
    lVar7 = *plVar8;
    goto joined_r0x005399a0;
  }
  goto LAB_00539968;
}


