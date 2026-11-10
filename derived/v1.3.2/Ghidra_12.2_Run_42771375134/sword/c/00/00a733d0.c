/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a733d0; name: FUN_00a733d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a733d0(undefined8 param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 auStack_2e0 [516];
  undefined4 local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  __src = (void *)FUN_01052d00(*param_2);
  memcpy(auStack_2e0,__src,0x2c0);
  local_dc = 0x3f800000;
  local_b0 = 0x3e8000003f800000;
  local_a8 = 0x3f8000003f800000;
  uStack_c0 = CONCAT44((float)((ulong)_DAT_02a55350 >> 0x20) + 0.0,(float)_DAT_02a55350 + 0.0);
  uStack_b8 = CONCAT44((float)((ulong)uRam0000000002a55358 >> 0x20) + 0.0,
                       (float)uRam0000000002a55358 + 0.0);
  local_a0 = 0x3f0000003f800000;
  uStack_c8 = _UNK_01d4a138;
  local_d0 = _DAT_01d4a130;
  uStack_88 = _UNK_01d4a138;
  local_90 = _DAT_01d4a130;
  local_80 = 0x3f00000041700000;
  FUN_01052cc0(*param_2,auStack_2e0);
  return;
}


