/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00523210; name: FUN_00523210
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_00523210(long param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  __tree_node_base *p_Var5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_2 != 0) {
    plVar7 = *(long **)(param_1 + 0x11f0);
    plVar1 = (long *)(param_1 + 0x11f0);
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar1;
      do {
        while ((ulong)plVar7[4] < param_2) {
          plVar7 = (long *)plVar7[1];
          if (plVar7 == (long *)0x0) goto LAB_00523294;
        }
        if ((param_2 < (ulong)plVar7[4]) || (param_3 <= (ulong)plVar7[5])) {
          plVar4 = (long *)*plVar7;
          plVar2 = plVar7;
        }
        else {
          plVar4 = (long *)plVar7[1];
        }
        plVar7 = plVar4;
      } while (plVar7 != (long *)0x0);
LAB_00523294:
      if (((plVar2 != plVar1) && ((ulong)plVar2[4] <= param_2)) &&
         (((ulong)plVar2[4] < param_2 || ((ulong)plVar2[5] <= param_3)))) {
        return (long *)plVar2[6];
      }
    }
    if (param_4 == (long *)0x0) {
      param_4 = *(long **)(*(long *)(param_1 + 0x18) + 0x30);
    }
    plVar7 = (long *)(**(code **)(*param_4 + 0x28))(param_4);
    plVar2 = (long *)(**(code **)(*plVar7 + 0x228))(plVar7,0,0,0);
    uVar3 = (**(code **)(*plVar2 + 0xd8))(plVar2,param_2,param_3);
    if (((uVar3 & 1) != 0) &&
       (plVar4 = (long *)(**(code **)(*plVar7 + 0x240))(plVar7,0,0,0), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x90))();
      (**(code **)(*plVar4 + 0xa0))(plVar4,0,plVar2);
      (**(code **)(*plVar4 + 200))(plVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0xe8))(plVar7,1,0,0);
      if (plVar7 == (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        return (long *)0x0;
      }
      (**(code **)(*plVar7 + 0x40))(plVar7);
      plVar2 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7);
      *plVar2 = (long)plVar4;
      (**(code **)(*plVar7 + 0x48))(plVar7);
      plVar2 = *(long **)(param_1 + 0x11f0);
      if (plVar2 != (long *)0x0) {
        uVar3 = plVar2[4];
        plVar8 = (long *)(param_1 + 0x11f0);
joined_r0x005233d8:
        do {
          plVar1 = plVar2;
          if (uVar3 <= param_2) {
            if (uVar3 < param_2) {
LAB_00523408:
              plVar8 = plVar1 + 1;
              plVar2 = (long *)*plVar8;
              if (plVar2 != (long *)0x0) {
                uVar3 = plVar2[4];
                goto joined_r0x005233d8;
              }
            }
            else {
              if (param_3 < (ulong)plVar1[5]) goto LAB_00523424;
              if ((ulong)plVar1[5] < param_3) goto LAB_00523408;
            }
            lVar6 = *plVar8;
            goto joined_r0x00523438;
          }
LAB_00523424:
          plVar2 = (long *)*plVar1;
          plVar8 = plVar1;
          if (plVar2 == (long *)0x0) goto code_r0x0052342c;
          uVar3 = plVar2[4];
        } while( true );
      }
      lVar6 = *plVar1;
      plVar8 = plVar1;
      goto joined_r0x00523438;
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return (long *)0x0;
    }
  }
  return (long *)0x0;
code_r0x0052342c:
  lVar6 = *plVar1;
joined_r0x00523438:
  if (lVar6 == 0) {
    p_Var5 = (__tree_node_base *)
             FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x40,"../src/GPU/GPUMemoryAllocator.h",
                          0x1b8,0);
    *(ulong *)(p_Var5 + 0x20) = param_2;
    *(ulong *)(p_Var5 + 0x28) = param_3;
    *(long **)(p_Var5 + 0x10) = plVar1;
    *(long **)(p_Var5 + 0x30) = plVar7;
    *(long **)(p_Var5 + 0x38) = plVar4;
    *(undefined8 *)p_Var5 = 0;
    *(undefined8 *)(p_Var5 + 8) = 0;
    *plVar8 = (long)p_Var5;
    if (**(long **)(param_1 + 0x11e8) != 0) {
      *(long *)(param_1 + 0x11e8) = **(long **)(param_1 + 0x11e8);
      p_Var5 = (__tree_node_base *)*plVar8;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x11f0),p_Var5);
    *(long *)(param_1 + 0x11f8) = *(long *)(param_1 + 0x11f8) + 1;
  }
  return plVar7;
}


