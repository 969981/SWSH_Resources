/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01400ff0; name: FUN_01400ff0
 */


void FUN_01400ff0(long param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(param_1 + 0x78);
  switch(*(undefined4 *)(lVar6 + 0x5cc)) {
  case 0:
    if ((*(int *)(lVar6 + (long)*(int *)(lVar6 + 0x640) * 4 + 0x64c) != 3) &&
       (iVar2 = *(int *)(param_1 + 200), iVar4 = FUN_008c8330(), iVar2 != iVar4)) {
      uVar8 = *(undefined8 *)(param_1 + 0x88);
      uVar5 = FUN_008c8330(*(undefined8 *)(param_1 + 0x78));
      FUN_013fd390(uVar8,uVar5);
      uVar5 = FUN_008c8330(*(undefined8 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 200) = uVar5;
    }
    return;
  case 3:
    FUN_01401220(param_1);
    break;
  case 4:
    FUN_008c8450();
    *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x5cc) = 0;
    break;
  case 5:
    if (*(int *)(lVar6 + (long)*(int *)(lVar6 + 0x640) * 4 + 0x64c) == 3) {
      bVar3 = *(int *)(param_1 + 0x98) != 0;
      uVar7 = 2;
      if (!bVar3) {
        uVar7 = 1;
      }
      uVar1 = (uint)bVar3;
      if (*(int *)(param_1 + 0x9c) != 0) {
        uVar1 = uVar7;
      }
      if (*(int *)(param_1 + 0xa0) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xa4) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xa8) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xac) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xb0) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xb4) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xb8) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0xbc) != 0) {
        uVar1 = uVar1 + 1;
      }
      if (uVar1 < 10) {
        FUN_01401450(param_1);
      }
      else {
        *(undefined4 *)(lVar6 + 0x5cc) = 0;
      }
    }
    else {
      FUN_01401680(param_1);
    }
    break;
  case 6:
    FUN_01401170(param_1);
    break;
  case 7:
    FUN_014013b0(param_1);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x5cc) = 0;
  return;
}


