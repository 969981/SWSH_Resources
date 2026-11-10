/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebfda0; name: FUN_00ebfda0
 */


void FUN_00ebfda0(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_00ec1cf0(auStack_28);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_2 + 0x788) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x788) + 0x48) + 0x18))();
    *(undefined8 *)(param_2 + 0x788) = 0;
  }
  *(long *)(param_2 + 0x788) = lVar1;
  FUN_0108ebf0(lVar1,0);
  lVar1 = *(long *)(param_2 + 0x788);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  return;
}


