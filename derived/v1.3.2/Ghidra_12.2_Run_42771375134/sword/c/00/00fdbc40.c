/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdbc40; name: FUN_00fdbc40
 */


void FUN_00fdbc40(long param_1,byte param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_38;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_38);
  if (local_38 != 0) {
    puVar5 = *(undefined8 **)(local_38 + 0x60);
    if (puVar5 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar5)(puVar5);
      lVar2 = FUN_016b1f00();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar5 = puVar5 + -10;
          goto LAB_00fdbcdc;
        }
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_00fdbcdc:
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
    if (puVar5 != (undefined8 *)0x0) {
      if (((*PTR_DAT_02723070 != '\0' ^ param_2) & 1) != 0) {
        *PTR_DAT_02723070 = param_2 & 1;
        uVar3 = FUN_010198e0(lVar4);
        if ((uVar3 & 1) == 0) {
          if ((param_2 & 1) == 0) {
            FUN_00fe2990(puVar5[0x3a]);
          }
          else {
            FUN_00fe2970();
          }
        }
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


