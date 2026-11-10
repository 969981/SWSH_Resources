/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01310200; name: FUN_01310200
 */


uint FUN_01310200(long param_1)

{
  uint uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = *(undefined8 *)(param_1 + 0x180);
  uStack_18 = *(undefined8 *)(param_1 + 0x188);
  local_30 = 0x7812cfa83cd0147f;
  uStack_28 = 0;
  uVar1 = FUN_012ecf40(&local_20,&local_30);
  return uVar1 & 1;
}


