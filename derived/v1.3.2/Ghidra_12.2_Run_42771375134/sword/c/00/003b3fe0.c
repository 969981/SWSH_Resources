/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b3fe0; name: FUN_003b3fe0
 */


void FUN_003b3fe0(long param_1)

{
  long *plVar1;
  long lVar2;
  float local_30;
  float local_2c;
  float local_28;
  
  FUN_003b4170();
  FUN_003afa70(&local_30,*(undefined8 *)(param_1 + 0x50));
  if ((*(byte *)(*(long *)(param_1 + 0x50) + 0xc) >> 1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    local_30 = *(float *)(lVar2 + 0x794) + local_30;
    local_2c = *(float *)(lVar2 + 0x798) + local_2c;
    local_28 = *(float *)(lVar2 + 0x79c) + local_28;
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x50) + 0x20);
  (**(code **)(*plVar1 + 0xa0))(plVar1,&local_30);
  return;
}


