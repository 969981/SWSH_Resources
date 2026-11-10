/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a73470; name: FUN_00a73470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a73470(undefined8 param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 auStack_2f0 [628];
  undefined8 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  __src = (void *)FUN_01052d00(*param_2);
  memcpy(auStack_2f0,__src,0x2c0);
  local_7c = 0x300000000;
  local_70 = CONCAT44((float)((ulong)_DAT_02a55350 >> 0x20) + 0.0,(float)_DAT_02a55350 + 0.0);
  uStack_68 = CONCAT44((float)((ulong)uRam0000000002a55358 >> 0x20) + 0.0,
                       (float)uRam0000000002a55358 + 0.0);
  local_50 = 0x3f8000003f800000;
  uStack_58 = _UNK_01d4a138;
  local_60 = _DAT_01d4a130;
  local_48 = 0x3f8000003f800000;
  local_40 = 0;
  FUN_01052cc0(*param_2,auStack_2f0);
  return;
}


