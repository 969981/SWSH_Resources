/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00915470; name: FUN_00915470
 */


ulong FUN_00915470(uint *param_1,uint *param_2,int param_3,uint *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar7 = param_1[1];
  if (*param_1 <= uVar7) {
    uVar8 = 0xbe;
switchD_00915524_caseD_be:
    return uVar8;
  }
  while( true ) {
    uVar2 = *(undefined1 *)((long)param_1 + (ulong)uVar7 + 8);
    uVar3 = *(undefined1 *)((long)param_1 + (ulong)(uVar7 + 1) + 8);
    param_1[1] = uVar7 + 2;
    uVar4 = CONCAT11(uVar2,uVar3);
    uVar8 = (ulong)uVar4;
    if ((uVar4 != 0xc2) && (uVar4 != 0xbf)) break;
    uVar7 = uVar7 + *(byte *)((long)param_1 + (ulong)(uVar7 + 2) + 8) + 3;
    param_1[1] = uVar7;
    if (*param_1 <= uVar7) {
      return 0xbe;
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar7;
  }
  switch(uVar4) {
  case 0xbe:
    goto switchD_00915524_caseD_be;
  default:
    if (uVar4 < 0xbe) {
      FUN_00915690(param_1,(&DAT_0214a848)[uVar8],param_2);
      return uVar8;
    }
    return 0xbe;
  case 0xc0:
    uVar7 = param_1[1];
    param_1[1] = uVar7 + 1;
    bVar1 = *(byte *)((long)param_1 + (ulong)uVar7 + 8);
    if ((uint)bVar1 < param_3 - 1U) {
      uVar7 = (uint)bVar1;
      *param_2 = uVar7;
      if (uVar7 != 0) {
        if (uVar7 == 1) {
          lVar6 = 1;
        }
        else {
          lVar5 = 0;
          do {
            lVar6 = lVar5;
            uVar7 = param_1[1];
            param_1[1] = uVar7 + 1;
            param_2[lVar6 + 1] = (uint)*(byte *)((long)param_1 + (ulong)uVar7 + 8);
            uVar7 = param_1[1];
            param_1[1] = uVar7 + 1;
            param_2[lVar6 + 2] = (uint)*(byte *)((long)param_1 + (ulong)uVar7 + 8);
            lVar5 = lVar6 + 2;
          } while ((ulong)bVar1 - ((ulong)bVar1 & 1) != lVar6 + 2);
          lVar6 = lVar6 + 3;
        }
        if ((bVar1 & 1) != 0) {
          uVar7 = param_1[1];
          param_1[1] = uVar7 + 1;
          param_2[lVar6] = (uint)*(byte *)((long)param_1 + (ulong)uVar7 + 8);
        }
      }
    }
    return 0xc0;
  case 0xc1:
    param_1[1] = param_1[1] + 2;
    return 0xc1;
  case 0xc3:
    uVar7 = param_1[1];
    param_1[1] = uVar7 + 1;
    *param_2 = (uint)*(byte *)((long)param_1 + (ulong)uVar7 + 8);
    return 0xc3;
  case 0xc4:
    return 0xc4;
  }
}


