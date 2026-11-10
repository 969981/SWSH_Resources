/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a731d0; name: FUN_00a731d0
 */


void FUN_00a731d0(undefined8 param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 auStack_2e0 [248];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  
  __src = (void *)FUN_01052d00(*param_2);
  memcpy(auStack_2e0,__src,0x2c0);
  local_1e8 = 0;
  uStack_1e0 = 0x41a0000041f00000;
  local_1d8 = 0x3f8000003f800000;
  uStack_1d0 = 0;
  FUN_01052cc0(*param_2,auStack_2e0);
  return;
}


