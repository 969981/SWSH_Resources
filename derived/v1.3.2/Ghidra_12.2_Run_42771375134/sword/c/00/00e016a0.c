/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e016a0; name: FUN_00e016a0
 */


int FUN_00e016a0(long param_1,void *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 local_1a0 [4];
  undefined8 local_180;
  undefined8 local_150;
  undefined8 local_120;
  undefined8 local_f0;
  undefined8 local_c0;
  undefined8 local_90;
  undefined8 local_60;
  undefined8 local_30;
  
  local_180 = 0;
  local_150 = 0;
  local_120 = 0;
  local_f0 = 0;
  local_c0 = 0;
  local_90 = 0;
  local_60 = 0;
  local_30 = 0;
  uVar1 = *param_3;
  if ((int)uVar1 < 1) {
    uVar7 = 0;
    iVar11 = 0;
  }
  else {
    uVar6 = 0;
    iVar11 = 0;
    uVar7 = 0;
LAB_00e01708:
    do {
      if (7 < uVar6) goto LAB_00e01844;
      puVar8 = (undefined8 *)((long)param_2 + uVar6 * 0x30);
      if (0 < *(int *)(param_1 + 0x2d8)) {
        uVar2 = 0;
        do {
          if (7 < uVar2) goto LAB_00e01844;
          lVar4 = *(long *)(param_1 + 0x298 + uVar2 * 8);
          if ((lVar4 != -0x340d631b7bddd9bb) && (puVar8[4] == lVar4)) {
            iVar11 = 1;
            goto joined_r0x00e017f8;
          }
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < (long)*(int *)(param_1 + 0x2d8));
      }
      if (iVar11 == 0) {
        lVar4 = *(long *)(param_1 + 0x2e8) - *(long *)(param_1 + 0x2e0);
        if (lVar4 != 0) {
          uVar2 = 0;
          do {
            lVar5 = *(long *)(*(long *)(param_1 + 0x2e0) + uVar2 * 8);
            if ((lVar5 != -0x340d631b7bddd9bb) && (puVar8[4] == lVar5)) {
              iVar11 = 1;
              uVar6 = uVar6 + 1;
              if ((long)(int)uVar1 <= (long)uVar6) goto LAB_00e0181c;
              goto LAB_00e01708;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < (ulong)(lVar4 >> 3));
        }
        iVar11 = 0;
      }
      else {
        iVar11 = 1;
      }
      if (7 < uVar7) {
LAB_00e01844:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = (long)(int)uVar7;
      uVar3 = puVar8[3];
      local_1a0[lVar4 * 6 + 1] = puVar8[1];
      local_1a0[lVar4 * 6] = *puVar8;
      uVar10 = puVar8[2];
      uVar9 = puVar8[4];
      uVar7 = uVar7 + 1;
      local_1a0[lVar4 * 6 + 3] = uVar3;
      local_1a0[lVar4 * 6 + 4] = uVar9;
      local_1a0[lVar4 * 6 + 2] = uVar10;
joined_r0x00e017f8:
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)(int)uVar1);
  }
LAB_00e0181c:
  *param_3 = uVar7;
  memcpy(param_2,local_1a0,0x180);
  return iVar11;
}


