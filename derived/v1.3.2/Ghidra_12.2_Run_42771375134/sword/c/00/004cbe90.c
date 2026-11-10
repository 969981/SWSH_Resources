/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cbe90; name: FUN_004cbe90
 */


undefined4 FUN_004cbe90(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar1 = FUN_004ddcd0();
  lVar2 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar2 + 10) >> 4 & 1) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x24);
    local_30 = *(undefined4 *)(param_1 + 0x28);
    uStack_24 = *(undefined4 *)(lVar2 + 0x208);
    local_2c = 0;
    FUN_00490ac0(*(undefined8 *)PTR_DAT_02712db8,*(undefined4 *)(lVar2 + 0x1d8),&local_30,param_1);
  }
  return uVar1;
}


