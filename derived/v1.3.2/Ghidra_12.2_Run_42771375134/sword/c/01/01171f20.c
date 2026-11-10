/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01171f20; name: FUN_01171f20
 */


void FUN_01171f20(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 200) != 0) {
    FUN_0117f110();
    if (*(long *)(param_1 + 0xd0) != 0) {
      FUN_00bdff30();
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      FUN_01172660();
      lVar1 = *(long *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xa8) = 0;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
    }
  }
  if ((param_2 & 1) != 0) {
    *(undefined2 *)(param_1 + 0x93) = 0;
  }
  *(undefined4 *)(param_1 + 0x88) = 0xf;
  return;
}


