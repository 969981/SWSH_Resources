/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a73230; name: FUN_00a73230
 */


void FUN_00a73230(undefined8 param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 auStack_5b0 [76];
  undefined4 local_564;
  undefined8 local_560;
  undefined4 local_558;
  undefined4 local_554;
  undefined8 local_550;
  undefined4 local_548;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined1 local_530;
  undefined1 auStack_2f0 [76];
  undefined4 local_2a4;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined1 local_270;
  
  __src = (void *)FUN_01052d00(*param_2);
  memcpy(auStack_2f0,__src,0x2c0);
  FUN_00a73000(auStack_5b0,param_1);
  local_288 = local_548;
  local_284 = local_544;
  local_2a4 = local_564;
  local_2a0 = local_560;
  local_290 = local_550;
  local_298 = local_558;
  local_294 = local_554;
  local_27c = local_53c;
  local_280 = local_540;
  local_270 = local_530;
  FUN_01052cc0(*param_2,auStack_2f0);
  return;
}


