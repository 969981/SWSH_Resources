/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00387540; name: FUN_00387540
 */


void FUN_00387540(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_c0 [128];
  
  (**(code **)(param_3 + 0x18))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  memset(auStack_c0,0,0x80);
}


