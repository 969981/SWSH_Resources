/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014be210; name: FUN_014be210
 */


bool FUN_014be210(long param_1)

{
  int iVar1;
  
  FUN_0077efd0();
  iVar1 = FUN_014bfcd0(*(undefined4 *)(param_1 + 0x16c),*(undefined8 *)(param_1 + 0x78),
                       *(undefined8 *)(param_1 + 0x160),0);
  return (float)iVar1 <= *(float *)(**(long **)(param_1 + 0x58) + 0x50);
}


