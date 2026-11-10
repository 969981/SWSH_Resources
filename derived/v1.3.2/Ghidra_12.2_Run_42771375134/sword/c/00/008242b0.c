/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008242b0; name: FUN_008242b0
 */


void FUN_008242b0(long *param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *local_48;
  void *local_40;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    plVar1 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
    local_40 = (void *)0x0;
    uStack_38 = 0;
    local_48 = (void *)0x0;
    (**(code **)(*plVar1 + 0x80))(plVar1,param_2,&local_48);
    if (local_40 != local_48) {
      uVar2 = 0;
      do {
        (**(code **)(*plVar1 + 0x38))(plVar1,param_2,*(undefined8 *)((long)local_48 + uVar2 * 8));
        uVar2 = uVar2 + 1;
      } while (uVar2 < (ulong)((long)local_40 - (long)local_48 >> 3));
    }
    plVar1 = (long *)(**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    if (*plVar1 != 0) {
      FUN_0080f500();
    }
    if (local_48 != (void *)0x0) {
      local_40 = local_48;
      operator_delete(local_48);
    }
    FUN_00824470(param_1,param_2);
  }
  return;
}


