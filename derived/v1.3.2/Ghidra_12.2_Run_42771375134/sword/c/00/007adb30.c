/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007adb30; name: FUN_007adb30
 */


undefined8 FUN_007adb30(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    return 0;
  }
  plVar1 = (long *)FUN_017cb1d0(0xb0);
  if (plVar1 != (long *)0x0) {
    FUN_01864690();
    *(long **)(param_1 + 8) = plVar1;
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (*(long **)(param_1 + 8) == (long *)0x0) {
      return 0;
    }
    (**(code **)(**(long **)(param_1 + 8) + 8))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return 0;
}


