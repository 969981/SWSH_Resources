/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bf650; name: FUN_004bf650
 */


undefined8 FUN_004bf650(undefined8 param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_004bfad0();
  if ((uVar1 & 1) == 0) {
    *param_2 = 0x22;
    return 2;
  }
  *param_2 = 0x21;
  uVar2 = FUN_004bfc00(param_1);
  return uVar2;
}


