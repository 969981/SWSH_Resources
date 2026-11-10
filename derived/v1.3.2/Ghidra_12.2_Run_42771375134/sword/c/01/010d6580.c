/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d6580; name: FUN_010d6580
 */


void FUN_010d6580(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  
  param_3 = param_3 & 0xffffffff;
  do {
    plVar1 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x50))((undefined8 *)(param_1 + 0x50));
    lVar2 = FUN_00fffe40();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        if ((*(char *)(param_1 + 0x81) != '\0') && (*(long *)*param_2 == 0)) {
          *(long *)*param_2 = param_1;
          lVar2 = *(long *)(param_1 + 0x78);
          if (lVar2 == 0) goto joined_r0x010d6664;
          goto LAB_010d65f0;
        }
        break;
      }
    }
    lVar2 = *(long *)(param_1 + 0x78);
    if (lVar2 != 0) {
LAB_010d65f0:
      plVar1 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar1 + 0x10))(plVar1);
      (**(code **)(*plVar1 + 0x18))(plVar1);
      lVar2 = *(long *)(param_1 + 0x78);
      if (lVar2 == 0) {
        FUN_010d6580(0,param_2,1);
      }
      else {
        plVar1 = (long *)(lVar2 + 0x48);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_010d6580(lVar2,param_2,1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
joined_r0x010d6664:
    if (((param_3 & 1) == 0) || (*(long *)(param_1 + 0x70) == 0)) {
      return;
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x70) + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar2 = *(long *)(param_1 + 0x70);
    param_3 = 1;
    param_1 = 0;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN_010d6580(lVar2,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x010d670c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1);
      return;
    }
  } while( true );
}


