/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb8240; name: FUN_00eb8240
 */


void FUN_00eb8240(long *param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  long extraout_var_00;
  long local_48;
  
  if ((int)param_1[0x4f] < 1) {
    return;
  }
  if (param_1[0x11] == 0) {
    local_48 = 0;
LAB_00eb84bc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_00e73550(&local_48);
  if (local_48 == 0) goto LAB_00eb84bc;
  iVar4 = FUN_00e95a90((int)param_1[0x13]);
  if (*(char *)(local_48 + 0x438) == '\0') {
    bVar2 = false;
    cVar6 = *(char *)((long)param_1 + 0x9c);
    if (cVar6 != '\0') goto LAB_00eb82c0;
LAB_00eb82f0:
    iVar8 = 0;
    iVar7 = iVar4;
  }
  else {
    bVar2 = iVar4 == (int)((ulong)(*(long *)(local_48 + 0x3c0) - *(long *)(local_48 + 0x3b8)) >> 5)
                     + -1;
    cVar6 = *(char *)((long)param_1 + 0x9c);
    if (cVar6 == '\0') goto LAB_00eb82f0;
LAB_00eb82c0:
    iVar8 = (int)((ulong)(*(long *)(local_48 + 0x3c0) - *(long *)(local_48 + 0x3b8)) >> 5) + -1;
    iVar7 = 0;
    if (0.0 < *(float *)(param_1 + 0x13)) {
      iVar7 = iVar4 + 1;
    }
  }
  bVar3 = iVar4 == iVar8;
  if ((*(int *)(local_48 + 0x3a8) == 1) &&
     ((iVar7 == 0 ||
      ((int)((ulong)(*(long *)(local_48 + 0x3c0) - *(long *)(local_48 + 0x3b8)) >> 5) + -1 <= iVar7)
      ))) {
    bVar3 = iVar4 == iVar8 || (int)param_1[0xc] != 8;
  }
  if ((!(bool)(bVar2 | bVar3)) && (iVar7 != *(int *)((long)param_1 + 0x27c))) {
    *(int *)((long)param_1 + 0x27c) = iVar7;
    if (0 < (int)param_1[0x4f]) {
      uVar10 = 0;
      plVar9 = param_1 + 0x1d;
      while( true ) {
        if (0x18 < uVar10) goto LAB_00eb84b4;
        if (iVar7 == (int)*plVar9) break;
        uVar10 = uVar10 + 1;
        plVar9 = plVar9 + 2;
        if ((long)(int)param_1[0x4f] <= (long)uVar10) goto LAB_00eb8480;
      }
      if ((int)uVar10 < 0) goto LAB_00eb8480;
      if ((int)param_1[0x12] != 0) goto LAB_00eb8430;
      if (cVar6 == '\0') {
        iVar4 = iVar4 + -1;
LAB_00eb83bc:
        if (-1 < iVar4) {
          fVar11 = (float)FUN_00de1380(local_48 + 0x3b0,0);
          fVar11 = fVar11 + 0.0;
          if (iVar4 != 0) {
            iVar7 = 0;
            do {
              iVar7 = iVar7 + 1;
              fVar12 = (float)FUN_00de1380(local_48 + 0x3b0,iVar7);
              fVar11 = fVar11 + fVar12;
            } while (iVar4 != iVar7);
          }
LAB_00eb8404:
          uVar5 = DAT_01d4c5c0;
          *(float *)(param_1 + 0x13) = fVar11;
          FUN_00e746a0(uVar5,param_1);
          (**(code **)(*param_1 + 0xa0))((int)param_1[0x13],param_1);
          param_1[0x17] = extraout_var_00;
          param_1[0x16] = CONCAT44(extraout_var,extraout_s0);
LAB_00eb8430:
          if (0x18 < uVar10) {
LAB_00eb84b4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar1 = plVar9[1];
          param_1[0x50] = *plVar9;
          param_1[0x51] = lVar1;
          (**(code **)(*param_1 + 0x98))(param_1);
          uVar5 = 10;
          if (DAT_01d4c708 < ABS(*(float *)((long)param_1 + 0x284))) {
            *(undefined4 *)(param_1 + 0x56) = 10;
            uVar5 = 6;
          }
          *(undefined4 *)(param_1 + 0xc) = uVar5;
          *(undefined1 *)((long)param_1 + 0x6a) = 0;
          goto LAB_00eb8480;
        }
      }
      else if (0.0 < *(float *)(param_1 + 0x13)) goto LAB_00eb83bc;
      fVar11 = 0.0;
      goto LAB_00eb8404;
    }
  }
LAB_00eb8480:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


