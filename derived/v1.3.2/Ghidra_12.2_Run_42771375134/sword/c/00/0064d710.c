/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064d710; name: FUN_0064d710
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0064d710(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong local_90 [11];
  ulong local_38;
  int iStack_34;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  uVar4 = (**(code **)(*(long *)param_1[3] + 0x2a8))();
  plVar1 = param_1 + 5;
  cVar3 = (**(code **)PTR_DAT_02714700)(plVar1,uVar4);
  puVar2 = PTR_DAT_02713a38;
  if (cVar3 == '\x01') {
    local_38 = 0;
    (**(code **)PTR_DAT_02713a38)(uVar4,0x13,&iStack_34);
    (**(code **)puVar2)(uVar4,0x14,&stack0xffffffffffffffc8);
    uVar8 = iStack_34 + 0x1ffU & -iStack_34;
    plVar5 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
    plVar5 = (long *)(**(code **)(*plVar5 + 0xf0))(plVar5,0,0);
    param_1[0x1a] = (long)plVar5;
    local_90[6] = 0;
    local_90[4] = 0x400000000;
    local_90[5] = 0;
    local_90[1] = 0;
    local_90[0] = (ulong)uVar8;
    local_90[3] = 0;
    local_90[2] = 0;
    local_90[7] = 0;
    local_90[8] = 0;
    local_90[9] = 0xffffffffffffffff;
    local_90[10] = 0xffffffffffffffff;
    uVar6 = (**(code **)(*plVar5 + 0x40))(plVar5,local_90);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_00653070(param_1[0x1a],(long)(int)uVar8,(long)iStack_34,param_1 + 0x1c);
    if ((uVar6 & 1) != 0) {
      param_1[0x1d] = (param_1[0x1c] + (long)iStack_34) - 1U & -(long)iStack_34;
      lVar7 = (**(code **)(*(long *)param_1[1] + 0x38))
                        ((long *)param_1[1],0x200,local_38 & 0xffffffff,
                         "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandCache_Impl.cpp"
                         ,0x6f);
      param_1[0x1b] = lVar7;
      if (lVar7 != 0) {
        uVar4 = (**(code **)(*(long *)param_1[0x1a] + 0x80))();
        (**(code **)PTR_DAT_02714720)(plVar1,uVar4,param_1[0x1d],0x200);
        (**(code **)PTR_DAT_02714728)(plVar1,param_1[0x1b],0x200);
        param_1[0x19] = 0;
        *(undefined1 *)(param_1 + 0x1e) = 1;
        return 1;
      }
      (**(code **)PTR_DAT_027146f8)(plVar1);
    }
  }
  return 0;
}


