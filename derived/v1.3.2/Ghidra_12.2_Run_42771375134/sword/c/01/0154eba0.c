/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154eba0; name: FUN_0154eba0
 */


void FUN_0154eba0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 local_2370 [2247];
  undefined4 local_54;
  
  puVar1 = PTR_DAT_0272ad80;
  local_54 = 0;
  local_2370[0] = 0;
  uVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,local_2370);
  FUN_01502d70(uVar2,puVar1,&local_54);
                    /* WARNING: Subroutine does not return */
  memset(local_2370,0,0x2304);
}


