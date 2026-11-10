/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a732e0; name: FUN_00a732e0
 */


void FUN_00a732e0(undefined8 param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 auStack_5b0 [432];
  undefined4 local_400;
  undefined4 local_3fc;
  undefined1 auStack_2f0 [432];
  undefined4 local_140;
  undefined4 local_13c;
  
  __src = (void *)FUN_01052d00(*param_2);
  memcpy(auStack_2f0,__src,0x2c0);
  FUN_00a73000(auStack_5b0,param_1);
  local_140 = local_400;
  local_13c = local_3fc;
  FUN_01052cc0(*param_2,auStack_2f0);
  return;
}


