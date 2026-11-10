/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090d660; name: FUN_0090d660
 */


undefined4 FUN_0090d660(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar2 = FUN_008f8d30(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6),0);
  uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  uVar4 = FUN_008df3d0(uVar4,uVar2,0);
  iVar3 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
  if (((iVar3 != 0) || (uVar5 = FUN_008e1600(uVar4), (uVar5 & 1) != 0)) ||
     (iVar3 = FUN_008e2f00(uVar4), 0x4d7ff < iVar3)) {
    bVar1 = FUN_008fa2d0(*(undefined8 *)(param_1 + 0x58),param_2);
    uVar2 = 0x104;
    if (bVar1 < 0xdc) {
      uVar2 = 0xd;
    }
    return uVar2;
  }
  if (0x36fff < iVar3) {
    return 0x17;
  }
  if (0x207ff < iVar3) {
    return 0x18;
  }
  uVar2 = 0x19;
  if (iVar3 < 0xa000) {
    uVar2 = 0x1a;
  }
  return uVar2;
}


