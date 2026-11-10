/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cce9f0; name: FUN_00cce9f0
 */


uint FUN_00cce9f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_28;
  
  local_28 = 0x8f0ecd764b05bb0b;
  if (*(long *)(param_1 + 0x2b0) == 0) {
    uVar1 = 1;
    lVar3 = 0;
  }
  else {
    uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_28);
    lVar3 = *(long *)(param_1 + 0x2b0);
  }
  local_28 = 0xcf36fe66ab392703;
  if (lVar3 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_0167bc20(lVar3,&local_28);
  }
  return uVar1 & uVar2 & 1;
}


