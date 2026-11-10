/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a2c80; name: FUN_014a2c80
 */


void FUN_014a2c80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = FUN_014a8740(auStack_38);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x270) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x270) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  *(long *)(param_1 + 0x270) = lVar1;
  FUN_014a2d00(param_1,param_2,param_3);
  return;
}


