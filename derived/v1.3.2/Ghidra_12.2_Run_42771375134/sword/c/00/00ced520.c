/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ced520; name: FUN_00ced520
 */


void FUN_00ced520(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_40;
  long local_38;
  undefined8 local_28;
  
  FUN_01036e20(*(undefined8 *)(param_1 + 0x80));
  lVar2 = *(long *)(*(long *)(param_1 + 0x78) + 0x2b0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar2 + 0x2e8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  local_28 = 0x6526de9522d519aa;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x90),&local_28,lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  local_38 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar3,0,0,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  local_28 = 0x6526df9522d51b5d;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x90),&local_28,lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  local_40 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar3,1,1,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


