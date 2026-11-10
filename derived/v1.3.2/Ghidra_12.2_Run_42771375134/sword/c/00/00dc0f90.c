/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0f90; name: FUN_00dc0f90
 */


void FUN_00dc0f90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00adc640(param_1,param_3,param_2);
  lVar1 = *(long *)(lVar1 + 0x58);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x410) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x410) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x410) = 0;
  }
  *(long *)(param_1 + 0x410) = lVar1;
  return;
}


