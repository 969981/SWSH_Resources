/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009bf030; name: FUN_009bf030
 */


undefined8 FUN_009bf030(long param_1,ulong *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 auVar9 [16];
  
LAB_009bf044:
  do {
    while (pbVar8 = (byte *)*param_2, (byte *)param_2[1] <= pbVar8) {
      uVar5 = 0;
LAB_009bf228:
      uVar3 = FUN_0080d8c0(param_2,uVar5);
      bVar2 = uVar3 - 1 < 0x7f;
      *(uint *)(param_2 + 4) = uVar3;
      uVar5 = (ulong)CONCAT14(bVar2,uVar3);
      if (bVar2) goto LAB_009bf074;
LAB_009bf24c:
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        return 1;
      }
LAB_009bf260:
      uVar5 = FUN_008148c0(param_2);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    bVar1 = *pbVar8;
    uVar5 = (ulong)(uint)bVar1;
    if ((char)bVar1 < '\x01') goto LAB_009bf228;
    *(uint *)(param_2 + 4) = (uint)bVar1;
    *param_2 = (ulong)(pbVar8 + 1);
LAB_009bf074:
    uVar6 = (uint)(uVar5 >> 3) & 0x1fffffff;
    uVar3 = (uint)uVar5;
    if (uVar6 != 3) {
      if (uVar6 == 2) {
        if (uVar3 == 0x10) {
          pbVar8 = (byte *)*param_2;
          if (pbVar8 < (byte *)param_2[1]) goto LAB_009bf170;
LAB_009bf0e8:
          uVar3 = 0;
LAB_009bf1dc:
          lVar4 = FUN_0080d5d0(param_2,uVar3);
          *(int *)(param_1 + 0x20) = (int)lVar4;
          if (lVar4 < 0) {
            return 0;
          }
          pbVar8 = (byte *)*param_2;
          pbVar7 = (byte *)param_2[1];
          if (pbVar8 < pbVar7) {
LAB_009bf198:
            if (*pbVar8 == 0x18) {
              pbVar8 = pbVar8 + 1;
              *param_2 = (ulong)pbVar8;
              if (pbVar8 < pbVar7) goto LAB_009bf104;
              goto LAB_009bf1b4;
            }
          }
          goto LAB_009bf044;
        }
      }
      else {
        if (uVar6 != 1) goto LAB_009bf24c;
        if (uVar3 == 8) {
          if (((byte *)*param_2 < (byte *)param_2[1]) &&
             (bVar1 = *(byte *)*param_2, -1 < (char)bVar1)) {
            *(ulong *)(param_1 + 0x18) = (ulong)bVar1;
            pbVar8 = (byte *)(*param_2 + 1);
            *param_2 = (ulong)pbVar8;
            pbVar7 = (byte *)param_2[1];
            if (pbVar7 <= pbVar8) goto LAB_009bf044;
          }
          else {
            auVar9 = FUN_0080d3e0(param_2);
            *(long *)(param_1 + 0x18) = auVar9._0_8_;
            if ((auVar9._8_8_ & 1) == 0) {
              return 0;
            }
            pbVar8 = (byte *)*param_2;
            pbVar7 = (byte *)param_2[1];
            if (pbVar7 <= pbVar8) goto LAB_009bf044;
          }
          if (*pbVar8 == 0x10) {
            pbVar8 = pbVar8 + 1;
            *param_2 = (ulong)pbVar8;
            if (pbVar7 <= pbVar8) goto LAB_009bf0e8;
LAB_009bf170:
            uVar3 = (uint)*pbVar8;
            if ((char)*pbVar8 < '\0') goto LAB_009bf1dc;
            *(uint *)(param_1 + 0x20) = uVar3;
            pbVar8 = (byte *)(*param_2 + 1);
            *param_2 = (ulong)pbVar8;
            pbVar7 = (byte *)param_2[1];
            if (pbVar8 < pbVar7) goto LAB_009bf198;
          }
          goto LAB_009bf044;
        }
      }
LAB_009bf150:
      if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
        return 1;
      }
      goto LAB_009bf260;
    }
    if (uVar3 != 0x18) goto LAB_009bf150;
    pbVar8 = (byte *)*param_2;
    if (pbVar8 < (byte *)param_2[1]) {
LAB_009bf104:
      uVar3 = (uint)*pbVar8;
      if ((char)*pbVar8 < '\0') goto LAB_009bf1b8;
      *(uint *)(param_1 + 0x24) = uVar3;
      uVar5 = *param_2;
      *param_2 = uVar5 + 1;
      if (uVar5 + 1 != param_2[1]) goto LAB_009bf044;
    }
    else {
LAB_009bf1b4:
      uVar3 = 0;
LAB_009bf1b8:
      lVar4 = FUN_0080d5d0(param_2,uVar3);
      *(int *)(param_1 + 0x24) = (int)lVar4;
      if (lVar4 < 0) {
        return 0;
      }
      if (*param_2 != param_2[1]) goto LAB_009bf044;
    }
    if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  } while( true );
}


