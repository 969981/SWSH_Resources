/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee2200; name: FUN_00ee2200
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee2200(undefined4 param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_00ee22f0(&local_40,lVar4,&local_38);
  uVar1 = param_1;
  if (local_40 != 0) {
    puVar5 = *(undefined8 **)(local_40 + 0x60);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_00ee2b20();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    *(undefined4 *)(puVar5 + 0xd) = param_1;
    uVar1 = _DAT_000000b8;
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      uVar1 = _DAT_000000b8;
    }
  }
  _DAT_000000b8 = uVar1;
  local_40 = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


