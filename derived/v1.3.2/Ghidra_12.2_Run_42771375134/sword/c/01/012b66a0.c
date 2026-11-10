/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b66a0; name: FUN_012b66a0
 */


void FUN_012b66a0(long param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x54) == '\0')) {
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    if ((int)param_2 < 1) {
      FUN_0087d480(uVar4,-param_2 & 0xff);
      return;
    }
    iVar2 = FUN_00878a80(uVar4);
    if (iVar2 == 0xb) {
      param_2 = param_2 + 1;
    }
    iVar2 = FUN_012bacf0(auStack_38);
    iVar3 = FUN_00878e20(uVar4,7);
    if (iVar3 == iVar2) {
      param_2 = param_2 + 1;
    }
    sVar1 = FUN_008787f0(uVar4);
    if (sVar1 == 0xda) {
      param_2 = (int)(param_2 * 0xf + 9) / 10;
    }
    FUN_0087d430(*(undefined8 *)(param_1 + 0x58),param_2 & 0xff);
  }
  return;
}


