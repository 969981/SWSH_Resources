/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00905270; name: FUN_00905270
 */


byte FUN_00905270(long param_1,undefined8 param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  
  sVar2 = FUN_008e2d30(param_2,*(undefined8 *)(param_1 + 0xe0));
  uVar4 = FUN_00932ae0(*(undefined8 *)(param_1 + 0xe0),2);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  uVar4 = FUN_008e1810(param_2,0x20);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  uVar4 = FUN_008e1810(param_2,0x15);
  bVar1 = 1;
  if ((sVar2 != 0x116) && ((uVar4 & 1) == 0)) {
    iVar3 = FUN_008e12a0(param_2,0x13);
    if (iVar3 != 0x1a) {
      uVar4 = FUN_008e29c0(param_2,2);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      uVar4 = FUN_008e1810(param_2,0x1f);
      if ((uVar4 & 1) == 0) {
        bVar1 = FUN_008e1810(param_2,0x21);
        return sVar2 != 0x21d & (bVar1 ^ 1);
      }
      return 0;
    }
    bVar1 = 0;
  }
  return bVar1;
}


