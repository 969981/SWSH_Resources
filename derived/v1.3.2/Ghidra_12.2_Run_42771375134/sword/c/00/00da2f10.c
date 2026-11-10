/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da2f10; name: FUN_00da2f10
 */


long * FUN_00da2f10(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_02715e18;
  puVar1 = PTR_DAT_02715e10;
  if (param_1 == param_2) {
LAB_00da2fbc:
    puVar2 = PTR_DAT_02715e18;
    puVar1 = PTR_DAT_02715e10;
    plVar4 = param_1;
    if (param_1 != param_2) {
joined_r0x00da2fcc:
      plVar4 = plVar4 + 1;
      if (plVar4 != param_2) {
        plVar6 = (long *)(*(code *)**(undefined8 **)(*plVar4 + 8))();
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar5 = FUN_00706e40();
          *(undefined8 *)puVar2 = uVar5;
          __cxa_guard_release(puVar1);
        }
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)puVar2) goto joined_r0x00da2fcc;
        }
        if ((long *)*param_1 != (long *)0x0) {
          (**(code **)(*(long *)*param_1 + 0x18))();
          *param_1 = 0;
        }
        lVar7 = *plVar4;
        *plVar4 = 0;
        *param_1 = lVar7;
        param_1 = param_1 + 1;
        goto joined_r0x00da2fcc;
      }
    }
  }
  else {
    do {
      plVar4 = (long *)(*(code *)**(undefined8 **)(*param_1 + 8))();
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
        uVar5 = FUN_00706e40();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(puVar1);
      }
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)puVar2) goto LAB_00da2fbc;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    param_1 = param_2;
  }
  return param_1;
}


