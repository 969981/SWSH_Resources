/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00764520; name: FUN_00764520
 */


undefined8 FUN_00764520(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x100b;
  }
  *param_2 = 0;
  if ((*(long *)(param_1 + 0x160) != 0) && ((param_3 & 1) == 0)) {
    uVar1 = FUN_00767c30(*(long *)(param_1 + 0x160));
    return uVar1;
  }
  if (*(long *)(param_1 + 0x120) == 0) {
    return 0x1000;
  }
  uVar1 = FUN_007693f0();
  return uVar1;
}


