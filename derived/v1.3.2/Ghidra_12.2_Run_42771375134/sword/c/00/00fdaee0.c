/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdaee0; name: FUN_00fdaee0
 */


void FUN_00fdaee0(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_28);
  if (local_28 != 0) {
    puVar5 = *(undefined8 **)(local_28 + 0x60);
    if (puVar5 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      plVar1 = (long *)(**(code **)*puVar5)(puVar5);
      plVar2 = (long *)FUN_016b1f00();
      puVar7 = (undefined8 *)0x0;
      if (plVar1 != (long *)0x0) {
        do {
          if (plVar1 == plVar2) {
            puVar7 = puVar5 + -10;
            goto LAB_00fdaf50;
          }
          plVar1 = (long *)*plVar1;
        } while (plVar1 != (long *)0x0);
        puVar7 = (undefined8 *)0x0;
      }
    }
LAB_00fdaf50:
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))((long *)(local_28 + 0x48));
    if (puVar7 != (undefined8 *)0x0) {
      lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      uVar3 = FUN_01510f00(lVar4,0x11f4e1cbde0eef6f);
      if (((uVar3 & 1) != 0) && (*PTR_DAT_02723070 != '\0')) {
        FUN_00fe2990(puVar7[0x3a]);
      }
      FUN_00fd8aa0(puVar7[0x1e]);
      FUN_00fd73f0(puVar7[0x2a]);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


