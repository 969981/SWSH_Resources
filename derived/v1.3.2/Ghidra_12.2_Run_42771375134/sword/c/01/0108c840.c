/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108c840; name: FUN_0108c840
 */


void FUN_0108c840(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_02724078;
  puVar1 = PTR_DAT_02724070;
  param_3 = param_3 & 0xffffffff;
  do {
    plVar4 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))((undefined8 *)(param_1 + 0x50));
    if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
      uVar5 = FUN_0108ca20();
      *(undefined8 *)puVar2 = uVar5;
      __cxa_guard_release(puVar1);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)puVar2) {
        if ((*(long *)(param_1 + 0x60) == param_2[1]) && (*(long *)*param_2 == 0)) {
          *(long *)*param_2 = param_1;
        }
        break;
      }
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      plVar4 = (long *)(*(long *)(param_1 + 0x78) + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar6 = *(long *)(param_1 + 0x78);
      if (lVar6 == 0) {
        FUN_0108c840(0,param_2,1);
      }
      else {
        plVar4 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_0108c840(lVar6,param_2,1);
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    if (((param_3 & 1) == 0) || (*(long *)(param_1 + 0x70) == 0)) {
      return;
    }
    plVar4 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar6 = *(long *)(param_1 + 0x70);
    param_3 = 1;
    param_1 = 0;
    if (lVar6 != 0) {
      plVar4 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_0108c840(lVar6,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x0108ca18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x18))(plVar4);
      return;
    }
  } while( true );
}


