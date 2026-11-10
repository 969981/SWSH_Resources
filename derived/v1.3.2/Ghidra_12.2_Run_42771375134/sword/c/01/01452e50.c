/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01452e50; name: FUN_01452e50
 */


void FUN_01452e50(long param_1)

{
  undefined1 auStack_48 [16];
  undefined8 local_38;
  char *local_30;
  undefined8 local_28;
  undefined1 auStack_20 [16];
  
  local_38 = 0x5d8ade5816cc33ea;
  local_30 = "initialJob";
  local_28 = 10;
  FUN_012b4250(auStack_20,param_1 + 0x110,&local_38);
  local_38 = 0xc9ce95a5ad11e38a;
  local_30 = "value";
  local_28 = 5;
  FUN_012b4250(auStack_48,auStack_20,&local_38);
  FUN_012b4420(auStack_48,0);
  return;
}


