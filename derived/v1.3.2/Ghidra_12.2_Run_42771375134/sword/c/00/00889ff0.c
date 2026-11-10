/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00889ff0; name: FUN_00889ff0
 */


void FUN_00889ff0(long param_1,undefined8 *param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_110 [192];
  
  iVar3 = FUN_008783b0(param_2[1]);
  uVar4 = FUN_008783c0(param_2[1]);
  iVar5 = FUN_008783b0(*param_2);
  uVar6 = FUN_008783c0(*param_2);
  if ((iVar3 == 0x84) || (iVar5 == 0x84)) {
    iVar3 = FUN_008783b0(param_2[1]);
    if (iVar3 != 0x84) {
      param_2 = param_2 + 1;
    }
    uVar7 = *param_2;
  }
  else {
    FUN_0087f4c0(auStack_110);
    FUN_0087f540(auStack_110,iVar3,uVar4);
    iVar3 = FUN_0087f680(auStack_110,0x31);
    FUN_0087f510(auStack_110);
    FUN_0087f4c0(auStack_110);
    FUN_0087f540(auStack_110,iVar5,uVar6);
    iVar5 = FUN_0087f680(auStack_110,0x31);
    FUN_0087f510(auStack_110);
    uVar7 = param_2[1];
    if (iVar3 == iVar5) {
      sVar1 = FUN_008787f0(uVar7);
      if (sVar1 == 0xe5) {
        uVar4 = FUN_008783b0(uVar7);
        uVar6 = FUN_008783c0(uVar7);
        FUN_008649f0(uVar4,uVar6);
        uVar2 = FUN_00864a10(0x33);
        iVar3 = FUN_00864a10(0x34);
        if (iVar3 != 0) {
          *(undefined2 *)(param_1 + 0x2c) = uVar2;
          return;
        }
      }
      uVar7 = *param_2;
    }
    else {
      iVar3 = FUN_008783b0(uVar7);
      if (iVar3 != 0x84) {
        param_2 = param_2 + 1;
      }
      uVar7 = *param_2;
    }
  }
  sVar1 = FUN_008787f0(uVar7);
  if (sVar1 == 0xe5) {
    uVar4 = FUN_008783b0(uVar7);
    uVar6 = FUN_008783c0(uVar7);
    FUN_008649f0(uVar4,uVar6);
    uVar2 = FUN_00864a10(0x33);
    iVar3 = FUN_00864a10(0x34);
    if (iVar3 != 0) {
      *(undefined2 *)(param_1 + 0x2c) = uVar2;
    }
  }
  return;
}


