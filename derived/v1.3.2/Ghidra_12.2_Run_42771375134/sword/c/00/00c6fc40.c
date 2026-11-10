/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c6fc40; name: FUN_00c6fc40
 */


void FUN_00c6fc40(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_38;
  undefined8 *local_28;
  
  (**(code **)(*param_1 + 0x98))(&local_38);
  if ((local_38 != 0) && (*(int *)(local_38 + 0x54) != 0)) {
    if ((local_38 == 0) || (puVar4 = *(undefined8 **)(local_38 + 0x60), puVar4 == (undefined8 *)0x0)
       ) {
      plVar2 = *(long **)(param_2 + 0x20);
    }
    else {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
        uVar3 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar3;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)PTR_DAT_02715080) {
          local_28 = puVar4 + -10;
          plVar2 = *(long **)(param_2 + 0x20);
          goto joined_r0x00c6fddc;
        }
      }
      plVar2 = *(long **)(param_2 + 0x20);
    }
    local_28 = (undefined8 *)0x0;
joined_r0x00c6fddc:
    if (plVar2 == (long *)0x0) goto LAB_00c6fdf4;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
  }
  FUN_00c6faf0(param_1,param_2);
  if ((param_1[0x3a] != 0) && (*(int *)(param_1[0x3a] + 0x54) != 0)) {
    if ((param_1[0x3a] == 0) ||
       (puVar4 = *(undefined8 **)(param_1[0x3a] + 0x60), puVar4 == (undefined8 *)0x0)) {
      local_28 = (undefined8 *)0x0;
      plVar2 = *(long **)(param_2 + 0x20);
    }
    else {
      plVar2 = (long *)(**(code **)*puVar4)(puVar4);
      if (((*PTR_DAT_02715078 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_02715078), iVar1 != 0)) {
        uVar3 = FUN_00a87090();
        *(undefined8 *)PTR_DAT_02715080 = uVar3;
        __cxa_guard_release(PTR_DAT_02715078);
      }
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)PTR_DAT_02715080) {
          local_28 = puVar4 + -10;
          plVar2 = *(long **)(param_2 + 0x20);
          goto joined_r0x00c6fd90;
        }
      }
      local_28 = (undefined8 *)0x0;
      plVar2 = *(long **)(param_2 + 0x20);
    }
joined_r0x00c6fd90:
    if (plVar2 == (long *)0x0) {
LAB_00c6fdf4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_28);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


