/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01519980; name: FUN_01519980
 */


uint FUN_01519980(long param_1)

{
  uint uVar1;
  undefined1 auStack_290 [208];
  undefined1 auStack_1c0 [208];
  undefined1 auStack_f0 [208];
  
  FUN_006c5890(auStack_f0);
  memcpy(auStack_1c0,(void *)(param_1 + 0xc0),0xd0);
  memcpy(auStack_290,auStack_f0,0xd0);
  uVar1 = FUN_006c58c0(auStack_1c0,auStack_290);
  return ~uVar1 & 1;
}


