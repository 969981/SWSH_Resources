/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ad900; name: FUN_011ad900
 */


undefined8 FUN_011ad900(long param_1,ulong *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 auVar7 [16];
  
LAB_011ad914:
  do {
    pbVar6 = (byte *)*param_2;
    if (pbVar6 < (byte *)param_2[1]) {
      bVar1 = *pbVar6;
      uVar4 = (ulong)(uint)bVar1;
      if ((char)bVar1 < '\x01') goto LAB_011ada58;
      *(uint *)(param_2 + 4) = (uint)bVar1;
      *param_2 = (ulong)(pbVar6 + 1);
LAB_011ad944:
      uVar5 = (uint)(uVar4 >> 3) & 0x1fffffff;
      uVar3 = (uint)uVar4;
      if (uVar5 == 2) {
        if (uVar3 == 0x10) {
          pbVar6 = (byte *)*param_2;
          if (pbVar6 < (byte *)param_2[1]) {
LAB_011ad9ac:
            if ((char)*pbVar6 < '\0') goto LAB_011ada30;
            *(ulong *)(param_1 + 0x18) = (ulong)*pbVar6;
            uVar4 = *param_2;
            *param_2 = uVar4 + 1;
            if (uVar4 + 1 != param_2[1]) goto LAB_011ad914;
          }
          else {
LAB_011ada30:
            auVar7 = FUN_0080d3e0(param_2);
            *(long *)(param_1 + 0x18) = auVar7._0_8_;
            if ((auVar7._8_8_ & 1) == 0) {
              return 0;
            }
            if (*param_2 != param_2[1]) goto LAB_011ad914;
          }
          if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
            *(undefined4 *)(param_2 + 4) = 0;
            *(undefined1 *)((long)param_2 + 0x24) = 1;
            return 1;
          }
          goto LAB_011ad914;
        }
      }
      else {
        if (uVar5 != 1) goto LAB_011ada7c;
        if (uVar3 == 8) {
          pbVar6 = (byte *)*param_2;
          if ((pbVar6 < (byte *)param_2[1]) && (-1 < (char)*pbVar6)) {
            uVar4 = (ulong)*pbVar6;
            *param_2 = (ulong)(pbVar6 + 1);
          }
          else {
            auVar7 = FUN_0080d3e0(param_2);
            uVar4 = auVar7._0_8_;
            if ((auVar7._8_8_ & 1) == 0) {
              return 0;
            }
          }
          *(bool *)(param_1 + 0x20) = uVar4 != 0;
          pbVar6 = (byte *)*param_2;
          if ((pbVar6 < (byte *)param_2[1]) && (*pbVar6 == 0x10)) {
            pbVar6 = pbVar6 + 1;
            *param_2 = (ulong)pbVar6;
            if (pbVar6 < (byte *)param_2[1]) goto LAB_011ad9ac;
            goto LAB_011ada30;
          }
          goto LAB_011ad914;
        }
      }
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        return 1;
      }
    }
    else {
      uVar4 = 0;
LAB_011ada58:
      uVar3 = FUN_0080d8c0(param_2,uVar4);
      bVar2 = uVar3 - 1 < 0x7f;
      *(uint *)(param_2 + 4) = uVar3;
      uVar4 = (ulong)CONCAT14(bVar2,uVar3);
      if (bVar2) goto LAB_011ad944;
LAB_011ada7c:
      if (uVar3 == 0) {
        return 1;
      }
      if ((uVar3 & 7) == 4) {
        return 1;
      }
    }
    uVar4 = FUN_008148c0(param_2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  } while( true );
}


