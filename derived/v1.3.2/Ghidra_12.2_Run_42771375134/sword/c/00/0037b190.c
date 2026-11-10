/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0037b190; name: FUN_0037b190
 */


void FUN_0037b190(long param_1,undefined8 param_2,int param_3)

{
  undefined1 local_c0 [128];
  
  local_c0[0] = 0;
  FUN_0037da60(param_2,param_3,param_1 + 0x1d8,&PTR_DAT_025e7d30,local_c0);
  FUN_0037cf30(param_2,param_1 + 0x240,param_3 + 4);
  FUN_0037d150(param_2,param_1 + 0x260,param_3 + 5);
  FUN_0037d380(param_2,param_1 + 0x280,param_3 + 6);
                    /* WARNING: Subroutine does not return */
  memset(local_c0,0,0x80);
}


