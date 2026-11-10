/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a730f0; name: FUN_00a730f0
 */


void FUN_00a730f0(undefined8 param_1,undefined8 *param_2)

{
  void *__src;
  undefined1 auStack_2f0 [164];
  undefined8 local_24c;
  undefined8 local_244;
  undefined4 local_23c;
  
  __src = (void *)FUN_01052d00(*param_2);
  memcpy(auStack_2f0,__src,0x2c0);
  local_244 = 0x3e4ccccd;
  local_24c = 0;
  local_23c = 0xffffffff;
  FUN_01052cc0(*param_2,auStack_2f0);
  return;
}


