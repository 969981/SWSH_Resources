/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f26c90; name: FUN_00f26c90
 */


void FUN_00f26c90(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  long extraout_var_00;
  long local_48;
  
  if ((int)param_1[0x4e] < 1) {
    return;
  }
  if (param_1[0x11] == 0) {
    local_48 = 0;
LAB_00f26edc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_00e73550(&local_48);
  if (local_48 == 0) goto LAB_00f26edc;
  iVar3 = FUN_00e95a90((int)param_1[0x13]);
  if (*(char *)(local_48 + 0x438) == '\0') {
    bVar2 = false;
    cVar5 = *(char *)((long)param_1 + 0x9c);
    if (cVar5 != '\0') goto LAB_00f26d10;
LAB_00f26d98:
    iVar6 = iVar3;
    if (bVar2 || iVar3 == 0) goto LAB_00f26ea0;
  }
  else {
    bVar2 = iVar3 == (int)((ulong)(*(long *)(local_48 + 0x3c0) - *(long *)(local_48 + 0x3b8)) >> 5)
                     + -1;
    cVar5 = *(char *)((long)param_1 + 0x9c);
    if (cVar5 == '\0') goto LAB_00f26d98;
LAB_00f26d10:
    iVar6 = 0;
    if (0.0 < *(float *)(param_1 + 0x13)) {
      iVar6 = iVar3 + 1;
    }
    if ((bool)(bVar2 | iVar3 == (int)((ulong)(*(long *)(local_48 + 0x3c0) -
                                             *(long *)(local_48 + 0x3b8)) >> 5) + -1))
    goto LAB_00f26ea0;
  }
  if (iVar6 != *(int *)((long)param_1 + 0x274)) {
    *(int *)((long)param_1 + 0x274) = iVar6;
    if (0 < (int)param_1[0x4e]) {
      uVar8 = 0;
      lVar7 = 0xe0;
      while( true ) {
        if (0x18 < uVar8) goto LAB_00f26ed4;
        if (iVar6 == *(int *)((long)param_1 + lVar7)) break;
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x10;
        if ((long)(int)param_1[0x4e] <= (long)uVar8) goto LAB_00f26ea0;
      }
      if ((int)uVar8 < 0) goto LAB_00f26ea0;
      if ((int)param_1[0x12] != 0) goto LAB_00f26e4c;
      if (cVar5 == '\0') {
        iVar3 = iVar3 + -1;
LAB_00f26dd8:
        if (-1 < iVar3) {
          fVar9 = (float)FUN_00de1380(local_48 + 0x3b0,0);
          fVar9 = fVar9 + 0.0;
          if (iVar3 != 0) {
            iVar6 = 0;
            do {
              iVar6 = iVar6 + 1;
              fVar10 = (float)FUN_00de1380(local_48 + 0x3b0,iVar6);
              fVar9 = fVar9 + fVar10;
            } while (iVar3 != iVar6);
          }
LAB_00f26e20:
          uVar4 = DAT_01d4c5c0;
          *(float *)(param_1 + 0x13) = fVar9;
          FUN_00e746a0(uVar4,param_1);
          (**(code **)(*param_1 + 0xa0))((int)param_1[0x13],param_1);
          param_1[0x17] = extraout_var_00;
          param_1[0x16] = CONCAT44(extraout_var,extraout_s0);
LAB_00f26e4c:
          if (0x18 < uVar8) {
LAB_00f26ed4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar1 = *(long *)((long)param_1 + lVar7);
          param_1[0x50] = ((long *)((long)param_1 + lVar7))[1];
          param_1[0x4f] = lVar1;
          (**(code **)(*param_1 + 0x98))(param_1);
          uVar4 = 8;
          if (DAT_01d4c708 < ABS(*(float *)((long)param_1 + 0x27c))) {
            *(undefined4 *)(param_1 + 0x56) = 8;
            uVar4 = 6;
          }
          *(undefined4 *)(param_1 + 0xc) = uVar4;
          *(undefined1 *)((long)param_1 + 0x6a) = 0;
          goto LAB_00f26ea0;
        }
      }
      else if (0.0 < *(float *)(param_1 + 0x13)) goto LAB_00f26dd8;
      fVar9 = 0.0;
      goto LAB_00f26e20;
    }
  }
LAB_00f26ea0:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


