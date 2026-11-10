/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0060a890; name: FUN_0060a890
 */


undefined8 FUN_0060a890(long *param_1,uint param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint local_48;
  undefined1 local_44 [4];
  
  lVar4 = param_1[2];
  if ((ulong)param_1[1] <= lVar4 + 3U) {
    return 0x55;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar7 = (uint *)(*param_1 + lVar4);
    uVar10 = 0;
    if (puVar7 != (uint *)0x0) goto LAB_0060a8fc;
  }
  else {
    lVar4 = (*(code *)param_1[5])(param_1,lVar4,&local_48,4);
    if (lVar4 != 4) {
      return 0x55;
    }
    lVar4 = param_1[2];
    puVar7 = &local_48;
LAB_0060a8fc:
    uVar10 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  }
  lVar8 = lVar4 + 4;
  param_1[2] = lVar8;
  if (uVar10 != param_2) {
    return 2;
  }
  if ((ulong)param_1[1] <= lVar4 + 7U) {
    return 0x55;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    uVar9 = lVar4 + 0x18;
    param_1[2] = lVar4 + 8;
  }
  else {
    lVar4 = (*(code *)param_1[5])(param_1,lVar8,&local_48,4);
    if (lVar4 != 4) {
      return 0x55;
    }
    lVar8 = param_1[2];
    uVar9 = lVar8 + 0x14;
    param_1[2] = lVar8 + 4;
    if ((code *)param_1[5] != (code *)0x0) {
      lVar4 = (*(code *)param_1[5])(param_1,uVar9,0,0);
      if (lVar4 != 0) {
        return 0x55;
      }
      param_1[2] = uVar9;
      if ((ulong)param_1[1] <= lVar8 + 0x15U) {
        return 0x55;
      }
      goto LAB_0060a9b8;
    }
  }
  if ((ulong)param_1[1] < uVar9) {
    return 0x55;
  }
  param_1[2] = uVar9;
  if ((ulong)param_1[1] <= lVar8 + 0x15U) {
    return 0x55;
  }
LAB_0060a9b8:
  if ((code *)param_1[5] == (code *)0x0) {
    puVar6 = (undefined1 *)(*param_1 + uVar9);
    if (puVar6 == (undefined1 *)0x0) {
      param_1[2] = lVar8 + 0x16;
      return 2;
    }
  }
  else {
    lVar4 = (*(code *)param_1[5])(param_1,uVar9,local_44,2);
    if (lVar4 != 2) {
      return 0x55;
    }
    uVar9 = param_1[2];
    puVar6 = local_44;
  }
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  lVar4 = uVar9 + 2;
  param_1[2] = lVar4;
  if (CONCAT11(uVar1,uVar2) == 0) {
    return 2;
  }
  if (uVar9 + 5 < (ulong)param_1[1]) {
    uVar10 = 0;
    do {
      if ((code *)param_1[5] == (code *)0x0) {
        puVar7 = (uint *)(*param_1 + lVar4);
        if (puVar7 != (uint *)0x0) goto LAB_0060aa5c;
        uVar9 = lVar4 + 0xc;
        param_1[2] = lVar4 + 4;
LAB_0060aae8:
        if ((ulong)param_1[1] < uVar9) {
          return 0x55;
        }
LAB_0060aaf4:
        param_1[2] = uVar9;
      }
      else {
        lVar4 = (*(code *)param_1[5])(param_1,lVar4,&local_48,4);
        if (lVar4 != 4) {
          return 0x55;
        }
        lVar4 = param_1[2];
        puVar7 = &local_48;
LAB_0060aa5c:
        uVar3 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
        lVar8 = lVar4 + 4;
        param_1[2] = lVar8;
        if ((uVar3 >> 0x10 | uVar3 << 0x10) != 2) {
          uVar9 = lVar4 + 0xc;
          if ((code *)param_1[5] == (code *)0x0) goto LAB_0060aae8;
          lVar4 = (*(code *)param_1[5])(param_1,uVar9,0,0);
          if (lVar4 != 0) {
            return 0x55;
          }
          goto LAB_0060aaf4;
        }
        uVar9 = param_1[1];
        if (lVar4 + 7U < uVar9) {
          if ((code *)param_1[5] == (code *)0x0) {
            puVar7 = (uint *)(*param_1 + lVar8);
            if (puVar7 != (uint *)0x0) goto LAB_0060ab24;
            lVar4 = 0;
          }
          else {
            lVar4 = (*(code *)param_1[5])(param_1,lVar8,&local_48,4);
            if (lVar4 != 4) goto LAB_0060aaf8;
            uVar9 = param_1[1];
            lVar8 = param_1[2];
            puVar7 = &local_48;
LAB_0060ab24:
            uVar3 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
            lVar4 = (long)(int)(uVar3 >> 0x10 | uVar3 << 0x10);
          }
          lVar5 = lVar8 + 4;
          param_1[2] = lVar5;
          if (lVar8 + 7U < uVar9) {
            if ((code *)param_1[5] == (code *)0x0) {
LAB_0060ab70:
              param_1[2] = lVar5 + 4;
              *param_3 = lVar4;
              return 0;
            }
            lVar8 = (*(code *)param_1[5])(param_1,lVar5,&local_48,4);
            if (lVar8 == 4) {
              lVar5 = param_1[2];
              goto LAB_0060ab70;
            }
          }
        }
      }
LAB_0060aaf8:
      uVar10 = uVar10 + 1;
      if (CONCAT11(uVar1,uVar2) <= uVar10) {
        return 2;
      }
      lVar4 = param_1[2];
    } while (lVar4 + 3U < (ulong)param_1[1]);
  }
  return 0x55;
}


