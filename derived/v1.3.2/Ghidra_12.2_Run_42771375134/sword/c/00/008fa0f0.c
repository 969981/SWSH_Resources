/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa0f0; name: FUN_008fa0f0
 */


void FUN_008fa0f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar1 = FUN_00914490(param_2);
  iVar2 = FUN_008ee4a0(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),param_3);
  uVar3 = FUN_009141c0(param_2);
  if (iVar2 < (int)(uVar3 & 0xff)) {
    do {
      uVar6 = FUN_00914310(param_2,iVar2);
      iVar4 = FUN_008e12a0(uVar6,0x13);
      if (iVar4 == 0x95) {
        if (iVar2 < (int)(uVar1 & 0xff)) {
          FUN_00914330(param_2,uVar1 & 0xff);
          uVar5 = FUN_008e0a00();
          FUN_008e1690(uVar6,uVar5);
        }
        else {
          FUN_008e41e0(uVar6);
        }
      }
      iVar2 = iVar2 + 1;
      uVar3 = FUN_009141c0(param_2);
    } while (iVar2 < (int)(uVar3 & 0xff));
  }
  return;
}


