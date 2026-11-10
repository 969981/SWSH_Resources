/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00902df0; name: FUN_00902df0
 */


undefined8 FUN_00902df0(long param_1,undefined4 *param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  byte bVar11;
  long lVar12;
  
  if (*(short *)(param_1 + 0x336) != 0) {
    if (*(char *)(param_1 + 0x2ac) != '\0') {
LAB_00902e3c:
      *(undefined **)(param_1 + 0x560) = PTR_LAB_02717d28;
      *(undefined8 *)(param_1 + 0x568) = 0;
      *(undefined4 *)(param_1 + 0x570) = 0;
      (**(code **)(**(long **)(param_1 + 0x358) + 200))();
      return 0;
    }
    uVar7 = FUN_009c9720(*(undefined8 *)(param_1 + 0x250),2);
    if ((uVar7 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x2ac) = 1;
      goto LAB_00902e3c;
    }
    if (*(char *)(param_1 + 0x2ac) != '\0') goto LAB_00902e3c;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x358) + 0xc0))();
  switch(uVar5) {
  case 1:
    puVar10 = PTR_LAB_02717d30;
    break;
  case 2:
    uVar7 = FUN_008e1810(*(undefined8 *)(param_1 + 0x78),0x22);
    if ((uVar7 & 1) != 0) {
LAB_0090306c:
      (**(code **)(**(long **)(param_1 + 0x358) + 0x130))();
      *param_2 = 7;
      return 0;
    }
    puVar10 = PTR_LAB_02717d38;
    break;
  case 3:
    uVar7 = FUN_008e1810(*(undefined8 *)(param_1 + 0x78),0x22);
    if ((uVar7 & 1) != 0) goto LAB_0090306c;
    puVar10 = PTR_LAB_02717d40;
    break;
  case 4:
    uVar7 = (ulong)*(byte *)(param_1 + 0x348);
    if (*(byte *)(param_1 + 0x348) == *(byte *)(param_1 + 0x34b)) {
      uVar7 = FUN_008e1810(*(undefined8 *)(param_1 + 0x78),0x22);
      if (((uVar7 & 1) != 0) && (iVar6 = FUN_008f8b90(*(undefined8 *)(param_1 + 0x58)), iVar6 != 2))
      goto LAB_0090306c;
      puVar10 = PTR_LAB_02717d48;
    }
    else {
      do {
        if ((int)uVar7 == 0) {
          return 0;
        }
        *(char *)(param_1 + 0x348) = (char)uVar7 + -1;
        uVar8 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
        uVar8 = FUN_008df900(uVar8,*(undefined1 *)(param_1 + 0x2a6),*(undefined1 *)(param_1 + 0x348)
                            );
        uVar9 = FUN_00902050(param_1,uVar8,0);
        bVar2 = *(byte *)(param_1 + 0x348);
        uVar7 = (ulong)bVar2;
      } while ((uVar9 & 1) != 0);
      uVar9 = (ulong)~(uint)bVar2 & 1;
      lVar12 = 0;
      bVar11 = 0;
      if (bVar2 != 0) {
        do {
          lVar1 = param_1 + lVar12;
          lVar12 = lVar12 + 2;
          bVar11 = *(char *)(lVar1 + 0x2af) + *(char *)(lVar1 + 0x2ae) + bVar11;
        } while ((uVar7 + 1) - uVar9 != lVar12);
      }
      if ((int)uVar9 != 0) {
        bVar11 = *(char *)(param_1 + lVar12 + 0x2ae) + bVar11;
      }
      lVar12 = param_1 + (uVar7 + bVar11) * 8 + 0x410;
      iVar6 = FUN_009186f0(lVar12);
      if (iVar6 == 3) {
        FUN_009c5640(param_1 + 0x5d8);
      }
      iVar6 = FUN_009186f0(lVar12);
      if ((iVar6 == 2) && (*(char *)(param_1 + 0x2aa) == '\0')) {
        bVar2 = *(byte *)(param_1 + 0x348);
        cVar3 = *(char *)(param_1 + 0x2a6);
        cVar4 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x58));
        if ((bVar2 < 5) &&
           ((cVar3 == cVar4 && (*(char *)(param_1 + (ulong)bVar2 * 4 + 0x294) != '\0')))) {
          FUN_009c5640(param_1 + 0x5d8);
        }
        if (*(char *)(param_1 + 0x2aa) == '\0') {
          bVar2 = *(byte *)(param_1 + 0x348);
          cVar3 = *(char *)(param_1 + 0x2a6);
          cVar4 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x58));
          if ((cVar3 == cVar4) &&
             (lVar1 = param_1 + (ulong)bVar2 * 4, *(short *)(lVar1 + 0x292) != 0)) {
            *(undefined2 *)(lVar1 + 0x292) = 0;
            *(undefined1 *)(lVar1 + 0x294) = 0;
            FUN_008f99f0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
          }
        }
      }
      uVar7 = FUN_00918560(lVar12);
      if ((uVar7 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x2b7) = 0;
      }
      puVar10 = PTR_LAB_02717d10;
    }
    break;
  default:
    goto switchD_00902e90_caseD_5;
  case 7:
    FUN_009186a0(*(undefined8 *)(param_1 + 0x88));
    puVar10 = PTR_LAB_02717d20;
  }
  *(undefined **)(param_1 + 0x560) = puVar10;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined4 *)(param_1 + 0x570) = 0;
switchD_00902e90_caseD_5:
  return 0;
}


