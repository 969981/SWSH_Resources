/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012cb0b0; name: FUN_012cb0b0
 */


long FUN_012cb0b0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_58;
  long local_50;
  undefined8 *local_48;
  undefined1 auStack_38 [8];
  
  local_50 = param_1;
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_48);
  if (local_48 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)local_48[0xc];
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00aa5090();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_012cb130;
        }
      }
      puVar3 = (undefined8 *)0x0;
    }
LAB_012cb130:
    (**(code **)(local_48[9] + 0x18))(local_48 + 9);
    if (puVar3 != (undefined8 *)0x0) {
      local_48 = puVar3;
      lVar2 = FUN_012d0300(auStack_38,param_2,&local_50,&local_48);
      local_58 = lVar2;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
      }
      FUN_01371880(param_1,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


