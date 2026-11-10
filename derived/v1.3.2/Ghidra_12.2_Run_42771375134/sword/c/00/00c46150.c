/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c46150; name: FUN_00c46150
 */


undefined4 FUN_00c46150(long param_1)

{
  long lVar1;
  undefined1 auStack_56e8 [11052];
  undefined8 uStack_2bbc;
  undefined8 uStack_2bb4;
  undefined8 uStack_2bac;
  undefined8 local_2ba0;
  undefined8 local_2b98;
  undefined8 local_2b90;
  undefined8 local_2b88;
  undefined8 local_2b80;
  
  lVar1 = FUN_00c1d960();
  if ((lVar1 != 0) && (*(char *)(param_1 + 200) != '\0')) {
    uStack_2bac = 0;
    uStack_2bb4 = 0;
    uStack_2bbc = 0;
    local_2b80 = 0;
    local_2b88 = 0;
    local_2b90 = 0;
    local_2b98 = 0;
    local_2ba0 = 0;
                    /* WARNING: Subroutine does not return */
    memset(auStack_56e8,0,0x2b2a);
  }
  return 0;
}


