/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b16f0; name: FUN_011b16f0
 */


undefined8 FUN_011b16f0(long param_1,ulong *param_2)

{
  long *plVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte *pbVar9;
  
  puVar3 = PTR_DAT_02716d10;
  plVar1 = (long *)(param_1 + 0x18);
LAB_011b1714:
  do {
    while (pbVar9 = (byte *)*param_2, (byte *)param_2[1] <= pbVar9) {
      uVar6 = 0;
LAB_011b1850:
      uVar5 = FUN_0080d8c0(param_2,uVar6);
      bVar4 = uVar5 - 1 < 0x7f;
      *(uint *)(param_2 + 4) = uVar5;
      uVar6 = (ulong)CONCAT14(bVar4,uVar5);
      if (bVar4) goto LAB_011b1744;
LAB_011b1874:
      if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
        return 1;
      }
LAB_011b1888:
      uVar6 = FUN_008148c0(param_2);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
    }
    bVar2 = *pbVar9;
    uVar6 = (ulong)(uint)bVar2;
    if ((char)bVar2 < '\x01') goto LAB_011b1850;
    *(uint *)(param_2 + 4) = (uint)bVar2;
    *param_2 = (ulong)(pbVar9 + 1);
LAB_011b1744:
    uVar8 = (uint)(uVar6 >> 3) & 0x1fffffff;
    uVar5 = (uint)uVar6;
    if (uVar8 != 2) {
      if (uVar8 != 1) goto LAB_011b1874;
      if (uVar5 != 10) {
LAB_011b17c4:
        if ((uVar5 == 0) || ((uVar5 & 7) == 4)) {
          return 1;
        }
        goto LAB_011b1888;
      }
      lVar7 = *plVar1;
      if (lVar7 == *(long *)puVar3) {
        FUN_009b58d0(plVar1,*(long *)puVar3);
        lVar7 = *plVar1;
      }
      uVar6 = FUN_008160d0(param_2,lVar7);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      pbVar9 = (byte *)*param_2;
      if ((pbVar9 < (byte *)param_2[1]) && (*pbVar9 == 0x10)) {
        pbVar9 = pbVar9 + 1;
        *param_2 = (ulong)pbVar9;
        if ((byte *)param_2[1] <= pbVar9) goto LAB_011b17b4;
        goto LAB_011b17e4;
      }
      goto LAB_011b1714;
    }
    if (uVar5 != 0x10) goto LAB_011b17c4;
    pbVar9 = (byte *)*param_2;
    if (pbVar9 < (byte *)param_2[1]) {
LAB_011b17e4:
      uVar5 = (uint)*pbVar9;
      if ((char)*pbVar9 < '\0') goto LAB_011b1828;
      *(uint *)(param_1 + 0x20) = uVar5;
      uVar6 = *param_2;
      *param_2 = uVar6 + 1;
      if (uVar6 + 1 != param_2[1]) goto LAB_011b1714;
    }
    else {
LAB_011b17b4:
      uVar5 = 0;
LAB_011b1828:
      lVar7 = FUN_0080d5d0(param_2,uVar5);
      *(int *)(param_1 + 0x20) = (int)lVar7;
      if (lVar7 < 0) {
        return 0;
      }
      if (*param_2 != param_2[1]) goto LAB_011b1714;
    }
    if ((*(int *)((long)param_2 + 0x2c) != 0) || ((int)param_2[3] == (int)param_2[5])) {
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined1 *)((long)param_2 + 0x24) = 1;
      return 1;
    }
  } while( true );
}


