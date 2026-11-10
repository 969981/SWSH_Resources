/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dd67d0; name: FUN_00dd67d0
 */


void FUN_00dd67d0(long param_1,int *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  int *local_40;
  uint local_38;
  undefined4 uStack_34;
  
  puVar4 = (ushort *)((long)param_2 - (long)*param_2);
  uVar3 = *puVar4;
  if (10 < uVar3) {
    if ((ulong)puVar4[5] == 0) {
LAB_00dd68e8:
      uVar3 = *puVar4;
    }
    else {
      iVar8 = *(int *)((long)param_2 + (ulong)puVar4[5]);
      if (iVar8 != 1) {
        if (iVar8 == 2) {
          if (0x16 < uVar3) {
            uVar3 = puVar4[0xb];
            if (uVar3 == 0) goto LAB_00dd685c;
            goto LAB_00dd683c;
          }
          lVar7 = 0;
LAB_00dd68d0:
          if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_00dd686c;
LAB_00dd68dc:
          if (lVar7 != *(long *)(param_1 + 8)) {
            return;
          }
        }
        goto LAB_00dd68e8;
      }
      if ((0xc < uVar3) && (uVar3 = puVar4[6], uVar3 != 0)) {
LAB_00dd683c:
        lVar7 = *(long *)((long)param_2 + (ulong)uVar3);
        if (lVar7 != -0x340d631b7bddd9bb) goto LAB_00dd68d0;
        goto LAB_00dd68e8;
      }
LAB_00dd685c:
      lVar7 = 0;
      if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 0x18)) goto LAB_00dd68dc;
LAB_00dd686c:
      *(long *)(param_1 + 8) = lVar7;
      puVar4 = (ushort *)((long)param_2 - (long)*param_2);
      uVar3 = *puVar4;
    }
    if ((10 < uVar3) && ((ulong)puVar4[5] != 0)) {
      iVar8 = *(int *)((long)param_2 + (ulong)puVar4[5]);
      if (iVar8 == 1) {
        if (uVar3 < 0x11) {
          local_38 = 0;
          if (0xe < uVar3) goto LAB_00dd69dc;
LAB_00dd69f8:
          local_38 = local_38 + 1;
        }
        else {
          if ((ulong)puVar4[8] == 0) {
LAB_00dd69dc:
            iVar8 = 0;
            uVar5 = (ulong)puVar4[7];
            if (uVar5 == 0) goto LAB_00dd699c;
LAB_00dd69e4:
            local_38 = *(uint *)((long)param_2 + uVar5);
          }
          else {
            iVar8 = *(int *)((long)param_2 + (ulong)puVar4[8]);
            uVar5 = (ulong)puVar4[7];
            if (uVar5 != 0) goto LAB_00dd69e4;
LAB_00dd699c:
            local_38 = 0;
          }
          if (1 < iVar8 - 1U) {
            if (iVar8 != 0) goto LAB_00dd68f4;
            goto LAB_00dd69f8;
          }
        }
        if ((int)local_38 < 0) goto LAB_00dd68f8;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar6 = *(long *)(param_1 + 0x18);
        if (lVar7 != lVar6) goto LAB_00dd6a0c;
      }
      else {
        if (iVar8 != 2) goto LAB_00dd68f4;
        if ((uVar3 < 0x15) || ((ulong)puVar4[10] == 0)) {
          local_38 = 0;
          lVar7 = *(long *)(param_1 + 0x10);
          lVar6 = *(long *)(param_1 + 0x18);
          if (lVar7 != lVar6) goto LAB_00dd6a0c;
        }
        else {
          local_38 = (uint)(*(char *)((long)param_2 + (ulong)puVar4[10]) != '\0');
          lVar7 = *(long *)(param_1 + 0x10);
          lVar6 = *(long *)(param_1 + 0x18);
          if (lVar7 == lVar6) goto LAB_00dd6a38;
LAB_00dd6a0c:
          lVar9 = lVar7;
          if (*(uint *)(lVar7 + 8) != local_38) {
            do {
              lVar7 = lVar9 + 0x10;
              if (lVar6 == lVar7) goto LAB_00dd68f8;
              puVar1 = (uint *)(lVar9 + 0x18);
              lVar9 = lVar7;
            } while (*puVar1 != local_38);
          }
        }
      }
LAB_00dd6a38:
      if (lVar7 != lVar6) {
        return;
      }
      goto LAB_00dd68f8;
    }
  }
LAB_00dd68f4:
  local_38 = 0xffffffff;
LAB_00dd68f8:
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  local_40 = param_2;
  if (puVar2 == *(undefined8 **)(param_1 + 0x20)) {
    FUN_00dd6ad0(param_1 + 0x10,&local_40);
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar2 = local_40;
    puVar2[1] = CONCAT44(uStack_34,local_38);
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 0x10;
  }
  return;
}


