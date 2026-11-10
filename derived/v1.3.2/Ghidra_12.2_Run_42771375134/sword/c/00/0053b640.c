/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053b640; name: FUN_0053b640
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_0053b640(long param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  ulong uVar3;
  __tree_node_base *p_Var4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    return (long *)0x0;
  }
  plVar7 = *(long **)(param_1 + 0x11d8);
  plVar1 = (long *)(param_1 + 0x11d8);
  if (plVar7 != (long *)0x0) {
    plVar5 = plVar1;
    do {
      while (param_2 <= (ulong)plVar7[4]) {
        if ((param_2 < (ulong)plVar7[4]) || (param_3 <= (ulong)plVar7[5])) {
          plVar8 = (long *)*plVar7;
          plVar5 = plVar7;
        }
        else {
          plVar8 = (long *)plVar7[1];
        }
        plVar7 = plVar8;
        if (plVar7 == (long *)0x0) goto LAB_0053b6c8;
      }
      plVar7 = (long *)plVar7[1];
    } while (plVar7 != (long *)0x0);
LAB_0053b6c8:
    if (((plVar5 != plVar1) && ((ulong)plVar5[4] <= param_2)) &&
       (((ulong)plVar5[4] < param_2 || ((ulong)plVar5[5] <= param_3)))) {
      return (long *)plVar5[6];
    }
  }
  if (param_4 == (long *)0x0) {
    param_4 = *(long **)(*(long *)(param_1 + 0x18) + 0x30);
    if (param_3 != 0) goto LAB_0053b6e4;
LAB_0053b6fc:
    plVar7 = (long *)FUN_005cbff0();
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))();
    uVar3 = (**(code **)(*plVar7 + 0x38))
                      (plVar7,0x28,0xffffffff,"C:/workspace/YEBIS_draft/src/GPU/GPUPostEffect.cpp",
                       0xa538);
    if (uVar3 == 0) {
      return (long *)0x0;
    }
    (**(code **)PTR_DAT_02713ad8)();
    uVar2 = (**(code **)PTR_DAT_02713ae0)(param_2);
    (**(code **)PTR_DAT_02713ae8)(uVar3,0,uVar2);
    uVar2 = (**(code **)PTR_DAT_02713af0)(param_2);
    (**(code **)PTR_DAT_02713af8)(uVar3,uVar2);
    uVar2 = (**(code **)PTR_DAT_02713b00)(param_2);
    (**(code **)PTR_DAT_02713b08)(uVar3,uVar2);
    uVar2 = (**(code **)PTR_DAT_02713b10)(param_2);
    (**(code **)PTR_DAT_02713b18)(uVar3,uVar2);
    uVar2 = (**(code **)PTR_DAT_02713b20)(param_2);
    (**(code **)PTR_DAT_02713b28)(uVar3,0,uVar2);
    uVar9 = uVar3;
  }
  else {
    if (param_3 == 0) goto LAB_0053b6fc;
LAB_0053b6e4:
    uVar3 = param_3;
    uVar9 = 0;
  }
  plVar7 = (long *)(**(code **)(*param_4 + 0x28))(param_4);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x188))(plVar7,2,0,0,0);
  uVar3 = (**(code **)(*plVar7 + 0x160))(plVar7,param_2,uVar3);
  if ((uVar3 & 1) == 0) {
    if (plVar7 == (long *)0x0) {
      return (long *)0x0;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
    return (long *)0x0;
  }
  plVar5 = *(long **)(param_1 + 0x11d8);
  if (plVar5 != (long *)0x0) {
    uVar3 = plVar5[4];
    plVar8 = (long *)(param_1 + 0x11d8);
    do {
      while (plVar1 = plVar5, param_2 < uVar3) {
LAB_0053b8d8:
        plVar5 = (long *)*plVar1;
        plVar8 = plVar1;
        if (plVar5 == (long *)0x0) {
          lVar6 = *plVar1;
          goto joined_r0x0053b8ec;
        }
        uVar3 = plVar5[4];
      }
      if (param_2 <= uVar3) {
        if (param_3 < (ulong)plVar1[5]) goto LAB_0053b8d8;
        if (param_3 <= (ulong)plVar1[5]) goto LAB_0053b940;
      }
      plVar8 = plVar1 + 1;
      plVar5 = (long *)*plVar8;
      if (plVar5 == (long *)0x0) goto LAB_0053b940;
      uVar3 = plVar5[4];
    } while( true );
  }
  lVar6 = *plVar1;
  plVar8 = plVar1;
joined_r0x0053b8ec:
  if (lVar6 == 0) {
    p_Var4 = (__tree_node_base *)
             FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x40,"../src/GPU/GPUMemoryAllocator.h",
                          0x1b8,0);
    *(ulong *)(p_Var4 + 0x20) = param_2;
    *(ulong *)(p_Var4 + 0x28) = param_3;
    *(long **)(p_Var4 + 0x10) = plVar1;
    *(long **)(p_Var4 + 0x30) = plVar7;
    *(ulong *)(p_Var4 + 0x38) = uVar9;
    *(undefined8 *)p_Var4 = 0;
    *(undefined8 *)(p_Var4 + 8) = 0;
    *plVar8 = (long)p_Var4;
    if (**(long **)(param_1 + 0x11d0) != 0) {
      *(long *)(param_1 + 0x11d0) = **(long **)(param_1 + 0x11d0);
      p_Var4 = (__tree_node_base *)*plVar8;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x11d8),p_Var4);
    *(long *)(param_1 + 0x11e0) = *(long *)(param_1 + 0x11e0) + 1;
  }
  return plVar7;
LAB_0053b940:
  lVar6 = *plVar8;
  goto joined_r0x0053b8ec;
}


