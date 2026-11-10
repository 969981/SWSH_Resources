/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01073cf0; name: FUN_01073cf0
 */


undefined8 FUN_01073cf0(long param_1,undefined4 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_0106f510(param_2,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58)
                      );
  return *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x660);
}


