/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01522310; name: FUN_01522310
 */


undefined8 FUN_01522310(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar11 = 0;
  do {
    if (uVar11 != 0) {
      uVar3 = FUN_00888d70(uVar11);
      uVar3 = uVar3 & 0xffff;
      uVar4 = FUN_00888c50(uVar3,0xe);
      uVar5 = 0x3c;
      plVar7 = (long *)(param_1 + 0x1358);
      switch(uVar4) {
      case 1:
        uVar5 = 0x1e;
        plVar7 = (long *)(param_1 + 0x1360);
      case 0:
        lVar6 = *plVar7;
        break;
      case 2:
        uVar5 = 0x14;
        lVar6 = *(long *)(param_1 + 0x1368);
        if (lVar6 == 0) goto switchD_0152245c_default;
        goto LAB_01522470;
      case 3:
        uVar5 = 0x50;
        lVar6 = *(long *)(param_1 + 0x1370);
        break;
      case 4:
        uVar5 = 0x226;
        lVar6 = *(long *)(param_1 + 0x1378);
        break;
      case 5:
        uVar5 = 0xd2;
        lVar6 = *(long *)(param_1 + 0x1380);
        break;
      case 6:
        uVar5 = 100;
        lVar6 = *(long *)(param_1 + 5000);
        break;
      case 7:
        uVar5 = 100;
        lVar6 = *(long *)(param_1 + 0x1390);
        break;
      case 8:
        uVar5 = 0x40;
        lVar6 = *(long *)(param_1 + 0x1398);
        break;
      default:
        goto switchD_0152245c_default;
      }
      if (lVar6 != 0) {
LAB_01522470:
        uVar8 = 0;
        uVar9 = 0xffffffff;
        do {
          uVar10 = *(uint *)(lVar6 + uVar8 * 4);
          uVar1 = uVar10 & 0x7fff;
          if (uVar1 == uVar3) goto LAB_015224cc;
          uVar10 = *(uint *)(lVar6 + uVar8 * 4 + 4);
          uVar2 = (uint)uVar8;
          if (uVar1 != 0 || uVar9 != 0xffffffff) {
            uVar2 = uVar9;
          }
          if ((uVar10 & 0x7fff) == uVar3) goto LAB_015224cc;
          if ((uVar10 & 0x7fff) == 0 && uVar2 == 0xffffffff) {
            uVar2 = (uint)uVar8 + 1;
          }
          uVar8 = uVar8 + 2;
          uVar9 = uVar2;
        } while (uVar8 < uVar5);
        if (uVar2 != 0xffffffff) {
          uVar10 = *(uint *)(lVar6 + (ulong)uVar2 * 4);
LAB_015224cc:
          if ((uVar10 & 0x3fff8000) != 0) {
            return 1;
          }
        }
      }
    }
switchD_0152245c_default:
    uVar11 = uVar11 + 1;
    if (0x1a < uVar11) {
      return 0;
    }
  } while( true );
}


