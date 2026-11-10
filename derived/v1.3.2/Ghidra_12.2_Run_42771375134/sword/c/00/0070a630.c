/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070a630; name: FUN_0070a630
 */


void FUN_0070a630(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  
LAB_0070a67c:
  do {
    plVar12 = param_2 + -2;
LAB_0070a698:
    plVar13 = param_1;
    lVar7 = (long)param_2 - (long)plVar13;
    uVar4 = lVar7 >> 4;
    switch(uVar4) {
    case 0:
    case 1:
      return;
    case 2:
      plVar12 = param_2 + -2;
      bVar2 = *(ulong *)(*plVar13 + 0xa0) <= *(ulong *)(*plVar12 + 0xa0);
      if (*(ulong *)(*plVar12 + 0xa0) == *(ulong *)(*plVar13 + 0xa0)) {
        bVar2 = (ulong)plVar13[1] <= (ulong)param_2[-1];
      }
      if (!bVar2) {
        lVar7 = *plVar13;
        lVar8 = plVar13[1];
        lVar11 = param_2[-1];
        *plVar13 = *plVar12;
        plVar13[1] = lVar11;
        *plVar12 = lVar7;
        param_2[-1] = lVar8;
        return;
      }
      return;
    case 3:
      FUN_0070ac10(plVar13,plVar13 + 2,plVar12);
      return;
    case 4:
      FUN_0070ada0(plVar13,plVar13 + 2,plVar13 + 4,plVar12);
      return;
    case 5:
      FUN_0070aeb0(plVar13,plVar13 + 2,plVar13 + 4,plVar13 + 6,plVar12);
      return;
    }
    if (lVar7 < 0x1f0) {
      FUN_0070ac10(plVar13,plVar13 + 2,plVar13 + 4);
      if (plVar13 + 6 == param_2) {
        return;
      }
      lVar7 = 0;
      plVar12 = plVar13 + 6;
      plVar10 = plVar13 + 4;
      break;
    }
    uVar9 = uVar4;
    if ((long)uVar4 < 0) {
      uVar9 = uVar4 + 1;
    }
    plVar10 = plVar13 + ((long)uVar9 >> 1) * 2;
    if (lVar7 < 0x3e71) {
      iVar3 = FUN_0070ac10(plVar13,plVar10,plVar12);
    }
    else {
      uVar9 = uVar4 + 3;
      if (-1 < (long)uVar4) {
        uVar9 = uVar4;
      }
      lVar7 = (uVar9 & 0x3ffffffffffffffc) * 4;
      iVar3 = FUN_0070aeb0(plVar13,(long)plVar13 + lVar7,plVar10,(long)plVar10 + lVar7,plVar12);
    }
    uVar4 = *(ulong *)(*plVar13 + 0xa0);
    uVar9 = *(ulong *)(*plVar10 + 0xa0);
    if (uVar4 == uVar9) {
      if ((ulong)plVar13[1] < (ulong)plVar10[1]) goto LAB_0070a734;
LAB_0070a74c:
      if (plVar13 != param_2 + -4) {
        plVar5 = param_2 + -4;
        while( true ) {
          bVar2 = uVar9 <= *(ulong *)(*plVar5 + 0xa0);
          if (*(ulong *)(*plVar5 + 0xa0) == uVar9) {
            bVar2 = (ulong)plVar10[1] <= (ulong)plVar5[1];
          }
          if (!bVar2) break;
          plVar5 = plVar5 + -2;
          if (plVar13 == plVar5) goto LAB_0070a8d4;
        }
        lVar7 = *plVar13;
        lVar8 = plVar13[1];
        iVar3 = iVar3 + 1;
        lVar11 = plVar5[1];
        *plVar13 = *plVar5;
        plVar13[1] = lVar11;
        *plVar5 = lVar7;
        plVar5[1] = lVar8;
        plVar14 = plVar13 + 2;
        if (plVar14 < plVar5) goto LAB_0070a7e0;
        goto LAB_0070a848;
      }
LAB_0070a8d4:
      plVar10 = plVar13 + 2;
      bVar2 = *(ulong *)(*plVar12 + 0xa0) <= uVar4;
      if (uVar4 == *(ulong *)(*plVar12 + 0xa0)) {
        bVar2 = (ulong)param_2[-1] <= (ulong)plVar13[1];
      }
      if (bVar2) {
        if (plVar10 == plVar12) {
          return;
        }
        plVar10 = plVar13 + 4;
        while( true ) {
          bVar2 = *(ulong *)(plVar10[-2] + 0xa0) <= uVar4;
          if (uVar4 == *(ulong *)(plVar10[-2] + 0xa0)) {
            bVar2 = (ulong)plVar10[-1] <= (ulong)plVar13[1];
          }
          if (!bVar2) break;
          plVar10 = plVar10 + 2;
          if (param_2 == plVar10) {
            return;
          }
        }
        lVar7 = plVar10[-2];
        lVar8 = plVar10[-1];
        lVar11 = param_2[-1];
        plVar10[-2] = *plVar12;
        plVar10[-1] = lVar11;
        *plVar12 = lVar7;
        param_2[-1] = lVar8;
      }
      if (plVar10 == plVar12) {
        return;
      }
      do {
        uVar4 = *(ulong *)(*plVar13 + 0xa0);
        uVar9 = *(ulong *)(*plVar10 + 0xa0);
        if (uVar4 != uVar9) goto LAB_0070a9ac;
        while( true ) {
          param_1 = plVar10;
          if ((ulong)plVar13[1] < (ulong)plVar10[1]) break;
          while( true ) {
            plVar10 = plVar10 + 2;
            uVar9 = *(ulong *)(*plVar10 + 0xa0);
            if (uVar4 == uVar9) break;
LAB_0070a9ac:
            param_1 = plVar10;
            if (uVar4 < uVar9) goto LAB_0070a9b0;
          }
        }
LAB_0070a9b0:
        do {
          plVar14 = plVar12;
          plVar12 = plVar14 + -2;
          bVar2 = *(ulong *)(*plVar12 + 0xa0) <= uVar4;
          if (uVar4 == *(ulong *)(*plVar12 + 0xa0)) {
            bVar2 = (ulong)plVar14[-1] <= (ulong)plVar13[1];
          }
        } while (!bVar2);
        if (plVar12 <= param_1) {
          uVar15 = 4;
          goto LAB_0070a9e8;
        }
        lVar7 = *param_1;
        lVar8 = param_1[1];
        lVar11 = plVar14[-1];
        plVar10 = param_1 + 2;
        *param_1 = *plVar12;
        param_1[1] = lVar11;
        *plVar12 = lVar7;
        plVar14[-1] = lVar8;
      } while( true );
    }
    if (uVar9 <= uVar4) goto LAB_0070a74c;
LAB_0070a734:
    plVar14 = plVar13 + 2;
    plVar5 = plVar12;
    if (plVar14 < plVar12) {
LAB_0070a7e0:
      do {
        uVar4 = *(ulong *)(*plVar10 + 0xa0);
        uVar9 = *(ulong *)(*plVar14 + 0xa0);
        if (uVar9 != uVar4) goto LAB_0070a81c;
        while ((ulong)plVar14[1] < (ulong)plVar10[1]) {
          while( true ) {
            plVar14 = plVar14 + 2;
            uVar9 = *(ulong *)(*plVar14 + 0xa0);
            if (uVar9 == uVar4) break;
LAB_0070a81c:
            if (uVar4 <= uVar9) goto LAB_0070a820;
          }
        }
LAB_0070a820:
        do {
          plVar6 = plVar5;
          plVar5 = plVar6 + -2;
          bVar2 = uVar4 <= *(ulong *)(*plVar5 + 0xa0);
          if (*(ulong *)(*plVar5 + 0xa0) == uVar4) {
            bVar2 = (ulong)plVar10[1] <= (ulong)plVar6[-1];
          }
        } while (bVar2);
        if (plVar5 < plVar14) break;
        lVar7 = *plVar14;
        lVar8 = plVar14[1];
        iVar3 = iVar3 + 1;
        lVar11 = plVar6[-1];
        plVar1 = plVar5;
        if (plVar10 != plVar14) {
          plVar1 = plVar10;
        }
        *plVar14 = *plVar5;
        plVar14[1] = lVar11;
        plVar14 = plVar14 + 2;
        *plVar5 = lVar7;
        plVar6[-1] = lVar8;
        plVar10 = plVar1;
      } while( true );
    }
LAB_0070a848:
    if (plVar14 != plVar10) {
      bVar2 = *(ulong *)(*plVar14 + 0xa0) <= *(ulong *)(*plVar10 + 0xa0);
      if (*(ulong *)(*plVar10 + 0xa0) == *(ulong *)(*plVar14 + 0xa0)) {
        bVar2 = (ulong)plVar14[1] <= (ulong)plVar10[1];
      }
      if (!bVar2) {
        lVar7 = *plVar14;
        lVar8 = plVar14[1];
        iVar3 = iVar3 + 1;
        lVar11 = plVar10[1];
        *plVar14 = *plVar10;
        plVar14[1] = lVar11;
        *plVar10 = lVar7;
        plVar10[1] = lVar8;
      }
    }
    if (iVar3 != 0) goto LAB_0070a8c0;
    uVar4 = FUN_0070b010(plVar13,plVar14);
    uVar9 = FUN_0070b010(plVar14 + 2,param_2);
    if ((uVar9 & 1) == 0) goto code_r0x0070a8bc;
    bVar2 = (uVar4 & 1) == 0;
    if (bVar2) {
      param_2 = plVar14;
    }
    uVar15 = 1;
    if (bVar2) {
      uVar15 = 2;
    }
    param_1 = plVar13;
    if (4 < uVar15) {
      return;
    }
LAB_0070a9e8:
    if ((1 << (ulong)uVar15 & 0x15U) == 0) {
      return;
    }
  } while( true );
LAB_0070aa98:
  plVar14 = plVar12;
  lVar8 = *plVar14;
  if (*(ulong *)(lVar8 + 0xa0) == *(ulong *)(*plVar10 + 0xa0)) {
    uVar4 = plVar14[1];
    if (uVar4 < (ulong)plVar10[1]) goto LAB_0070aad4;
  }
  else if (*(ulong *)(lVar8 + 0xa0) < *(ulong *)(*plVar10 + 0xa0)) {
    uVar4 = plVar14[1];
LAB_0070aad4:
    lVar11 = plVar10[1];
    *plVar14 = *plVar10;
    plVar14[1] = lVar11;
    plVar12 = plVar13;
    if (plVar10 != plVar13) {
      lVar11 = lVar7;
      do {
        uVar9 = *(ulong *)(*(long *)((long)plVar13 + lVar11 + 0x10) + 0xa0);
        if (*(ulong *)(lVar8 + 0xa0) == uVar9) {
          if (*(ulong *)((long)plVar13 + lVar11 + 0x18) <= uVar4) {
            plVar12 = (long *)((long)plVar13 + lVar11 + 0x20);
            break;
          }
        }
        else if (uVar9 <= *(ulong *)(lVar8 + 0xa0)) {
          plVar12 = plVar10;
          break;
        }
        plVar10 = plVar10 + -2;
        bVar2 = lVar11 != -0x10;
        *(undefined8 *)((long)plVar13 + lVar11 + 0x20) =
             *(undefined8 *)((long)plVar13 + lVar11 + 0x10);
        *(undefined8 *)((long)plVar13 + lVar11 + 0x28) =
             *(undefined8 *)((long)plVar13 + lVar11 + 0x18);
        lVar11 = lVar11 + -0x10;
      } while (bVar2);
    }
    *plVar12 = lVar8;
    plVar12[1] = uVar4;
  }
  lVar7 = lVar7 + 0x10;
  plVar12 = plVar14 + 2;
  plVar10 = plVar14;
  if (plVar14 + 2 == param_2) {
    return;
  }
  goto LAB_0070aa98;
code_r0x0070a8bc:
  param_1 = plVar14 + 2;
  if ((uVar4 & 1) == 0) {
LAB_0070a8c0:
    if ((long)param_2 - (long)plVar14 <= (long)plVar14 - (long)plVar13) {
      FUN_0070a630(plVar14 + 2,param_2);
      param_2 = plVar14;
      param_1 = plVar13;
      goto LAB_0070a67c;
    }
    FUN_0070a630(plVar13,plVar14);
    param_1 = plVar14 + 2;
  }
  goto LAB_0070a698;
}


