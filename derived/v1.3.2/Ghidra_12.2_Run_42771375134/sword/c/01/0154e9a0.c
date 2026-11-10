/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154e9a0; name: FUN_0154e9a0
 */


void FUN_0154e9a0(uint param_1)

{
  undefined8 uVar1;
  undefined4 local_2348 [2242];
  undefined4 local_34;
  
  local_34 = 0;
  local_2348[0] = 0;
  uVar1 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,local_2348);
  FUN_01502d70(uVar1,PTR_DAT_0272ad80 + (ulong)param_1 * 4,&local_34);
                    /* WARNING: Subroutine does not return */
  memset(local_2348,0,0x2304);
}


