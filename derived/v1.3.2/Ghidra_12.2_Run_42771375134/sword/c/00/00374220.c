/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00374220; name: FUN_00374220
 */


void FUN_00374220(long param_1,undefined8 param_2,int param_3)

{
  undefined1 local_c0 [128];
  
  local_c0[0] = 0;
  FUN_00376b80(param_2,param_3,param_1 + 0x1d8,&PTR_DAT_025e7d30,local_c0);
  FUN_00375ff0(param_2,param_1 + 0x240,param_3 + 4);
  FUN_00376200(param_2,param_1 + 0x260,param_3 + 5);
  FUN_00376410(param_2,param_1 + 0x280,param_3 + 6);
                    /* WARNING: Subroutine does not return */
  memset(local_c0,0,0x80);
}


