/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011c940; name: FUN_0011c940
 */


long FUN_0011c940(undefined8 *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  if (0x4000 < uVar1) {
    return -1;
  }
  lVar2 = param_1[1];
  if ((lVar2 == 0) ||
     (uVar3 = (ulong)*(uint *)(param_1 + 2), 0x4000 < *(uint *)(param_1 + 2) + uVar1)) {
    lVar2 = FUN_00112390(*param_1);
    param_1[1] = lVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = 0;
  }
  *(uint *)(param_1 + 2) = (int)uVar3 + uVar1;
  return lVar2 + uVar3;
}


