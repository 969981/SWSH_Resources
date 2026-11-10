/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e8c10; name: FUN_012e8c10
 */


uint FUN_012e8c10(void)

{
  uint uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20 [16];
  
  local_20 = FUN_0130fa00();
  local_30 = 0x3e836ebcc16920e2;
  uStack_28 = 0;
  uVar1 = FUN_012ecf40(local_20,&local_30);
  return uVar1 & 1;
}


