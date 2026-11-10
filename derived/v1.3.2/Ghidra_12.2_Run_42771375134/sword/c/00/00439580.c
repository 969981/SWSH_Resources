/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00439580; name: FUN_00439580
 */


void FUN_00439580(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_50;
  undefined1 local_48;
  
  lVar1 = FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,param_2,0);
  if (lVar1 != 0) {
    local_50 = 0x400000000;
    local_48 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_5c = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
                    /* WARNING: Subroutine does not return */
    memset(auStack_110,0,0x5e);
  }
  return;
}


