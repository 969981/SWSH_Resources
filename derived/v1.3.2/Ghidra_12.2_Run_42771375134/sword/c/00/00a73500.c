/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a73500; name: FUN_00a73500
 */


void FUN_00a73500(undefined8 param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 auStack_5b0 [149];
  undefined1 local_51b;
  undefined4 local_518;
  undefined4 local_514;
  undefined1 auStack_2f0 [149];
  undefined1 local_25b;
  undefined4 local_258;
  undefined4 local_254;
  
  __src = (void *)FUN_01052d00(*param_2);
  memcpy(auStack_2f0,__src,0x2c0);
  FUN_00a73000(auStack_5b0,param_1);
  local_25b = local_51b;
  local_258 = local_518;
  local_254 = local_514;
  FUN_01052cc0(*param_2,auStack_2f0);
  return;
}


