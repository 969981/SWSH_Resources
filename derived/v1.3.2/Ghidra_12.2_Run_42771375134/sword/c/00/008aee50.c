/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008aee50; name: FUN_008aee50
 */


void FUN_008aee50(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x688),1);
  FUN_016b2d70(*(undefined8 *)(lVar2 + 0x690),1);
  FUN_008c82b0(*(undefined8 *)(param_1 + 0xa0),1);
  FUN_008c4b10(*(undefined8 *)(param_1 + 0xa0),1);
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  lVar2 = FUN_00897d00();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  (**(code **)(puVar3[0xb] + 0x80))(puVar3[0xb] + 0xa0);
  *(undefined4 *)(param_1 + 0x7c) = 1;
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xa0),0);
  return;
}


