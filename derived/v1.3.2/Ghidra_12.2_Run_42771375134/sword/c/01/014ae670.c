/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014ae670; name: FUN_014ae670
 */


ulong FUN_014ae670(ulong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  
  iVar4 = (int)param_1;
  if (iVar4 == 0) {
    puVar6 = (ushort *)(&DAT_0216fa8c + (param_1 & 0xffffffff) * 8);
    while (*puVar6 != param_2) {
      uVar5 = (int)param_1 + 1;
      param_1 = (ulong)uVar5;
      puVar6 = puVar6 + 4;
      if (0x382 < uVar5) {
        return 0;
      }
    }
  }
  else if (iVar4 == 1) {
    param_1 = 0;
    puVar6 = &DAT_0216fa96;
    uVar3 = DAT_0216fa8e;
    while (uVar3 != param_2) {
      uVar5 = (uint)param_1;
      if (0x382 < uVar5 + 1) {
        return 0;
      }
      if (*puVar6 == param_2) {
        return (ulong)(uVar5 | 1);
      }
      param_1 = (ulong)(uVar5 + 2);
      uVar3 = puVar6[4];
      puVar6 = puVar6 + 8;
    }
  }
  else if (iVar4 == 2) {
    param_1 = 0;
    puVar6 = &DAT_0216fa98;
    uVar3 = DAT_0216fa90;
    while (uVar3 != param_2) {
      uVar5 = (uint)param_1;
      if (0x382 < uVar5 + 1) {
        return 0;
      }
      if (*puVar6 == param_2) {
        return (ulong)(uVar5 | 1);
      }
      param_1 = (ulong)(uVar5 + 2);
      uVar3 = puVar6[4];
      puVar6 = puVar6 + 8;
    }
  }
  else {
    uVar5 = 0;
    while( true ) {
      if (param_2 == 0) {
        return (ulong)uVar5;
      }
      uVar1 = uVar5 + 3;
      uVar2 = uVar1;
      if (0x382 < uVar1) {
        uVar2 = 0;
      }
      param_1 = (ulong)uVar2;
      if ((0x382 < uVar1) || (param_2 == 0)) break;
      uVar5 = uVar5 + 4;
    }
  }
  return param_1;
}


