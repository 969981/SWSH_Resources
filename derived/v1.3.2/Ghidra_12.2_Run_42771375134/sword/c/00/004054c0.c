/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004054c0; name: FUN_004054c0
 */


undefined8 FUN_004054c0(undefined4 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00404590();
  if ((param_1 == (undefined4 *)0x0) || ((uVar1 & 1) != 0)) {
    return 2;
  }
  uVar2 = FUN_00404490(*param_1,param_1[1]);
  return uVar2;
}


