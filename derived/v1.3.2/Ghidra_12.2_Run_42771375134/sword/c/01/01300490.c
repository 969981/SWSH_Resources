/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01300490; name: FUN_01300490
 */


undefined8 FUN_01300490(long param_1,ulong *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 auVar9 [16];
  
  piVar1 = (int *)(param_1 + 0x20);
LAB_0130061c:
  while (pbVar7 = (byte *)*param_2, (byte *)param_2[1] <= pbVar7) {
    uVar2 = 0;
LAB_013005b0:
    uVar2 = FUN_0080d8c0(param_2,uVar2);
    *(uint *)(param_2 + 4) = uVar2;
    if (uVar2 - 1 < 0x7f) goto LAB_0130064c;
switchD_01300664_default:
    if (uVar2 == 0) {
      return 1;
    }
    if ((uVar2 & 7) == 4) {
      return 1;
    }
LAB_013005e8:
    uVar6 = FUN_008148c0(param_2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = (uint)*pbVar7;
  if ((char)*pbVar7 < '\x01') goto LAB_013005b0;
  *(uint *)(param_2 + 4) = uVar2;
  *param_2 = (ulong)(pbVar7 + 1);
LAB_0130064c:
  switch(uVar2 >> 3) {
  case 1:
    if (uVar2 != 8) {
LAB_01300894:
      if ((uVar2 == 0) || ((uVar2 & 7) == 4)) {
        return 1;
      }
      goto LAB_013005e8;
    }
    pbVar7 = (byte *)*param_2;
    if (pbVar7 < (byte *)param_2[1]) {
      uVar2 = (uint)*pbVar7;
      if ((char)*pbVar7 < '\0') goto LAB_013005fc;
      *param_2 = (ulong)(pbVar7 + 1);
      *(uint *)(param_1 + 0x14) = uVar2;
      pbVar7 = (byte *)*param_2;
      pbVar8 = (byte *)param_2[1];
      if (pbVar8 <= pbVar7) goto LAB_0130061c;
    }
    else {
      uVar2 = 0;
LAB_013005fc:
      lVar5 = FUN_0080d5d0(param_2,uVar2);
      if (lVar5 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x14) = (int)lVar5;
      pbVar7 = (byte *)*param_2;
      pbVar8 = (byte *)param_2[1];
      if (pbVar8 <= pbVar7) goto LAB_0130061c;
    }
    if (*pbVar7 == 0x10) {
      pbVar7 = pbVar7 + 1;
      *param_2 = (ulong)pbVar7;
      if (pbVar7 < pbVar8) goto LAB_013006d8;
LAB_013006bc:
      uVar2 = 0;
      goto LAB_01300588;
    }
    goto LAB_0130061c;
  case 2:
    if (uVar2 != 0x10) goto LAB_01300894;
    pbVar7 = (byte *)*param_2;
    if ((byte *)param_2[1] <= pbVar7) goto LAB_013006bc;
LAB_013006d8:
    uVar2 = (uint)*pbVar7;
    if ((char)*pbVar7 < '\0') {
LAB_01300588:
      lVar5 = FUN_0080d5d0(param_2,uVar2);
      if (lVar5 < 0) {
        return 0;
      }
      *(int *)(param_1 + 0x18) = (int)lVar5;
      pbVar7 = (byte *)*param_2;
      pbVar8 = (byte *)param_2[1];
      if (pbVar8 <= pbVar7) goto LAB_0130061c;
    }
    else {
      *param_2 = (ulong)(pbVar7 + 1);
      *(uint *)(param_1 + 0x18) = uVar2;
      pbVar7 = (byte *)*param_2;
      pbVar8 = (byte *)param_2[1];
      if (pbVar8 <= pbVar7) goto LAB_0130061c;
    }
    if (*pbVar7 != 0x1a) goto LAB_0130061c;
    pbVar7 = pbVar7 + 1;
    *param_2 = (ulong)pbVar7;
    if (pbVar7 < pbVar8) {
LAB_01300718:
      if ((char)*pbVar7 < '\0') goto LAB_0130074c;
      uVar2 = (uint)*pbVar7;
      *param_2 = (ulong)(pbVar7 + 1);
    }
    else {
LAB_0130074c:
      uVar2 = FUN_0080d720(param_2);
      if ((int)uVar2 < 0) {
        return 0;
      }
    }
    uVar3 = FUN_0080c950(param_2,uVar2);
    iVar4 = FUN_0080cc60(param_2);
    while (0 < iVar4) {
      pbVar7 = (byte *)*param_2;
      if (pbVar7 < (byte *)param_2[1]) {
        uVar6 = (ulong)*pbVar7;
        if ((char)*pbVar7 < '\0') goto LAB_013007ac;
        *param_2 = (ulong)(pbVar7 + 1);
        iVar4 = *(int *)(param_1 + 0x20);
        if (iVar4 == *(int *)(param_1 + 0x24)) goto LAB_013007cc;
      }
      else {
        uVar6 = 0;
LAB_013007ac:
        uVar6 = FUN_0080d5d0(param_2,uVar6);
        if ((long)uVar6 < 0) {
          return 0;
        }
        iVar4 = *(int *)(param_1 + 0x20);
        if (iVar4 == *(int *)(param_1 + 0x24)) {
LAB_013007cc:
          FUN_007f7a40(piVar1,iVar4 + 1);
          iVar4 = *piVar1;
        }
      }
      *(int *)(param_1 + 0x20) = iVar4 + 1;
      *(int *)(*(long *)(param_1 + 0x28) + (long)iVar4 * 4 + 8) = (int)uVar6;
      iVar4 = FUN_0080cc60(param_2);
    }
    FUN_0080c9d0(param_2,uVar3);
    pbVar7 = (byte *)*param_2;
    pbVar8 = (byte *)param_2[1];
    if (pbVar8 <= pbVar7) goto LAB_0130061c;
    break;
  case 3:
    if (uVar2 != 0x18) {
      if (uVar2 != 0x1a) goto LAB_01300894;
      pbVar7 = (byte *)*param_2;
      if (pbVar7 < (byte *)param_2[1]) goto LAB_01300718;
      goto LAB_0130074c;
    }
    uVar6 = FUN_0085d0f0(1,0x1a,param_2,piVar1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    pbVar7 = (byte *)*param_2;
    pbVar8 = (byte *)param_2[1];
    if (pbVar8 <= pbVar7) goto LAB_0130061c;
    break;
  case 4:
    if (uVar2 != 0x20) goto LAB_01300894;
    pbVar7 = (byte *)*param_2;
    if (pbVar7 < (byte *)param_2[1]) goto LAB_01300830;
    goto LAB_01300560;
  case 5:
    if (uVar2 != 0x28) goto LAB_01300894;
    pbVar7 = (byte *)*param_2;
    if (pbVar7 < (byte *)param_2[1]) goto LAB_01300874;
    goto LAB_013004e0;
  default:
    goto switchD_01300664_default;
  }
  if (*pbVar7 == 0x20) {
    pbVar7 = pbVar7 + 1;
    *param_2 = (ulong)pbVar7;
    if (pbVar7 < pbVar8) {
LAB_01300830:
      uVar2 = (uint)*pbVar7;
      if ((char)*pbVar7 < '\0') goto LAB_01300564;
      *(uint *)(param_1 + 0x34) = uVar2;
      pbVar7 = (byte *)(*param_2 + 1);
      *param_2 = (ulong)pbVar7;
      pbVar8 = (byte *)param_2[1];
      if (pbVar8 <= pbVar7) goto LAB_0130061c;
    }
    else {
LAB_01300560:
      uVar2 = 0;
LAB_01300564:
      lVar5 = FUN_0080d5d0(param_2,uVar2);
      *(int *)(param_1 + 0x34) = (int)lVar5;
      if (lVar5 < 0) {
        return 0;
      }
      pbVar7 = (byte *)*param_2;
      pbVar8 = (byte *)param_2[1];
      if (pbVar8 <= pbVar7) goto LAB_0130061c;
    }
    if (*pbVar7 == 0x28) {
      pbVar7 = pbVar7 + 1;
      *param_2 = (ulong)pbVar7;
      if (pbVar7 < pbVar8) {
LAB_01300874:
        if ((char)*pbVar7 < '\0') goto LAB_013004e0;
        uVar6 = (ulong)*pbVar7;
        *param_2 = (ulong)(pbVar7 + 1);
      }
      else {
LAB_013004e0:
        auVar9 = FUN_0080d3e0(param_2);
        uVar6 = auVar9._0_8_;
        if ((auVar9._8_8_ & 1) == 0) {
          return 0;
        }
      }
      *(bool *)(param_1 + 0x38) = uVar6 != 0;
      if ((*param_2 == param_2[1]) &&
         ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined1 *)((long)param_2 + 0x24) = 1;
        return 1;
      }
    }
  }
  goto LAB_0130061c;
}


