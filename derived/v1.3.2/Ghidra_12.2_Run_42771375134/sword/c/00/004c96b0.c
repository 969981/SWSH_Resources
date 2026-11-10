/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c96b0; name: FUN_004c96b0
 */


undefined1 (*) [12] FUN_004c96b0(long *param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [12];
  undefined8 *puVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  undefined1 auVar16 [12];
  undefined8 *local_68;
  
  puVar7 = PTR_DAT_02712ae0;
  local_68 = (undefined8 *)0x0;
  auVar16 = FUN_00448fc0(*(undefined8 *)PTR_DAT_02712ae0,param_3,&local_68);
  puVar6 = PTR_DAT_02712a90;
  if (auVar16._0_8_ == 0) {
    return (undefined1 (*) [12])0x0;
  }
  piVar11 = (int *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  piVar12 = piVar11;
  if (uVar4 == 0) {
LAB_004c9740:
    if (piVar12 == piVar11 + (ulong)uVar4 * 8) goto LAB_004c9754;
LAB_004c9924:
    pauVar9 = (undefined1 (*) [12])(piVar12 + 2);
    *pauVar9 = auVar16;
    piVar12[5] = param_3;
    *(undefined8 **)(piVar12 + 6) = local_68;
  }
  else {
    lVar14 = (ulong)uVar4 << 5;
    do {
      if (*piVar12 == param_2) goto LAB_004c9740;
      lVar14 = lVar14 + -0x20;
      piVar12 = piVar12 + 8;
    } while (lVar14 != 0);
LAB_004c9754:
    uVar15 = *(uint *)((long)param_1 + 0xc);
    if (uVar4 < uVar15) {
LAB_004c98f8:
      if (uVar4 < uVar15) {
        uVar4 = *(uint *)(param_1 + 1);
        *(uint *)(param_1 + 1) = uVar4 + 1;
        piVar11 = (int *)(*param_1 + (ulong)uVar4 * 0x20);
        if (piVar11 != (int *)0x0) {
          piVar12 = (int *)(*param_1 + (ulong)uVar4 * 0x20);
          *piVar11 = param_2;
          goto LAB_004c9924;
        }
      }
    }
    else {
      uVar15 = uVar15 + 1;
      puVar8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 << 5);
      if (puVar8 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)*param_1;
        if ((puVar10 != (undefined8 *)0x0) && (puVar10 != puVar8)) {
          uVar5 = *(uint *)(param_1 + 1);
          if (uVar5 != 0) {
            puVar8[3] = puVar10[3];
            puVar8[2] = puVar10[2];
            puVar8[1] = puVar10[1];
            *puVar8 = *puVar10;
            if (uVar5 != 1) {
              uVar3 = uVar5 + 3 & 3;
              if ((ulong)uVar5 - 2 < 3) {
                lVar13 = 1;
              }
              else {
                lVar13 = 1;
                lVar14 = 0x80;
                do {
                  lVar1 = *param_1 + lVar14;
                  puVar10 = (undefined8 *)((long)puVar8 + lVar14);
                  puVar10[-9] = *(undefined8 *)(lVar1 + -0x48);
                  puVar10[-10] = *(undefined8 *)(lVar1 + -0x50);
                  puVar10[-0xb] = *(undefined8 *)(lVar1 + -0x58);
                  puVar10[-0xc] = *(undefined8 *)(lVar1 + -0x60);
                  lVar1 = *param_1 + lVar14;
                  puVar10[-5] = *(undefined8 *)(lVar1 + -0x28);
                  puVar10[-6] = *(undefined8 *)(lVar1 + -0x30);
                  puVar10[-7] = *(undefined8 *)(lVar1 + -0x38);
                  puVar10[-8] = *(undefined8 *)(lVar1 + -0x40);
                  lVar1 = *param_1 + lVar14;
                  puVar10[-1] = *(undefined8 *)(lVar1 + -8);
                  puVar10[-2] = *(undefined8 *)(lVar1 + -0x10);
                  puVar10[-3] = *(undefined8 *)(lVar1 + -0x18);
                  puVar10[-4] = *(undefined8 *)(lVar1 + -0x20);
                  puVar2 = (undefined8 *)(*param_1 + lVar14);
                  lVar14 = lVar14 + 0x80;
                  puVar10[3] = puVar2[3];
                  puVar10[2] = puVar2[2];
                  puVar10[1] = puVar2[1];
                  lVar13 = lVar13 + 4;
                  *puVar10 = *puVar2;
                } while ((ulong)uVar5 - (ulong)uVar3 != lVar13);
              }
              if (uVar3 != 0) {
                lVar13 = lVar13 << 5;
                lVar14 = -(ulong)uVar3;
                do {
                  puVar10 = (undefined8 *)(*param_1 + lVar13);
                  puVar2 = (undefined8 *)((long)puVar8 + lVar13);
                  lVar13 = lVar13 + 0x20;
                  puVar2[3] = puVar10[3];
                  puVar2[2] = puVar10[2];
                  puVar2[1] = puVar10[1];
                  lVar14 = lVar14 + 1;
                  *puVar2 = *puVar10;
                } while (lVar14 != 0);
              }
            }
            puVar10 = (undefined8 *)*param_1;
          }
          FUN_00404870(*(undefined4 *)puVar6,puVar10);
        }
        *param_1 = (long)puVar8;
        *(uint *)((long)param_1 + 0xc) = uVar15;
        goto LAB_004c98f8;
      }
    }
    FUN_00449180(*(undefined8 *)puVar7,param_3);
    pauVar9 = (undefined1 (*) [12])0x0;
    if (local_68 != (undefined8 *)0x0) {
      (**(code **)*local_68)(local_68,0);
      pauVar9 = (undefined1 (*) [12])0x0;
    }
  }
  return pauVar9;
}


