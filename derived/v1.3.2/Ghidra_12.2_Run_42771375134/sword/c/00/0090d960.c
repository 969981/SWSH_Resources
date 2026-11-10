/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090d960; name: FUN_0090d960
 */


void FUN_0090d960(long param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
  uVar4 = FUN_008df3b0(uVar4,*(undefined1 *)(param_1 + 0x2a6));
  cVar1 = FUN_009141c0();
  if (cVar1 != '\0') {
    uVar9 = 0;
    do {
      uVar5 = FUN_00914310(uVar4,uVar9 & 0xffffffff);
      if (param_2[uVar9 + 1] != '\0') {
        FUN_008fa3a0(*(undefined8 *)(param_1 + 0x58),uVar5);
        uVar6 = FUN_008e1670(uVar5);
        uVar7 = (**(code **)(**(long **)(param_1 + 0x360) + 0x58))
                          (*(long **)(param_1 + 0x360),uVar9 & 0xffffffff);
        uVar8 = FUN_0090da70(uVar7,uVar6,uVar7);
        if ((uVar8 & 1) != 0) {
          FUN_008e5090(uVar5);
          uVar6 = *(undefined8 *)(param_1 + 0x58);
          uVar3 = FUN_008e0a00(uVar5);
          FUN_008f9f40(uVar6,uVar3);
        }
        if (*param_2 != '\0') {
          uVar6 = *(undefined8 *)(param_1 + 0x58);
          uVar3 = FUN_008e0a00(uVar5);
          FUN_008f9b20(uVar6,uVar3);
        }
      }
      uVar9 = uVar9 + 1;
      bVar2 = FUN_009141c0(uVar4);
    } while (uVar9 < bVar2);
  }
  return;
}


