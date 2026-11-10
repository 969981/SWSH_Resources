/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fda940; name: FUN_00fda940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fda940(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_38;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_38);
  if (local_38 != 0) {
    puVar6 = *(undefined8 **)(local_38 + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_016b1f00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar6 = puVar6 + -10;
          goto LAB_00fda9a8;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_00fda9a8:
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
    puVar1 = PTR_DAT_02710848;
    if (puVar6 != (undefined8 *)0x0) {
      lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      uVar4 = FUN_01510f00(lVar5,0x11f4e1cbde0eef6f);
      lVar7 = *(long *)(*(long *)puVar1 + 0xb8);
      lVar3 = _DAT_000001f8;
      if (lVar7 != 0) {
        plVar2 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar3 = *(long *)(lVar7 + 0x1f8);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      if ((((uVar4 & 1) != 0) && (lVar3 == -0x340d631b7bddd9bb)) && (*PTR_DAT_02723070 != '\0')) {
        FUN_00fe2970(puVar6[0x3a]);
      }
      FUN_00fd8a40(puVar6[0x1e]);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


