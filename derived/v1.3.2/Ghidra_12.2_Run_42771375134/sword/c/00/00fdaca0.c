/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdaca0; name: FUN_00fdaca0
 */


void FUN_00fdaca0(long param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_38;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_38);
  if (local_38 != 0) {
    puVar4 = *(undefined8 **)(local_38 + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar4)(puVar4);
      lVar2 = FUN_016b1f00();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar4 = puVar4 + -10;
          goto LAB_00fdad14;
        }
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_00fdad14:
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
    if (puVar4 != (undefined8 *)0x0) {
      uVar3 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
      if ((param_2 & 1) != 0) {
        FUN_00fe1ee0(puVar4[0x3a],uVar3);
        FUN_00fd8540(puVar4[0x1e],uVar3);
      }
      FUN_00fde020(puVar4[0x22],uVar3);
      FUN_00fdd230(puVar4[0x36],uVar3);
      FUN_00fdf5f0(puVar4[0x26],uVar3);
      FUN_00fd7260(puVar4[0x2a],uVar3);
      FUN_00fde6d0(puVar4[0x2e],uVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


