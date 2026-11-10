/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01095a60; name: FUN_01095a60
 */


void FUN_01095a60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  long local_30;
  long local_28;
  
  FUN_006cf0a0(auStack_48,&DAT_0266fbf0);
  uVar1 = FUN_00ff93b0(param_1);
  FUN_00ff8620(&local_28,uVar1,auStack_48,10);
  lVar2 = *(long *)(local_28 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(long *)(param_1 + 0x80) = lVar2;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


