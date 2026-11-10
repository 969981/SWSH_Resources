/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085ae50; name: FUN_0085ae50
 */


undefined8 FUN_0085ae50(long param_1,ulong *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  puVar2 = PTR_DAT_02716d10;
LAB_0085ae7c:
  do {
    pbVar9 = (byte *)*param_2;
    if (pbVar9 < (byte *)param_2[1]) {
      bVar1 = *pbVar9;
      uVar6 = (ulong)(uint)bVar1;
      if ((char)bVar1 < '\x01') goto LAB_0085afc0;
      *(uint *)(param_2 + 4) = (uint)bVar1;
      *param_2 = (ulong)(pbVar9 + 1);
LAB_0085aeac:
      uVar8 = (uint)(uVar6 >> 3) & 0x1fffffff;
      uVar11 = (uint)uVar6;
      if (uVar8 == 2) {
        if (uVar11 == 0x10) {
          pbVar9 = (byte *)*param_2;
          if (pbVar9 < (byte *)param_2[1]) {
LAB_0085af4c:
            if ((char)*pbVar9 < '\0') goto LAB_0085af70;
            uVar6 = (ulong)*pbVar9;
            *param_2 = (ulong)(pbVar9 + 1);
          }
          else {
LAB_0085af70:
            auVar12 = FUN_0080d3e0(param_2);
            uVar6 = auVar12._0_8_;
            if ((auVar12._8_8_ & 1) == 0) {
              return 0;
            }
          }
          *(bool *)(param_1 + 0x20) = uVar6 != 0;
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
          if ((*param_2 == param_2[1]) &&
             ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
            *(undefined4 *)(param_2 + 4) = 0;
            *(undefined1 *)((long)param_2 + 0x24) = 1;
            return 1;
          }
          goto LAB_0085ae7c;
        }
      }
      else {
        if (uVar8 != 1) goto LAB_0085afe4;
        if (uVar11 == 10) {
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
          lVar7 = *(long *)(param_1 + 0x18);
          if (lVar7 == *(long *)puVar2) {
            FUN_009b58d0((long *)(param_1 + 0x18),*(long *)puVar2);
            lVar7 = *(long *)(param_1 + 0x18);
          }
          uVar6 = FUN_008160d0(param_2,lVar7);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          pbVar9 = (byte *)*param_2;
          if ((pbVar9 < (byte *)param_2[1]) && (*pbVar9 == 0x10)) {
            pbVar9 = pbVar9 + 1;
            *param_2 = (ulong)pbVar9;
            if (pbVar9 < (byte *)param_2[1]) goto LAB_0085af4c;
            goto LAB_0085af70;
          }
          goto LAB_0085ae7c;
        }
      }
      if ((uVar11 == 0) || ((uVar11 & 7) == 4)) {
        return 1;
      }
    }
    else {
      uVar6 = 0;
LAB_0085afc0:
      iVar4 = FUN_0080d8c0(param_2,uVar6);
      bVar3 = iVar4 - 1U < 0x7f;
      *(int *)(param_2 + 4) = iVar4;
      uVar6 = (ulong)CONCAT14(bVar3,iVar4);
      if (bVar3) goto LAB_0085aeac;
LAB_0085afe4:
      if ((uint)uVar6 == 0) {
        return 1;
      }
      if (((uint)uVar6 & 7) == 4) {
        return 1;
      }
    }
    uVar10 = *(ulong *)(param_1 + 8);
    if ((uVar10 & 1) == 0) {
      uVar5 = FUN_009bb7d0((ulong *)(param_1 + 8));
      uVar6 = FUN_00810550(param_2,uVar6 & 0xffffffff,uVar5);
    }
    else {
      uVar6 = FUN_00810550(param_2,uVar6 & 0xffffffff,uVar10 & 0xfffffffffffffffe);
    }
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  } while( true );
}


