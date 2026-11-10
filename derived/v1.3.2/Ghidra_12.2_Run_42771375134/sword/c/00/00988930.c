/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00988930; name: FUN_00988930
 */


void FUN_00988930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint local_48;
  uint local_44;
  
  uVar7 = FUN_008daa40();
  uVar4 = FUN_008e0a00(param_2);
  uVar5 = FUN_008e0a00(param_3);
  lVar8 = FUN_008dd0a0(uVar7,4,uVar4);
  lVar9 = FUN_008dd0a0(uVar7,4,uVar5);
  if (lVar8 != 0) {
    FUN_008daae0(param_1,lVar8);
  }
  if (lVar9 != 0) {
    FUN_008daae0(param_1,lVar9);
  }
  iVar6 = FUN_008e12a0(param_2,0x12);
  uVar10 = 1;
  piVar11 = &DAT_02625ee0;
  do {
    if (piVar11[-4] == iVar6) {
      uVar10 = uVar10 - 1;
LAB_00988a0c:
      lVar8 = (**(code **)((uVar10 & 0xffffffff) * 0x10 + 0x2625ed8))(&local_48);
      if (lVar8 != 0) {
        uVar4 = FUN_008e0a00(param_2);
        uVar3 = FUN_008e1720(param_2,0xc);
        uVar2 = 7;
        if ((local_48 & 0xffff0000) != 0) {
          uVar2 = local_48 >> 0x10;
        }
        local_48 = local_48 & 0xffff;
        FUN_008daa50(param_1,4,iVar6,uVar2,uVar3,uVar4,lVar8);
      }
      break;
    }
    if (*piVar11 == iVar6) goto LAB_00988a0c;
    uVar1 = uVar10 + 1;
    uVar10 = uVar10 + 2;
    piVar11 = piVar11 + 8;
  } while (uVar1 < 0x104);
  iVar6 = FUN_008e12a0(param_3,0x12);
  uVar10 = 1;
  piVar11 = &DAT_02625ee0;
  while (piVar11[-4] != iVar6) {
    if (*piVar11 == iVar6) goto LAB_00988acc;
    uVar1 = uVar10 + 1;
    uVar10 = uVar10 + 2;
    piVar11 = piVar11 + 8;
    if (0x103 < uVar1) {
      return;
    }
  }
  uVar10 = uVar10 - 1;
LAB_00988acc:
  lVar8 = (**(code **)((uVar10 & 0xffffffff) * 0x10 + 0x2625ed8))(&local_44);
  if (lVar8 == 0) {
    return;
  }
  uVar4 = FUN_008e0a00(param_3);
  uVar3 = FUN_008e1720(param_3,0xc);
  uVar2 = 7;
  if ((local_44 & 0xffff0000) != 0) {
    uVar2 = local_44 >> 0x10;
  }
  local_44 = local_44 & 0xffff;
  FUN_008daa50(param_1,4,iVar6,uVar2,uVar3,uVar4,lVar8);
  return;
}


