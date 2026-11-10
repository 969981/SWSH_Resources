/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d8da80; name: FUN_00d8da80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d8da80(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_00d8db70(&local_40,lVar3,&local_38);
  if (local_40 == 0) {
    _DAT_000000a0 = param_2;
    *(undefined4 *)(param_2 + 0x20) = 1;
  }
  else {
    puVar4 = *(undefined8 **)(local_40 + 0x60);
    plVar1 = (long *)(**(code **)*puVar4)(puVar4);
    lVar2 = FUN_00d8ea80();
    for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
    }
    puVar4[10] = param_2;
    *(undefined4 *)(param_2 + 0x20) = 1;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
  }
  local_40 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


