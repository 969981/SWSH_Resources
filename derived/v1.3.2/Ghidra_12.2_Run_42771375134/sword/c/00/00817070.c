/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00817070; name: FUN_00817070
 */


void FUN_00817070(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  
  *param_1 = (long)(PTR_DAT_02716fb8 + 0x10);
  lVar4 = param_1[1];
  lVar12 = *(long *)(lVar4 + 0x28);
  if (*(long *)((long)param_1 + (long)*(int *)(lVar4 + 0xc)) != 0) {
    FUN_0080f500();
    lVar4 = param_1[1];
  }
  if (*(int *)(lVar4 + 0x10) != -1) {
    FUN_00825450((long)param_1 + (long)*(int *)(lVar4 + 0x10));
  }
  puVar1 = PTR_DAT_02716e20;
  uVar7 = (ulong)*(uint *)(lVar12 + 0x2c);
  if ((int)*(uint *)(lVar12 + 0x2c) < 1) {
    return;
  }
  lVar4 = 0;
LAB_00817100:
  lVar8 = *(long *)(lVar12 + 0x30);
  lVar10 = *(long *)(lVar8 + lVar4 * 0x90 + 0x58);
  lVar5 = param_1[1];
  if (lVar10 == 0) {
    lVar8 = lVar8 + lVar4 * 0x90;
    lVar10 = (long)*(int *)(*(long *)(lVar5 + 0x30) + lVar4 * 4);
    plVar2 = (long *)((long)param_1 + lVar10);
    iVar9 = *(int *)(puVar1 + (ulong)*(uint *)(lVar8 + 0x3c) * 4);
    if (*(int *)(lVar8 + 0x40) != 3) {
      if (iVar9 == 10) {
        if ((*(long **)(lVar5 + 0x40) != param_1) && (*(long **)(lVar5 + 0x40) != (long *)0x0)) {
          plVar2 = (long *)*plVar2;
          goto joined_r0x00817290;
        }
        goto switchD_008171ec_default;
      }
      if (iVar9 != 9) goto switchD_008171ec_default;
      pbVar13 = *(byte **)(*(long *)(lVar5 + 0x40) + lVar10);
      pbVar11 = (byte *)*plVar2;
      if (pbVar11 != pbVar13 && pbVar11 != (byte *)0x0) {
        if ((*pbVar11 & 1) != 0) {
          operator_delete(*(void **)(pbVar11 + 0x10));
        }
        operator_delete(pbVar11);
      }
      *plVar2 = (long)pbVar13;
      uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
      lVar4 = lVar4 + 1;
      if ((long)uVar7 <= lVar4) {
        return;
      }
      goto LAB_00817100;
    }
    switch(iVar9) {
    case 1:
      plVar2 = (long *)plVar2[1];
      if ((plVar2 == (long *)0x0) || (*plVar2 != 0)) break;
      operator_delete__(plVar2);
      uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
      lVar4 = lVar4 + 1;
      if ((long)uVar7 <= lVar4) {
        return;
      }
      goto LAB_00817100;
    case 2:
      plVar2 = (long *)plVar2[1];
      if ((plVar2 != (long *)0x0) && (*plVar2 == 0)) {
        operator_delete__(plVar2);
        uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
        lVar4 = lVar4 + 1;
        if ((long)uVar7 <= lVar4) {
          return;
        }
        goto LAB_00817100;
      }
      break;
    case 3:
      plVar2 = (long *)plVar2[1];
      if ((plVar2 != (long *)0x0) && (*plVar2 == 0)) {
        operator_delete__(plVar2);
        uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
        lVar4 = lVar4 + 1;
        if ((long)uVar7 <= lVar4) {
          return;
        }
        goto LAB_00817100;
      }
      break;
    case 4:
      plVar2 = (long *)plVar2[1];
      if ((plVar2 != (long *)0x0) && (*plVar2 == 0)) {
        operator_delete__(plVar2);
        uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
        lVar4 = lVar4 + 1;
        if ((long)uVar7 <= lVar4) {
          return;
        }
        goto LAB_00817100;
      }
      break;
    case 5:
      plVar2 = (long *)plVar2[1];
      if ((plVar2 != (long *)0x0) && (*plVar2 == 0)) {
        operator_delete__(plVar2);
        uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
        lVar4 = lVar4 + 1;
        if ((long)uVar7 <= lVar4) {
          return;
        }
        goto LAB_00817100;
      }
      break;
    case 6:
      plVar2 = (long *)plVar2[1];
      if ((plVar2 != (long *)0x0) && (*plVar2 == 0)) {
        operator_delete__(plVar2);
        uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
        lVar4 = lVar4 + 1;
        if ((long)uVar7 <= lVar4) {
          return;
        }
        goto LAB_00817100;
      }
      break;
    case 7:
      plVar2 = (long *)plVar2[1];
      if ((plVar2 != (long *)0x0) && (*plVar2 == 0)) {
        operator_delete__(plVar2);
        uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
        lVar4 = lVar4 + 1;
        if ((long)uVar7 <= lVar4) {
          return;
        }
        goto LAB_00817100;
      }
      break;
    case 8:
      plVar2 = (long *)plVar2[1];
      if ((plVar2 != (long *)0x0) && (*plVar2 == 0)) {
        operator_delete__(plVar2);
        uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
        lVar4 = lVar4 + 1;
        if ((long)uVar7 <= lVar4) {
          return;
        }
        goto LAB_00817100;
      }
      break;
    case 9:
      puVar3 = (uint *)plVar2[2];
      if ((puVar3 != (uint *)0x0) && (*plVar2 == 0)) {
        uVar7 = (ulong)*puVar3;
        if (0 < (int)*puVar3) {
          do {
            puVar3 = puVar3 + 2;
            pbVar11 = *(byte **)puVar3;
            if (pbVar11 != (byte *)0x0) {
              if ((*pbVar11 & 1) != 0) {
                operator_delete(*(void **)(pbVar11 + 0x10));
              }
              operator_delete(pbVar11);
            }
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          puVar3 = (uint *)plVar2[2];
          if (puVar3 == (uint *)0x0) goto LAB_008174b4;
        }
        operator_delete__(puVar3);
      }
LAB_008174b4:
      plVar2[2] = 0;
      uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
      lVar4 = lVar4 + 1;
      if ((long)uVar7 <= lVar4) {
        return;
      }
      goto LAB_00817100;
    case 10:
      uVar7 = FUN_007e4b30();
      if ((uVar7 & 1) != 0) {
        pcVar6 = *(code **)*plVar2;
        goto LAB_0081729c;
      }
      puVar3 = (uint *)plVar2[2];
      if ((puVar3 != (uint *)0x0) && (*plVar2 == 0)) {
        uVar7 = (ulong)*puVar3;
        if (0 < (int)*puVar3) {
          do {
            puVar3 = puVar3 + 2;
            if (*(long **)puVar3 != (long *)0x0) {
              (**(code **)(**(long **)puVar3 + 8))();
            }
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
          puVar3 = (uint *)plVar2[2];
          if (puVar3 == (uint *)0x0) goto LAB_00817490;
        }
        operator_delete__(puVar3);
      }
LAB_00817490:
      plVar2[2] = 0;
      uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
      lVar4 = lVar4 + 1;
      if ((long)uVar7 <= lVar4) {
        return;
      }
      goto LAB_00817100;
    }
  }
  else {
    iVar9 = (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x10) + 0x40)) >> 4);
    if (*(int *)((long)param_1 + (long)(*(int *)(lVar5 + 8) + iVar9 * -0x55555554)) ==
        *(int *)(lVar8 + lVar4 * 0x90 + 0x38)) {
      lVar10 = (long)*(int *)(*(long *)(lVar5 + 0x30) + (long)((int)uVar7 + iVar9 * -0x55555555) * 4
                             );
      iVar9 = *(int *)(puVar1 + (ulong)*(uint *)(lVar8 + lVar4 * 0x90 + 0x3c) * 4);
      if (iVar9 == 10) {
        plVar2 = *(long **)((long)param_1 + lVar10);
joined_r0x00817290:
        if (plVar2 != (long *)0x0) {
          pcVar6 = *(code **)(*plVar2 + 8);
LAB_0081729c:
          (*pcVar6)(plVar2);
        }
      }
      else if (iVar9 == 9) {
        pbVar11 = *(byte **)((long)param_1 + lVar10);
        pbVar13 = *(byte **)(*(long *)(lVar5 + 0x48) +
                            (long)*(int *)(*(long *)(lVar5 + 0x30) + lVar4 * 4));
        if (pbVar11 != pbVar13 && pbVar11 != (byte *)0x0) {
          if ((*pbVar11 & 1) != 0) {
            operator_delete(*(void **)(pbVar11 + 0x10));
          }
          operator_delete(pbVar11);
        }
        *(byte **)((long)param_1 + lVar10) = pbVar13;
        uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
        lVar4 = lVar4 + 1;
        if ((long)uVar7 <= lVar4) {
          return;
        }
        goto LAB_00817100;
      }
    }
  }
switchD_008171ec_default:
  uVar7 = (ulong)*(int *)(lVar12 + 0x2c);
  lVar4 = lVar4 + 1;
  if ((long)uVar7 <= lVar4) {
    return;
  }
  goto LAB_00817100;
}


