/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00291ed0; name: FUN_00291ed0
 */


void FUN_00291ed0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auStack_e0 [128];
  
                    /* WARNING: Subroutine does not return */
  memset(auStack_e0 + (0x80 - ((param_3 & 0xffffffff) + 0xf & 0x1fffffff0)),0,param_3 & 0xffffffff);
}


