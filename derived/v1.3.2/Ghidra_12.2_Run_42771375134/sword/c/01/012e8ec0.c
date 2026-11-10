/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8ec0; name: FUN_012e8ec0
 */


uint FUN_012e8ec0(void)

{
  uint uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20 [16];
  
  local_20 = FUN_0130fa00();
  local_30 = 0xcd3374a0b8dcd2f8;
  uStack_28 = 0;
  uVar1 = FUN_012ecf40(local_20,&local_30);
  return uVar1 & 1;
}


