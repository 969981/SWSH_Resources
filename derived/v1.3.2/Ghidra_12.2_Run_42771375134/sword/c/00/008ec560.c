/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec560; name: FUN_008ec560
 */


uint FUN_008ec560(undefined8 param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == '\x03') {
    uVar4 = FUN_008e29c0(param_1,0xe);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  else {
    if (param_2 != '\x04') {
      return 0;
    }
    uVar4 = FUN_008e29c0(param_1,5);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    uVar4 = FUN_008e29c0(param_1,8);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    uVar4 = FUN_008e29c0(param_1,4);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  iVar3 = FUN_008e12a0(param_1,0x10);
  iVar2 = iVar3 + 0xf;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  uVar1 = iVar2 >> 4;
  if ((uVar1 & 0xffff) == 0) {
    uVar1 = 1;
  }
  return uVar1;
}


