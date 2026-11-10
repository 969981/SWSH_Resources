/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009115a0; name: FUN_009115a0
 */


undefined8 FUN_009115a0(long param_1)

{
  short sVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_008fa510(*(undefined8 *)(param_1 + 0x60));
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar3 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    sVar1 = FUN_00914660(uVar3,0);
    if (sVar1 == 0) {
      return 1;
    }
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar3 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    sVar1 = FUN_00914660(uVar3,1);
    if (sVar1 == 0) {
      return 1;
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar3 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    sVar1 = FUN_00914660(uVar3,2);
    if (sVar1 == 0) {
      return 1;
    }
  }
  if (*(long *)(param_1 + 200) != 0) {
    uVar3 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    sVar1 = FUN_00914660(uVar3,3);
    if (sVar1 == 0) {
      return 1;
    }
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    uVar3 = FUN_00931a00(*(undefined8 *)(param_1 + 0x68));
    sVar1 = FUN_00914660(uVar3,4);
    if (sVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


