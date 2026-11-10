/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00902610; name: FUN_00902610
 */


void FUN_00902610(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  
  iVar2 = FUN_008f8110(*(undefined8 *)(param_1 + 0x58));
  if ((iVar2 == 2) && (cVar1 = FUN_009141d0(*(undefined8 *)(param_1 + 0x340)), cVar1 == '\0')) {
    FUN_009186a0(param_2);
    return;
  }
  uVar7 = FUN_00902050(param_1,param_3,param_2);
  if ((uVar7 & 1) == 0) {
    uVar3 = FUN_008e0a10(param_3);
    uVar3 = FUN_00902900(param_1,param_3,uVar3 & 1,auStack_4c);
    if ((uVar3 & 0xff) == 4) {
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      uVar8 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
      uVar4 = FUN_008ecc30(uVar9,uVar8,param_3,0xa5,auStack_48);
      uVar5 = FUN_008e0a00(param_3);
      uVar6 = 0xa5;
    }
    else {
      uVar6 = FUN_008e2240(param_3,uVar3);
      uVar7 = FUN_008e0a10(param_3);
      uVar4 = uVar6;
      if ((uVar7 & 1) != 0) {
        uVar4 = FUN_00945420(uVar6);
      }
      uVar9 = *(undefined8 *)(param_1 + 0x58);
      uVar8 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
      uVar4 = FUN_008ecc30(uVar9,uVar8,param_3,uVar4,param_1 + 0xe8);
      uVar5 = FUN_008e0a00(param_3);
    }
    FUN_00918500(param_2,uVar5,uVar6,uVar4,0,0);
  }
  return;
}


