/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0018b780; name: FUN_0018b780
 */


undefined8 FUN_0018b780(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_f70 [3840];
  
  *param_3 = 0;
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    memset(auStack_f70,0,0x3c0);
  }
  return 1;
}


