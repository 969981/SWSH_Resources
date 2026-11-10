/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff0890; name: FUN_00ff0890
 */


undefined8 FUN_00ff0890(int *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x736b6264)) {
    return 0;
  }
  uVar1 = FUN_014bc9b0(*(undefined8 *)(param_1 + 2));
  return uVar1;
}


