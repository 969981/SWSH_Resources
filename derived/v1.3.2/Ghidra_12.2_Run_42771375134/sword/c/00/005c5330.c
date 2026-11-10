/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5330; name: FUN_005c5330
 */


undefined8 FUN_005c5330(byte *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 == (byte *)0x0) {
    plVar1 = param_2 + 1;
    if (((*(byte *)(param_2 + 5) & 1) == 0) && (*plVar1 != 0)) {
      plVar2 = (long *)*param_2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
      }
      *plVar1 = 0;
    }
    *plVar1 = 0;
    param_2[2] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    return 0;
  }
  if ((long)param_3 < 0) {
    bVar7 = *param_1;
    if (bVar7 != 0) {
      param_3 = 0;
      lVar4 = 0;
      do {
        lVar8 = 3;
        if (0xef < bVar7) {
          lVar8 = 4;
        }
        lVar9 = 2;
        if (0xdf < bVar7) {
          lVar9 = lVar8;
        }
        lVar8 = 2;
        if (0xc3 < bVar7) {
          lVar8 = lVar9;
        }
        lVar9 = 1;
        if (((int)(char)bVar7 & 0x80000000U) != 0) {
          lVar9 = lVar8;
        }
        lVar4 = lVar4 + lVar9;
        param_3 = param_3 + 1;
        bVar7 = param_1[lVar4];
      } while (bVar7 != 0);
      goto LAB_005c53a8;
    }
    param_3 = 0;
    uVar5 = 0;
    if (param_2[4] == 0) goto LAB_005c53d4;
  }
  else {
LAB_005c53a8:
    if ((ulong)param_2[4] < param_3) {
      FUN_005c5e00(param_2,param_3,1);
    }
    uVar5 = param_2[4];
    if (uVar5 <= param_3) {
LAB_005c53d4:
      if ((uVar5 < param_3 + 1) && (uVar5 = FUN_005c5e00(param_2,param_3 + 1,1), (uVar5 & 1) == 0))
      {
        bVar7 = *param_1;
        goto joined_r0x005c53f8;
      }
    }
  }
  *(undefined1 *)(param_2[1] + param_3) = 0;
  param_2[2] = param_3;
  bVar7 = *param_1;
joined_r0x005c53f8:
  if (bVar7 != 0) {
    pbVar6 = (byte *)param_2[1];
    iVar3 = 0;
    lVar4 = 0;
    do {
      if ((char)bVar7 < '\0') {
        if (bVar7 < 0xe0) {
          lVar9 = 1;
          lVar8 = 2;
LAB_005c54d8:
          *pbVar6 = param_1[lVar4 + lVar9] & 0x3f | bVar7 << 6;
          goto joined_r0x005c54f4;
        }
        if (bVar7 < 0xf0) {
          bVar7 = param_1[lVar4 + 1];
          lVar9 = 2;
          lVar8 = 3;
          goto LAB_005c54d8;
        }
        lVar8 = 4;
      }
      else {
        lVar8 = 1;
        *pbVar6 = bVar7;
joined_r0x005c54f4:
        iVar3 = iVar3 + 1;
        pbVar6 = pbVar6 + 1;
      }
      if ((long)param_3 <= (long)iVar3) {
        return 1;
      }
      lVar4 = lVar4 + lVar8;
      bVar7 = param_1[lVar4];
    } while (bVar7 != 0);
  }
  return 1;
}


