/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e8470; name: FUN_009e8470
 */


uint FUN_009e8470(long param_1,uint param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  iVar2 = FUN_008e2240(*(undefined8 *)(param_1 + 0x78),param_3);
  uVar5 = FUN_008e0a10(*(undefined8 *)(param_1 + 0x78));
  if (((uVar5 & 1) != 0) || (*(char *)(param_1 + 0xce) != '\0')) {
    iVar2 = FUN_00945420(iVar2);
  }
  uVar4 = param_2;
  if (iVar2 != 0) {
    uVar3 = FUN_00880f80(iVar2);
    uVar5 = FUN_008f9440(*(undefined8 *)(param_1 + 0x68),param_2,*(undefined1 *)(param_1 + 0xc2));
    switch(uVar3) {
    case 1:
      if ((uVar5 & 1) != 0) {
        return param_2;
      }
    case 7:
      uVar4 = (uint)*(byte *)(param_1 + 0xc2);
      break;
    case 2:
      if ((uVar5 & 1) == 0) {
        uVar1 = *(undefined1 *)(param_1 + 0xc2);
        uVar3 = FUN_008fb3c0(*(undefined8 *)(param_1 + 0x68),uVar1);
        uVar4 = FUN_009e85a0(param_1,param_3,uVar1,uVar3);
        if ((uVar4 & 0xff) == (uint)*(byte *)(param_1 + 0xc2) || (uVar4 & 0xff) == 5) {
          uVar4 = param_2;
        }
      }
      break;
    case 3:
      if ((uVar5 & 1) != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x68);
        uVar3 = FUN_008fb3c0(uVar6,*(undefined1 *)(param_1 + 0xc2));
        uVar3 = FUN_008fa0e0(uVar6,uVar3);
        uVar4 = FUN_009e85a0(param_1,param_3,*(undefined1 *)(param_1 + 0xc2),uVar3);
        if ((uVar4 & 0xff) != 5) {
          param_2 = uVar4;
        }
        uVar4 = param_2;
      }
    }
  }
  return uVar4;
}


