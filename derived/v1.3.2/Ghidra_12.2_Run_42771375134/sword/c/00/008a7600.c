/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a7600; name: FUN_008a7600
 */


undefined8 FUN_008a7600(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  lVar5 = FUN_00897d00();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  plVar4 = *(long **)(puVar7[0xb] + 0x10);
  uVar6 = (**(code **)(*plVar4 + 0x50))(plVar4,*(undefined4 *)(puVar7[0xb] + 0x1c));
  uVar1 = FUN_008c8330(*(undefined8 *)(param_1 + 0x78));
  lVar5 = 0;
  switch(uVar1) {
  case 0x4cf:
    break;
  case 0x4d0:
    lVar5 = 1;
    break;
  case 0x4d1:
    lVar5 = 2;
    break;
  case 0x4d2:
    lVar5 = 3;
    break;
  case 0x4d3:
    lVar5 = 4;
    break;
  case 0x4d4:
    lVar5 = 5;
    break;
  case 0x4d5:
    lVar5 = 6;
    break;
  case 0x4d6:
    lVar5 = 7;
    break;
  case 0x4d7:
    lVar5 = 8;
    break;
  case 0x4d8:
    lVar5 = 9;
    break;
  case 0x4d9:
    lVar5 = 10;
    break;
  case 0x4da:
    lVar5 = 0xb;
    break;
  case 0x4db:
    lVar5 = 0xc;
    break;
  case 0x4dc:
    lVar5 = 0xd;
    break;
  case 0x4dd:
    lVar5 = 0xe;
    break;
  case 0x4de:
    lVar5 = 0xf;
    break;
  case 0x4df:
    lVar5 = 0x10;
    break;
  case 0x4e0:
    lVar5 = 0x11;
    break;
  case 0x4e1:
    lVar5 = 0x12;
    break;
  case 0x4e2:
    lVar5 = 0x13;
    break;
  case 0x4e3:
    uVar2 = FUN_0087a740(uVar6);
    if ((uVar2 < 0x19) && ((0x1041041U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      return 0;
    }
    iVar8 = 0xc;
    goto LAB_008a7780;
  default:
    goto switchD_008a768c_default;
  }
  iVar8 = (&DAT_02144a90)[lVar5 * 2];
  iVar3 = FUN_0087a740(uVar6);
  if (iVar3 != iVar8) {
LAB_008a7780:
    FUN_0087cd50(uVar6,iVar8);
    FUN_01528a20(9);
    return 1;
  }
switchD_008a768c_default:
  return 0;
}


