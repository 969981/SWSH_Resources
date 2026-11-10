/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3e5b0; name: FUN_00c3e5b0
 */


undefined4 FUN_00c3e5b0(void)

{
  long lVar1;
  undefined1 auStack_5f38 [11052];
  undefined8 uStack_340c;
  undefined8 uStack_3404;
  undefined8 uStack_33fc;
  undefined8 local_33f0;
  undefined8 local_33e8;
  undefined8 local_33e0;
  undefined8 local_33d8;
  undefined8 local_33d0;
  int local_890 [530];
  long local_48;
  
  lVar1 = FUN_00c1d960();
  if (((lVar1 != 0) && (FUN_00bd9f00(local_890), local_890[0] != 0)) && (local_48 == 0x644)) {
    uStack_33fc = 0;
    uStack_3404 = 0;
    uStack_340c = 0;
    local_33d0 = 0;
    local_33d8 = 0;
    local_33e0 = 0;
    local_33e8 = 0;
    local_33f0 = 0;
                    /* WARNING: Subroutine does not return */
    memset(auStack_5f38,0,0x2b2a);
  }
  return 0;
}


