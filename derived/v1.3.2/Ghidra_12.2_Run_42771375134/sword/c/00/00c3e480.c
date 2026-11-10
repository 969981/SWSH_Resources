/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3e480; name: FUN_00c3e480
 */


void FUN_00c3e480(void)

{
  long lVar1;
  undefined1 auStack_5f48 [11052];
  undefined8 uStack_341c;
  undefined8 uStack_3414;
  undefined8 uStack_340c;
  undefined8 local_3400;
  undefined8 local_33f8;
  undefined8 local_33f0;
  undefined8 local_33e8;
  undefined8 local_33e0;
  int local_8a0 [530];
  long local_58;
  
  lVar1 = FUN_00c1d960();
  if (((lVar1 != 0) && (FUN_00bd9f00(local_8a0), local_8a0[0] != 0)) && (local_58 == 0x644)) {
    uStack_340c = 0;
    uStack_3414 = 0;
    uStack_341c = 0;
    local_33e0 = 0;
    local_33e8 = 0;
    local_33f0 = 0;
    local_33f8 = 0;
    local_3400 = 0;
                    /* WARNING: Subroutine does not return */
    memset(auStack_5f48,0,0x2b2a);
  }
  return;
}


