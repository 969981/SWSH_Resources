/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00906050; name: FUN_00906050
 */


/* WARNING: Removing unreachable block (ram,0x00906380) */

undefined8 FUN_00906050(long param_1,undefined4 *param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  byte bVar12;
  undefined1 local_60 [4];
  undefined1 auStack_5c [4];
  byte *local_58;
  
  uVar6 = 1;
  switch(*param_2) {
  case 0:
    FUN_009c51c0(*(undefined8 *)(param_1 + 0xf0),&local_58);
    if (*local_58 == 0) {
      *(undefined1 *)(param_1 + 0x2b9) = 0;
LAB_009062e4:
      FUN_009186c0(param_1 + 0x410);
    }
    else {
      uVar8 = 0;
      bVar12 = 0;
      do {
        bVar2 = local_58[uVar8 + 1];
        cVar3 = FUN_008f96b0(*(undefined8 *)(param_1 + 0x58),bVar2);
        if (cVar3 == *(char *)(param_1 + 0x2a6)) {
          uVar9 = (ulong)bVar12;
          bVar12 = bVar12 + 1;
          *(byte *)(param_1 + uVar9 + 699) = bVar2;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *local_58);
      *(byte *)(param_1 + 0x2b9) = bVar12;
      if (bVar12 == 0) goto LAB_009062e4;
      uVar4 = FUN_00905a80(param_1,&local_58);
      if ((uVar4 & 0xff) != 0) {
        if ((uint)*(byte *)(param_1 + 0x2b9) <= (uVar4 & 0xff)) {
          uVar4 = (uint)*(byte *)(param_1 + 0x2b9);
        }
        FUN_008f8e50(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 699),auStack_5c,
                     local_60);
        lVar11 = param_1 + 0x5c0;
        lVar1 = param_1 + 0x5d8;
        uVar5 = FUN_008f9310(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
        FUN_009c5520(lVar11,*(undefined1 *)(param_1 + 0x2a6),*(undefined8 *)(param_1 + 0x340),uVar4)
        ;
        FUN_009c5540(lVar11,uVar5);
        FUN_009c5590(lVar1,lVar11);
        if ((param_3 & 1) != 0) {
          FUN_009c5580(lVar11);
        }
        FUN_009c5660(lVar1,0);
        (**(code **)(**(long **)(param_1 + 0x358) + 0x198))
                  (*(long **)(param_1 + 0x358),lVar11,local_60[0],0,lVar1);
        FUN_00901880(param_1);
        uVar5 = 1;
        goto LAB_009063ec;
      }
      FUN_00918650(param_1 + 0x410);
    }
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    *(long *)(param_1 + 0x2c8) = param_1 + 0x2d8;
    *(undefined4 *)(param_1 + 0x2d0) = 0x58;
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x410);
    uVar5 = 4;
    goto LAB_009063ec;
  case 1:
    if (*(short *)(param_1 + 0x336) != 0) {
      if (*(char *)(param_1 + 0x2ac) == '\0') {
        uVar8 = FUN_009c9720(*(undefined8 *)(param_1 + 0x250),2);
        if ((uVar8 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x2ac) = 1;
          goto LAB_009061f4;
        }
        plVar7 = *(long **)(param_1 + 0x358);
        if (*(char *)(param_1 + 0x2ac) == '\0') goto LAB_00906318;
      }
      else {
LAB_009061f4:
        plVar7 = *(long **)(param_1 + 0x358);
      }
      (**(code **)(*plVar7 + 0x1a8))();
      uVar5 = 2;
      goto LAB_009063ec;
    }
    plVar7 = *(long **)(param_1 + 0x358);
LAB_00906318:
    uVar8 = (**(code **)(*plVar7 + 0x1a0))();
    if ((uVar8 & 1) != 0) {
      if (*(char *)(param_1 + 0x609) == '\0') {
        *(undefined1 *)(param_1 + 0x2d8) = 0;
      }
      else {
        uVar8 = 0;
        lVar11 = 0x410;
        do {
          FUN_00918630(param_1 + lVar11,*(undefined1 *)(param_1 + uVar8 + 0x5f5),
                       *(undefined1 *)(param_1 + uVar8 + 0x5f0));
          bVar12 = *(byte *)(param_1 + 0x609);
          uVar9 = (ulong)bVar12;
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 8;
        } while (uVar8 < uVar9);
        *(byte *)(param_1 + 0x2d8) = bVar12;
        if (bVar12 != 0) {
          if (bVar12 == 1) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            puVar10 = (undefined8 *)(param_1 + 0x2e0);
            do {
              lVar11 = lVar11 + 2;
              *puVar10 = puVar10[0x26];
              puVar10[1] = puVar10[0x27];
              puVar10 = puVar10 + 2;
            } while (uVar9 - (uVar9 & 1) != lVar11);
            if ((bVar12 & 1) == 0) goto LAB_009063dc;
          }
          lVar11 = param_1 + lVar11 * 8;
          *(undefined8 *)(lVar11 + 0x2e0) = *(undefined8 *)(lVar11 + 0x410);
        }
      }
LAB_009063dc:
      *(long *)(param_1 + 0x2c8) = param_1 + 0x2d8;
      *(undefined4 *)(param_1 + 0x2d0) = 0x58;
      goto LAB_009063e8;
    }
    break;
  case 2:
    uVar8 = (**(code **)(**(long **)(param_1 + 0x358) + 0x1b0))();
    if ((uVar8 & 1) != 0) {
      FUN_00905ee0(param_1);
LAB_009063e8:
      uVar5 = 3;
      goto LAB_009063ec;
    }
    break;
  case 3:
    if (*(short *)(param_1 + 0x336) != 0) {
      FUN_009c9690(*(undefined8 *)(param_1 + 0x250),2,0);
      (**(code **)(**(long **)(param_1 + 0x358) + 0x570))(*(long **)(param_1 + 0x358),2,0);
    }
    if (*(short *)(param_1 + 0x33a) != 0) {
      FUN_009c9690(*(undefined8 *)(param_1 + 0x250),1,0);
      (**(code **)(**(long **)(param_1 + 0x358) + 0x570))(*(long **)(param_1 + 0x358),1,0);
    }
    uVar5 = 4;
    goto LAB_009063ec;
  case 4:
    cVar3 = FUN_008f2b20(*(undefined8 *)(param_1 + 0x58));
    if (cVar3 == '\0') {
LAB_009062d8:
      uVar5 = 6;
    }
    else {
      *(undefined1 *)(param_1 + 0x2a9) = 1;
      (**(code **)(**(long **)(param_1 + 0x358) + 0x348))();
      uVar5 = 5;
    }
LAB_009063ec:
    *param_2 = uVar5;
    break;
  case 5:
    uVar8 = (**(code **)(**(long **)(param_1 + 0x358) + 0x350))();
    if ((uVar8 & 1) != 0) goto LAB_009062d8;
    break;
  case 6:
    goto switchD_00906094_caseD_6;
  }
  uVar6 = 0;
switchD_00906094_caseD_6:
  return uVar6;
}


