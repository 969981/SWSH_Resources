/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef06a0; name: FUN_00ef06a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ef06a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_00ef0780(&local_40,lVar4,&local_38);
  uVar1 = param_2;
  if (local_40 != 0) {
    puVar5 = *(undefined8 **)(local_40 + 0x60);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00ef0c00();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    puVar5[7] = param_2;
    uVar1 = _DAT_00000088;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      uVar1 = _DAT_00000088;
    }
  }
  _DAT_00000088 = uVar1;
  local_40 = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


