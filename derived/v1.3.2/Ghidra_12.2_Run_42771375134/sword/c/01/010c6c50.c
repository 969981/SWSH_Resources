/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010c6c50; name: FUN_010c6c50
 */


void FUN_010c6c50(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_0103a6b0(auStack_38);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x88) = lVar1;
  lVar1 = FUN_0103a6b0(auStack_28,param_2);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar1;
  FUN_0103c820(*(undefined8 *)(param_1 + 0x88),0xb3c8d624e9a15103);
  FUN_0103c820(*(undefined8 *)(param_1 + 0x90),0xd38213751f8cbe3b);
  return;
}


