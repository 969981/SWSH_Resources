/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01066f60; name: FUN_01066f60
 */


void FUN_01066f60(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar2 + 0x168);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_28 = 0x10;
    FUN_00725f20(lVar1,&local_28);
    local_28 = 0x10;
    FUN_00727220(lVar1,lVar2,&local_28);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
  }
  return;
}


