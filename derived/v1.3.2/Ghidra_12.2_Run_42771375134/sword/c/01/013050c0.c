/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013050c0; name: FUN_013050c0
 */


undefined8 FUN_013050c0(long param_1,ulong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  undefined4 local_24;
  
LAB_013050e0:
  while (pbVar1 = (byte *)*param_2, (byte *)param_2[1] <= pbVar1) {
    uVar6 = 0;
LAB_013053a0:
    uVar5 = FUN_0080d8c0(param_2,uVar6);
    bVar4 = uVar5 - 1 < 0x7f;
    *(uint *)(param_2 + 4) = uVar5;
    uVar6 = (ulong)CONCAT14(bVar4,uVar5);
    if (bVar4) goto LAB_01305110;
switchD_01305128_default:
    if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
      return 1;
    }
LAB_013053d8:
    uVar6 = FUN_008148c0(param_2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  bVar2 = *pbVar1;
  uVar6 = (ulong)(uint)bVar2;
  if ((char)bVar2 < '\x01') goto LAB_013053a0;
  *(uint *)(param_2 + 4) = (uint)bVar2;
  *param_2 = (ulong)(pbVar1 + 1);
LAB_01305110:
  uVar5 = (uint)uVar6;
  switch((uint)(uVar6 >> 3) & 0x1fffffff) {
  case 1:
    if (uVar5 != 8) {
LAB_013052d4:
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        return 1;
      }
      goto LAB_013053d8;
    }
    pbVar1 = (byte *)*param_2;
    if ((pbVar1 < (byte *)param_2[1]) && (-1 < (char)*pbVar1)) {
      uVar6 = (ulong)*pbVar1;
      *param_2 = (ulong)(pbVar1 + 1);
    }
    else {
      auVar9 = FUN_0080d3e0(param_2);
      uVar6 = auVar9._0_8_;
      if ((auVar9._8_8_ & 1) == 0) {
        return 0;
      }
    }
    *(bool *)(param_1 + 0x11) = uVar6 != 0;
    pcVar8 = (char *)*param_2;
    if ((pcVar8 < (char *)param_2[1]) && (*pcVar8 == '\x15')) {
      pcVar8 = pcVar8 + 1;
      *param_2 = (ulong)pcVar8;
      if ((int)(char *)param_2[1] - (int)pcVar8 < 4) goto LAB_01305374;
LAB_01305170:
      local_24 = *(undefined4 *)pcVar8;
      *param_2 = (ulong)(pcVar8 + 4);
      *(undefined4 *)(param_1 + 0x14) = local_24;
      pcVar8 = (char *)*param_2;
      pcVar7 = (char *)param_2[1];
      if (pcVar8 < pcVar7) goto LAB_0130518c;
    }
    goto LAB_013050e0;
  case 2:
    if (uVar5 != 0x15) goto LAB_013052d4;
    pcVar8 = (char *)*param_2;
    if (3 < (int)param_2[1] - (int)pcVar8) goto LAB_01305170;
LAB_01305374:
    uVar6 = FUN_0080d200(param_2,&local_24);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x14) = local_24;
    pcVar8 = (char *)*param_2;
    pcVar7 = (char *)param_2[1];
    if (pcVar7 <= pcVar8) goto LAB_013050e0;
LAB_0130518c:
    if (*pcVar8 != '\x1d') goto LAB_013050e0;
    pcVar8 = pcVar8 + 1;
    *param_2 = (ulong)pcVar8;
    if ((int)pcVar7 - (int)pcVar8 < 4) goto LAB_013051ac;
LAB_013051ec:
    local_24 = *(undefined4 *)pcVar8;
    *param_2 = (ulong)(pcVar8 + 4);
    *(undefined4 *)(param_1 + 0x18) = local_24;
    pcVar8 = (char *)*param_2;
    pcVar7 = (char *)param_2[1];
    if (pcVar7 <= pcVar8) goto LAB_013050e0;
    break;
  case 3:
    if (uVar5 != 0x1d) goto LAB_013052d4;
    pcVar8 = (char *)*param_2;
    if (3 < (int)param_2[1] - (int)pcVar8) goto LAB_013051ec;
LAB_013051ac:
    uVar6 = FUN_0080d200(param_2,&local_24);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x18) = local_24;
    pcVar8 = (char *)*param_2;
    pcVar7 = (char *)param_2[1];
    if (pcVar7 <= pcVar8) goto LAB_013050e0;
    break;
  case 4:
    if (uVar5 != 0x25) goto LAB_013052d4;
    pcVar8 = (char *)*param_2;
    iVar3 = (int)param_2[1] - (int)pcVar8;
    goto joined_r0x01305264;
  case 5:
    if (uVar5 != 0x2d) goto LAB_013052d4;
    pcVar8 = (char *)*param_2;
    iVar3 = (int)param_2[1] - (int)pcVar8;
    goto joined_r0x013052f4;
  default:
    goto switchD_01305128_default;
  }
  if (*pcVar8 == '%') {
    pcVar8 = pcVar8 + 1;
    *param_2 = (ulong)pcVar8;
    iVar3 = (int)pcVar7 - (int)pcVar8;
joined_r0x01305264:
    if (iVar3 < 4) {
      uVar6 = FUN_0080d200(param_2,&local_24);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x1c) = local_24;
      pcVar8 = (char *)*param_2;
      pcVar7 = (char *)param_2[1];
      if (pcVar7 <= pcVar8) goto LAB_013050e0;
    }
    else {
      local_24 = *(undefined4 *)pcVar8;
      *param_2 = (ulong)(pcVar8 + 4);
      *(undefined4 *)(param_1 + 0x1c) = local_24;
      pcVar8 = (char *)*param_2;
      pcVar7 = (char *)param_2[1];
      if (pcVar7 <= pcVar8) goto LAB_013050e0;
    }
    if (*pcVar8 == '-') {
      pcVar8 = pcVar8 + 1;
      *param_2 = (ulong)pcVar8;
      iVar3 = (int)pcVar7 - (int)pcVar8;
joined_r0x013052f4:
      if (iVar3 < 4) {
        uVar6 = FUN_0080d200(param_2,&local_24);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x20) = local_24;
        if (*param_2 != param_2[1]) goto LAB_013050e0;
      }
      else {
        local_24 = *(undefined4 *)pcVar8;
        *param_2 = (ulong)(pcVar8 + 4);
        *(undefined4 *)(param_1 + 0x20) = local_24;
        if (*param_2 != param_2[1]) goto LAB_013050e0;
      }
      if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined1 *)((long)param_2 + 0x24) = 1;
        return 1;
      }
    }
  }
  goto LAB_013050e0;
}


