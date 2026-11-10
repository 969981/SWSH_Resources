/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d9300; name: FUN_007d9300
 */


undefined8 FUN_007d9300(long param_1,ulong *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined1 auVar10 [16];
  
  puVar3 = PTR_DAT_02716d10;
  plVar1 = (long *)(param_1 + 0x30);
LAB_007d942c:
  while (pbVar9 = (byte *)*param_2, (byte *)param_2[1] <= pbVar9) {
    uVar4 = 0;
LAB_007d93c0:
    uVar4 = FUN_0080d8c0(param_2,uVar4);
    *(uint *)(param_2 + 4) = uVar4;
    if (uVar4 - 1 < 0x7f) goto LAB_007d945c;
switchD_007d9474_default:
    if (uVar4 == 0) {
      return 1;
    }
    if ((uVar4 & 7) == 4) {
      return 1;
    }
LAB_007d93f8:
    uVar5 = FUN_008148c0(param_2);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  uVar4 = (uint)*pbVar9;
  if ((char)*pbVar9 < '\x01') goto LAB_007d93c0;
  *(uint *)(param_2 + 4) = uVar4;
  *param_2 = (ulong)(pbVar9 + 1);
LAB_007d945c:
  switch(uVar4 >> 3) {
  case 1:
    if (uVar4 != 8) {
LAB_007d962c:
      if ((uVar4 == 0) || ((uVar4 & 7) == 4)) {
        return 1;
      }
      goto LAB_007d93f8;
    }
    if ((byte *)*param_2 < (byte *)param_2[1]) {
      bVar2 = *(byte *)*param_2;
      uVar4 = (uint)bVar2;
      if ((char)bVar2 < '\0') goto LAB_007d940c;
      *(uint *)(param_1 + 0x14) = uVar4;
      pbVar9 = (byte *)(*param_2 + 1);
      *param_2 = (ulong)pbVar9;
      pbVar7 = (byte *)param_2[1];
      if (pbVar7 <= pbVar9) goto LAB_007d942c;
    }
    else {
      uVar4 = 0;
LAB_007d940c:
      lVar6 = FUN_0080d5d0(param_2,uVar4);
      *(int *)(param_1 + 0x14) = (int)lVar6;
      if (lVar6 < 0) {
        return 0;
      }
      pbVar9 = (byte *)*param_2;
      pbVar7 = (byte *)param_2[1];
      if (pbVar7 <= pbVar9) goto LAB_007d942c;
    }
    if (*pbVar9 == 0x10) {
      pbVar9 = pbVar9 + 1;
      *param_2 = (ulong)pbVar9;
      if (pbVar7 <= pbVar9) goto LAB_007d94d0;
LAB_007d94ec:
      uVar4 = (uint)*pbVar9;
      if ((char)*pbVar9 < '\0') goto LAB_007d9398;
      *(uint *)(param_1 + 0x18) = uVar4;
      pbVar9 = (byte *)(*param_2 + 1);
      *param_2 = (ulong)pbVar9;
      pbVar7 = (byte *)param_2[1];
      if (pbVar9 < pbVar7) goto LAB_007d9514;
    }
    goto LAB_007d942c;
  case 2:
    if (uVar4 != 0x10) goto LAB_007d962c;
    pbVar9 = (byte *)*param_2;
    if (pbVar9 < (byte *)param_2[1]) goto LAB_007d94ec;
LAB_007d94d0:
    uVar4 = 0;
LAB_007d9398:
    lVar6 = FUN_0080d5d0(param_2,uVar4);
    *(int *)(param_1 + 0x18) = (int)lVar6;
    if (lVar6 < 0) {
      return 0;
    }
    pbVar9 = (byte *)*param_2;
    pbVar7 = (byte *)param_2[1];
    if (pbVar7 <= pbVar9) goto LAB_007d942c;
LAB_007d9514:
    if (*pbVar9 != 0x18) goto LAB_007d942c;
    pbVar9 = pbVar9 + 1;
    *param_2 = (ulong)pbVar9;
    if (pbVar7 <= pbVar9) goto LAB_007d95c8;
LAB_007d9530:
    if ((char)*pbVar9 < '\0') goto LAB_007d95c8;
    *(ulong *)(param_1 + 0x20) = (ulong)*pbVar9;
    pbVar9 = (byte *)(*param_2 + 1);
    *param_2 = (ulong)pbVar9;
    pbVar7 = (byte *)param_2[1];
    if (pbVar7 <= pbVar9) goto LAB_007d942c;
    break;
  case 3:
    if (uVar4 != 0x18) goto LAB_007d962c;
    pbVar9 = (byte *)*param_2;
    if (pbVar9 < (byte *)param_2[1]) goto LAB_007d9530;
LAB_007d95c8:
    auVar10 = FUN_0080d3e0(param_2);
    *(long *)(param_1 + 0x20) = auVar10._0_8_;
    if ((auVar10._8_8_ & 1) == 0) {
      return 0;
    }
    pbVar9 = (byte *)*param_2;
    pbVar7 = (byte *)param_2[1];
    if (pbVar7 <= pbVar9) goto LAB_007d942c;
    break;
  case 4:
    if (uVar4 != 0x20) goto LAB_007d962c;
    pbVar9 = (byte *)*param_2;
    if (pbVar9 < (byte *)param_2[1]) goto LAB_007d9574;
    goto LAB_007d9600;
  case 5:
    if (uVar4 != 0x2a) goto LAB_007d962c;
    goto LAB_007d9344;
  default:
    goto switchD_007d9474_default;
  }
  if (*pbVar9 == 0x20) {
    pbVar9 = pbVar9 + 1;
    *param_2 = (ulong)pbVar9;
    if (pbVar9 < pbVar7) {
LAB_007d9574:
      if ((char)*pbVar9 < '\0') goto LAB_007d9600;
      *(ulong *)(param_1 + 0x28) = (ulong)*pbVar9;
      pcVar8 = (char *)(*param_2 + 1);
      *param_2 = (ulong)pcVar8;
      if ((char *)param_2[1] <= pcVar8) goto LAB_007d942c;
    }
    else {
LAB_007d9600:
      auVar10 = FUN_0080d3e0(param_2);
      *(long *)(param_1 + 0x28) = auVar10._0_8_;
      if ((auVar10._8_8_ & 1) == 0) {
        return 0;
      }
      pcVar8 = (char *)*param_2;
      if ((char *)param_2[1] <= pcVar8) goto LAB_007d942c;
    }
    if (*pcVar8 == '*') {
      *param_2 = (ulong)(pcVar8 + 1);
LAB_007d9344:
      lVar6 = *plVar1;
      if (lVar6 == *(long *)puVar3) {
        FUN_009b58d0(plVar1,*(long *)puVar3);
        lVar6 = *plVar1;
      }
      uVar5 = FUN_008160d0(param_2,lVar6);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      if ((*param_2 == param_2[1]) &&
         ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined1 *)((long)param_2 + 0x24) = 1;
        return 1;
      }
    }
  }
  goto LAB_007d942c;
}


