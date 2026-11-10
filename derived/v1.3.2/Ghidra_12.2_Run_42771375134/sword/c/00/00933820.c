/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00933820; name: FUN_00933820
 */


bool FUN_00933820(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_008f35c0(*param_1,0x1000);
  if ((uVar1 & 1) == 0) {
    return 1 < *(byte *)(param_1 + 7);
  }
  return false;
}


