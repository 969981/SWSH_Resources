/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012fcd30; name: FUN_012fcd30
 */


undefined8 FUN_012fcd30(long param_1,ulong *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  
LAB_012fcd50:
  while (pbVar7 = (byte *)*param_2, (byte *)param_2[1] <= pbVar7) {
    uVar5 = 0;
LAB_012fcfb0:
    uVar3 = FUN_0080d8c0(param_2,uVar5);
    bVar2 = uVar3 - 1 < 0x7f;
    *(uint *)(param_2 + 4) = uVar3;
    uVar5 = (ulong)CONCAT14(bVar2,uVar3);
    if (bVar2) goto LAB_012fcd80;
switchD_012fcd98_default:
    if (uVar3 == 0) {
      return 1;
    }
    if ((uVar3 & 7) == 4) {
      return 1;
    }
LAB_012fcfe8:
    uVar5 = FUN_008148c0(param_2);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  bVar1 = *pbVar7;
  uVar5 = (ulong)(uint)bVar1;
  if ((char)bVar1 < '\x01') goto LAB_012fcfb0;
  *(uint *)(param_2 + 4) = (uint)bVar1;
  *param_2 = (ulong)(pbVar7 + 1);
LAB_012fcd80:
  uVar3 = (uint)uVar5;
  switch((uint)(uVar5 >> 3) & 0x1fffffff) {
  case 1:
    if (uVar3 != 8) {
LAB_012fcebc:
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        return 1;
      }
      goto LAB_012fcfe8;
    }
    if (((byte *)*param_2 < (byte *)param_2[1]) && (bVar1 = *(byte *)*param_2, -1 < (char)bVar1)) {
      *(ulong *)(param_1 + 0x18) = (ulong)bVar1;
      pbVar7 = (byte *)(*param_2 + 1);
      *param_2 = (ulong)pbVar7;
      pbVar6 = (byte *)param_2[1];
      if (pbVar6 <= pbVar7) goto LAB_012fcd50;
    }
    else {
      auVar8 = FUN_0080d3e0(param_2);
      *(long *)(param_1 + 0x18) = auVar8._0_8_;
      if ((auVar8._8_8_ & 1) == 0) {
        return 0;
      }
      pbVar7 = (byte *)*param_2;
      pbVar6 = (byte *)param_2[1];
      if (pbVar6 <= pbVar7) goto LAB_012fcd50;
    }
    if (*pbVar7 == 0x10) {
      pbVar7 = pbVar7 + 1;
      *param_2 = (ulong)pbVar7;
      if (pbVar7 < pbVar6) goto LAB_012fce10;
LAB_012fcdf4:
      uVar3 = 0;
LAB_012fcf64:
      lVar4 = FUN_0080d5d0(param_2,uVar3);
      if (lVar4 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x20) = (int)lVar4;
      pbVar7 = (byte *)*param_2;
      pbVar6 = (byte *)param_2[1];
      if (pbVar7 < pbVar6) goto LAB_012fce34;
    }
    goto LAB_012fcd50;
  case 2:
    if (uVar3 != 0x10) goto LAB_012fcebc;
    pbVar7 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar7) goto LAB_012fcdf4;
LAB_012fce10:
    uVar3 = (uint)*pbVar7;
    if ((char)*pbVar7 < '\0') goto LAB_012fcf64;
    *param_2 = (ulong)(pbVar7 + 1);
    *(uint *)(param_1 + 0x20) = uVar3;
    pbVar7 = (byte *)*param_2;
    pbVar6 = (byte *)param_2[1];
    if (pbVar6 <= pbVar7) goto LAB_012fcd50;
LAB_012fce34:
    if (*pbVar7 != 0x18) goto LAB_012fcd50;
    pbVar7 = pbVar7 + 1;
    *param_2 = (ulong)pbVar7;
    if (pbVar7 < pbVar6) goto LAB_012fce6c;
LAB_012fce50:
    uVar3 = 0;
LAB_012fcf40:
    lVar4 = FUN_0080d5d0(param_2,uVar3);
    if (lVar4 < 0) {
      return 0;
    }
    *(int *)(param_1 + 0x24) = (int)lVar4;
    pbVar7 = (byte *)*param_2;
    pbVar6 = (byte *)param_2[1];
    if (pbVar6 <= pbVar7) goto LAB_012fcd50;
    break;
  case 3:
    if (uVar3 != 0x18) goto LAB_012fcebc;
    pbVar7 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar7) goto LAB_012fce50;
LAB_012fce6c:
    uVar3 = (uint)*pbVar7;
    if ((char)*pbVar7 < '\0') goto LAB_012fcf40;
    *param_2 = (ulong)(pbVar7 + 1);
    *(uint *)(param_1 + 0x24) = uVar3;
    pbVar7 = (byte *)*param_2;
    pbVar6 = (byte *)param_2[1];
    if (pbVar6 <= pbVar7) goto LAB_012fcd50;
    break;
  case 4:
    if (uVar3 != 0x20) goto LAB_012fcebc;
    pbVar7 = (byte *)*param_2;
    if (pbVar7 < (byte *)param_2[1]) goto LAB_012fcedc;
    goto LAB_012fceac;
  default:
    goto switchD_012fcd98_default;
  }
  if (*pbVar7 == 0x20) {
    pbVar7 = pbVar7 + 1;
    *param_2 = (ulong)pbVar7;
    if (pbVar7 < pbVar6) {
LAB_012fcedc:
      uVar3 = (uint)*pbVar7;
      if ((char)*pbVar7 < '\0') goto LAB_012fcf1c;
      *param_2 = (ulong)(pbVar7 + 1);
      *(uint *)(param_1 + 0x28) = uVar3;
      if (*param_2 != param_2[1]) goto LAB_012fcd50;
    }
    else {
LAB_012fceac:
      uVar3 = 0;
LAB_012fcf1c:
      lVar4 = FUN_0080d5d0(param_2,uVar3);
      if (lVar4 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x28) = (int)lVar4;
      if (*param_2 != param_2[1]) goto LAB_012fcd50;
    }
    if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  }
  goto LAB_012fcd50;
}


