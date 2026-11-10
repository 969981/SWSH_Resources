/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012cb3e0; name: FUN_012cb3e0
 */


long * FUN_012cb3e0(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *local_48;
  long local_38;
  
  (**(code **)(**(long **)(param_1 + 0x2c8) + 0x10))(&local_38);
  if (local_38 != 0) {
    puVar4 = *(undefined8 **)(local_38 + 0x60);
    if (puVar4 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      lVar3 = FUN_00aa5090();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar4 = puVar4 + -10;
          goto LAB_012cb45c;
        }
      }
      puVar4 = (undefined8 *)0x0;
    }
LAB_012cb45c:
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
    if (puVar4 != (undefined8 *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
      if (plVar2 == (long *)0x0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_01371920(plVar2,param_1,puVar4);
      puVar1 = PTR_DAT_027276c8 + 0x80;
      *plVar2 = (long)(PTR_DAT_027276c8 + 0x10);
      plVar2[1] = (long)param_2;
      plVar5 = plVar2 + 9;
      *plVar5 = (long)puVar1;
      plVar2[2] = (long)plVar2;
      plVar2[3] = 0x68;
      plVar2[4] = 8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      local_48 = plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(plVar2[9] + 0x10))(plVar5);
        (**(code **)(plVar2[9] + 0x10))(plVar5);
      }
      FUN_01371880(param_1,&local_48);
      if (local_48 != (long *)0x0) {
        (**(code **)(local_48[9] + 0x18))();
        local_48 = (long *)0x0;
      }
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


