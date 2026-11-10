/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a73350; name: FUN_00a73350
 */


void FUN_00a73350(undefined8 param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 auStack_5b0 [448];
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined1 auStack_2f0 [448];
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  
  __src = (void *)FUN_01052d00(*param_2);
  memcpy(auStack_2f0,__src,0x2c0);
  FUN_00a73000(auStack_5b0,param_1);
  local_130 = local_3f0;
  local_128 = local_3e8;
  local_124 = local_3e4;
  FUN_01052cc0(*param_2,auStack_2f0);
  return;
}


