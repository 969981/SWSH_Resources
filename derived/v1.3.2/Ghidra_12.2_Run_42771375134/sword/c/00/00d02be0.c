/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d02be0; name: FUN_00d02be0
 */


undefined8 FUN_00d02be0(long param_1)

{
  ulong uVar1;
  undefined1 auStack_29d8 [10616];
  
  if ((*(long *)(param_1 + 0x1d0) != 0) &&
     (uVar1 = FUN_007d4b30(*(long *)(param_1 + 0x1d0) + 0xd0), (uVar1 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    memset(auStack_29d8,0,0x2955);
  }
  return 0;
}


