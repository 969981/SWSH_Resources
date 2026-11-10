/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010dcae0; name: FUN_010dcae0
 */


void FUN_010dcae0(long param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  
  puVar5 = PTR_DAT_02717860;
  puVar4 = PTR_DAT_02717858;
  puVar3 = PTR_DAT_02710ba0;
  puVar2 = PTR_DAT_02710b90;
  puVar1 = PTR_DAT_027107f0;
  param_3 = param_3 & 0xffffffff;
  do {
    plVar7 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))((undefined8 *)(param_1 + 0x50));
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
      if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
        if (((*puVar1 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar1), iVar6 != 0)) {
          *(undefined8 *)PTR_DAT_027107f8 = 0;
          __cxa_guard_release(puVar1);
        }
        *(undefined **)puVar2 = PTR_DAT_027107f8;
        __cxa_guard_release(puVar3);
      }
      *(undefined **)puVar5 = puVar2;
      __cxa_guard_release(puVar4);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar5) {
        if ((*(char *)(param_1 + 0x81) != '\0') && (*(long *)*param_2 == 0)) {
          *(long *)*param_2 = param_1;
        }
        break;
      }
    }
    if (*(long *)(param_1 + 0x78) != 0) {
      plVar7 = (long *)(*(long *)(param_1 + 0x78) + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar8 = *(long *)(param_1 + 0x78);
      if (lVar8 == 0) {
        FUN_010dcae0(0,param_2,1);
      }
      else {
        plVar7 = (long *)(lVar8 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        FUN_010dcae0(lVar8,param_2,1);
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    if (((param_3 & 1) == 0) || (*(long *)(param_1 + 0x70) == 0)) {
      return;
    }
    plVar7 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar8 = *(long *)(param_1 + 0x70);
    param_3 = 1;
    param_1 = 0;
    if (lVar8 != 0) {
      plVar7 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar7 + 0x10))(plVar7);
      FUN_010dcae0(lVar8,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x010dcd28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7);
      return;
    }
  } while( true );
}


