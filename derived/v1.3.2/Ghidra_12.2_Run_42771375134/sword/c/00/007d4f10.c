/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d4f10; name: FUN_007d4f10
 */


undefined8 FUN_007d4f10(long param_1)

{
  undefined8 uVar1;
  
  if ((((*(long *)(param_1 + 0x38) == 0) || (*(long *)(param_1 + 0xb0) == 0)) ||
      (*(long *)(param_1 + 0x110) == 0)) ||
     ((*(long *)(param_1 + 0xd0) == 0 || (*(long *)(param_1 + 0xf0) == 0)))) {
    return 0;
  }
  uVar1 = FUN_007d2c20(*(long *)(param_1 + 0xf0),*(undefined2 *)(param_1 + 0xac));
  return uVar1;
}


