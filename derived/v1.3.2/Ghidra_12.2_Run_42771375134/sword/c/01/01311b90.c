/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01311b90; name: FUN_01311b90
 */


undefined8 FUN_01311b90(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x40))();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = param_1[0xc];
  lVar1 = param_1[0xd];
  if (lVar3 == lVar1) {
    return 0;
  }
  do {
    uVar2 = FUN_012ecf40(lVar3,param_2);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    lVar3 = lVar3 + 0x90;
  } while (lVar1 != lVar3);
  return 0;
}


