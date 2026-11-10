/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa1d0; name: FUN_008fa1d0
 */


void FUN_008fa1d0(long param_1,undefined8 param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_008ee4a0(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),param_3);
  uVar2 = FUN_009141c0(param_2);
  if ((int)uVar1 < (int)(uVar2 & 0xff)) {
    do {
      uVar4 = FUN_00914310(param_2,uVar1);
      iVar3 = FUN_008e12a0(uVar4,0x12);
      if (iVar3 == 0x95) {
        FUN_008e41e0(uVar4);
      }
      uVar1 = uVar1 + 1;
    } while ((uVar2 & 0xff) != uVar1);
  }
  return;
}


