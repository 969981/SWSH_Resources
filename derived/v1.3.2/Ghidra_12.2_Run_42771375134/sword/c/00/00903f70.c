/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00903f70; name: FUN_00903f70
 */


undefined8 FUN_00903f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_48 [8];
  
  bVar1 = FUN_008e2150(param_2);
  if (bVar1 != 0) {
    iVar4 = 0;
    uVar9 = 0;
    iVar10 = 0;
    do {
      uVar3 = FUN_008e2240(param_2,uVar9);
      uVar6 = FUN_009041b0(param_1,param_2,uVar3,0);
      if (((uVar6 & 1) == 0) && (sVar2 = FUN_008e2480(param_2,uVar9), sVar2 != 0)) {
        iVar10 = iVar10 + 1;
        iVar4 = FUN_008e2240(param_2,uVar9);
      }
      uVar9 = uVar9 + 1;
    } while (bVar1 != uVar9);
    if (iVar10 != 0) {
      if (iVar10 != 1) {
        return 0;
      }
      if (iVar4 != 0x2eb) {
        return 0;
      }
      FUN_008e2d10(param_2);
      uVar6 = FUN_00888fc0();
      if ((uVar6 & 1) != 0) {
        return 0;
      }
    }
  }
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  uVar3 = FUN_008ecc30(uVar8,uVar7,param_2,0xa5,auStack_48);
  uVar5 = FUN_008e0a00(param_2);
  FUN_00918500(param_3,uVar5,0xa5,uVar3,0,0);
  return 1;
}


