/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c00ba0; name: FUN_00c00ba0
 */


void FUN_00c00ba0(long param_1,long *param_2)

{
  undefined8 local_38;
  long local_30 [2];
  
  if (*param_2 == 0x20000000) {
    local_30[1] = 0x1f17051c7f9e37c;
    FUN_0167ba30(*(undefined8 *)(param_1 + 0x5f8),local_30 + 1);
    FUN_0103ec30(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x120));
  }
  else if (*param_2 == 0x80000000) {
    local_30[1] = 0xd270c15a8de0ef89;
    FUN_0167ba30(*(undefined8 *)(param_1 + 0x5f8),local_30 + 1);
    FUN_0103ec60(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x120));
  }
  local_30[0] = *(long *)(param_1 + 0x850);
  local_30[1] = 0xdc198db74f16809;
  if (local_30[0] != 0) {
    (**(code **)(*(long *)(local_30[0] + 0x48) + 0x10))();
  }
  local_38 = FUN_0103e730(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x120));
  FUN_008c4e70(param_1 + 0x100,local_30 + 1,local_30,&local_38,10);
  if (local_30[0] != 0) {
    (**(code **)(*(long *)(local_30[0] + 0x48) + 0x18))();
    local_30[0] = 0;
  }
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  return;
}


