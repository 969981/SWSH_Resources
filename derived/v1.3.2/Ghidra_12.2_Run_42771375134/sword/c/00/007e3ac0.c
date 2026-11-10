/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e3ac0; name: FUN_007e3ac0
 */


bool FUN_007e3ac0(long param_1,long param_2,undefined4 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_110 [24];
  byte *local_f8;
  byte *local_38;
  
  if (*(long *)(param_1 + 8) == 0) {
    return false;
  }
  FUN_008468d0(auStack_110);
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x20))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_2 + 8),param_3,auStack_110);
  if ((uVar2 & 1) != 0) {
    local_38 = *(byte **)(local_f8 + 0x10);
    if ((*local_f8 & 1) == 0) {
      local_38 = local_f8 + 1;
    }
    lVar3 = FUN_007f7570(*(long *)(param_1 + 0x20) + 0x118,&local_38);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) {
      lVar3 = FUN_007e4550(param_1,auStack_110);
      bVar1 = lVar3 != 0;
      goto LAB_007e3b68;
    }
  }
  bVar1 = false;
LAB_007e3b68:
  FUN_00846d50(auStack_110);
  return bVar1;
}


