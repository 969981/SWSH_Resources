/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bba60; name: FUN_014bba60
 */


undefined8 FUN_014bba60(undefined8 param_1,undefined2 *param_2)

{
  long lVar1;
  undefined2 *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar7 = FUN_014ba2e0(*param_2,1);
  bVar6 = (uVar7 & 1) == 0;
  lVar1 = 2;
  if (bVar6) {
    lVar1 = 0;
  }
  uVar4 = *(ushort *)((long)param_2 + lVar1);
  puVar2 = param_2 + 1;
  if (bVar6) {
    puVar2 = param_2;
  }
  if (uVar4 != 0) {
    uVar3 = puVar2[1];
    uVar10 = (uint)uVar4;
    if (uVar4 < 0x100) {
      uVar7 = (ulong)(uVar4 >> 5);
      uVar5 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(&DAT_01d4dd20 + uVar7 * 4) & uVar5) != 0) {
        return 3;
      }
      if ((*(uint *)(&DAT_01d4dca0 + uVar7 * 4) & uVar5) != 0) {
        return 4;
      }
      if ((*(uint *)(&DAT_01d4da20 + uVar7 * 4) & uVar5) != 0) {
        return 1;
      }
    }
    uVar5 = uVar10 - 0x58;
    uVar9 = (uint)uVar3;
    if (uVar5 < 0x23) {
      if ((1L << ((ulong)uVar5 & 0x3f) & 0x500000005U) != 0) {
        return 2;
      }
      if ((1L << ((ulong)uVar5 & 0x3f) & 0x200000002U) != 0) {
        if (uVar3 == 0) {
          return 2;
        }
        if (uVar3 == 0x59) {
          return 2;
        }
        if (uVar3 == 0x79) {
          return 2;
        }
        if (0xff < uVar3) {
          return 1;
        }
        if ((*(uint *)(&DAT_01d4da20 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar9 & 0x1f)) == 0)
        {
          return 1;
        }
        return 2;
      }
    }
    if (uVar9 != 0) {
      uVar8 = 1;
      switch(uVar4) {
      case 0x47:
      case 0x67:
        if ((uVar9 | 0x20) == 0x6e) {
          return 2;
        }
        if (uVar4 == 0x48) {
          return 1;
        }
        if (uVar10 == 0x53) goto switchD_014bbba0_caseD_53;
        if (uVar10 == 0x50) goto switchD_014bbba0_caseD_50;
        break;
      case 0x48:
      case 0x68:
        goto switchD_014bbba0_caseD_48;
      case 0x50:
      case 0x70:
switchD_014bbba0_caseD_50:
        if ((uVar9 | 0x20) == 0x6e) {
          return 2;
        }
        uVar8 = 1;
        switch(uVar10) {
        case 0x50:
        case 0x70:
          if ((uVar9 | 0x20) == 0x73) {
            return 2;
          }
          if (uVar10 == 0x68) {
            return 1;
          }
          if (uVar10 == 0x53) goto switchD_014bbba0_caseD_53;
          break;
        case 0x53:
          goto switchD_014bbba0_caseD_53;
        case 0x68:
          goto switchD_014bbba0_caseD_48;
        }
        break;
      case 0x53:
      case 0x73:
switchD_014bbba0_caseD_53:
        if ((uVar9 | 0x20) != 0x79) {
          if (0xff < uVar9) {
            return 2;
          }
          if ((*(uint *)(&DAT_01d4da20 + (ulong)(uVar3 >> 5) * 4) & 1 << (ulong)(uVar9 & 0x1f)) == 0
             ) {
            return 2;
          }
        }
      }
    }
  }
  uVar8 = 0;
switchD_014bbba0_caseD_48:
  return uVar8;
}


