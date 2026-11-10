/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0147d5d0; name: FUN_0147d5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0147d5d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN_0147d6a0(&local_38,lVar4);
  uVar1 = param_2;
  if (local_38 != 0) {
    puVar5 = *(undefined8 **)(local_38 + 0x60);
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_0147de80();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    puVar5[0x2a] = param_2;
    uVar1 = _DAT_000001a0;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      uVar1 = _DAT_000001a0;
    }
  }
  _DAT_000001a0 = uVar1;
  local_38 = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


