/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db81b0; name: FUN_00db81b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00db81b0(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 auStack_38 [8];
  
  lVar2 = FUN_00db9800(*(undefined8 *)PTR_DAT_027194d8,auStack_38);
  if (lVar2 == 0) {
    lVar2 = -0x340d631b7bddd9bb;
    lVar4 = FUN_00794780(param_1);
  }
  else {
    if (((param_3 & 1) != 0) && (uVar3 = FUN_00dc7740(lVar2), (uVar3 & 1) != 0)) {
      return;
    }
    lVar2 = *(long *)(lVar2 + 0x3a8);
    lVar4 = FUN_00794780(param_1);
  }
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_019d6820(lVar4,0);
  if (lVar5 == 0) {
    return;
  }
  pbVar6 = *(byte **)(*(long *)(lVar5 + 0x238) + 0x310);
  if (pbVar6 == (byte *)0x0) {
    return;
  }
  if ((*pbVar6 >> 2 & 1) == 0) {
    return;
  }
  if (lVar2 == -0x2079b41ee02e06fe) {
    if (param_2 < 7) {
      uVar1 = 1 << (ulong)(param_2 & 0x1f);
      if ((uVar1 & 0xe) == 0) {
        if ((uVar1 & 0x61) == 0) {
          uVar8 = (undefined4)_UNK_01d4a0b8;
          uVar7 = _DAT_01d4a0b0;
          goto switchD_00db82fc_caseD_1;
        }
LAB_00db82cc:
        uVar8 = (undefined4)_UNK_01d4ad48;
        uVar7 = _DAT_01d4ad40;
        goto switchD_00db82fc_caseD_1;
      }
LAB_00db830c:
      uVar8 = (undefined4)_UNK_01d4a7b8;
      uVar7 = _DAT_01d4a7b0;
      goto switchD_00db82fc_caseD_1;
    }
  }
  else {
    if (lVar2 != -0x2079b51ee02e08b1) {
      uVar8 = (undefined4)_UNK_01d4a0c8;
      uVar7 = _DAT_01d4a0c0;
      switch(param_2) {
      case 0:
      case 5:
        uVar8 = (undefined4)_UNK_01d4a9c8;
        uVar7 = _DAT_01d4a9c0;
        break;
      case 1:
      case 2:
        break;
      case 3:
        uVar8 = (undefined4)_UNK_01d4b948;
        uVar7 = _DAT_01d4b940;
        break;
      case 4:
        uVar8 = (undefined4)_UNK_01d4a1c8;
        uVar7 = _DAT_01d4a1c0;
        break;
      case 6:
        uVar8 = (undefined4)_UNK_01d4a9b8;
        uVar7 = _DAT_01d4a9b0;
        break;
      default:
        goto switchD_00db82fc_default;
      }
      goto switchD_00db82fc_caseD_1;
    }
    if (param_2 < 7) {
      uVar1 = 1 << (ulong)(param_2 & 0x1f);
      if ((uVar1 & 0xe) != 0) {
        uVar8 = (undefined4)_UNK_01d4a9a8;
        uVar7 = _DAT_01d4a9a0;
        goto switchD_00db82fc_caseD_1;
      }
      if ((uVar1 & 0x61) != 0) goto LAB_00db82cc;
      goto LAB_00db830c;
    }
  }
switchD_00db82fc_default:
  uVar8 = (undefined4)_UNK_01d4a138;
  uVar7 = _DAT_01d4a130;
switchD_00db82fc_caseD_1:
  *(ulong *)(lVar4 + 0x108) = CONCAT44(*(undefined4 *)(lVar4 + 0x10c),uVar8);
  *(undefined8 *)(lVar4 + 0x100) = uVar7;
  return;
}


