/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a0d90; name: FUN_014a0d90
 */


void FUN_014a0d90(long param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  *(undefined4 *)(param_1 + 0x600) = 0xffffffff;
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5f0),1);
  uVar1 = *(undefined8 *)(param_1 + 0x5e8);
  local_28 = FUN_016b8190(uVar1);
  FUN_016b7990(uVar1,&local_28,1,0);
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  return;
}


