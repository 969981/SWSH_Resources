/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d6270; name: FUN_012d6270
 */


undefined8 FUN_012d6270(undefined8 param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  uVar1 = FUN_012d62d0(param_1);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_012d63e0(param_1);
    return uVar2;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  return 1;
}


