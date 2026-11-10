/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a73160; name: FUN_00a73160
 */


void FUN_00a73160(undefined8 param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 auStack_2f0 [188];
  undefined8 local_234;
  undefined8 local_22c;
  undefined8 local_224;
  undefined4 local_21c;
  
  __src = (void *)FUN_01052d00(*param_2);
  memcpy(auStack_2f0,__src,0x2c0);
  local_234 = 0;
  local_22c = 0x3f800000;
  local_224 = 0x3f8000003f800000;
  local_21c = 0x3f800000;
  FUN_01052cc0(*param_2,auStack_2f0);
  return;
}


