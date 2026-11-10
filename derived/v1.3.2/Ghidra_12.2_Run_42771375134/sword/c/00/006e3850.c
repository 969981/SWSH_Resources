/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e3850; name: FUN_006e3850
 */


void FUN_006e3850(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x28;
  float fVar13;
  int local_64;
  
  iVar3 = nn::aoc::CountAddOnContent();
  plVar1 = (long *)(param_1 + 200);
  FUN_006e5360(plVar1,(long)((float)(ulong)(long)iVar3 / *(float *)(param_1 + 0x118)));
  if (0 < iVar3) {
    iVar9 = 0;
    plVar2 = (long *)(param_1 + 0xf0);
    do {
      while( true ) {
        local_64 = 0;
        nn::aoc::ListAddOnContent(&local_64,iVar9,1);
        uVar12 = (ulong)local_64;
        uVar11 = *(ulong *)(param_1 + 0xd0);
        if (uVar11 != 0) break;
LAB_006e3980:
        plVar5 = (long *)(**(code **)(**(long **)(param_1 + 0xf8) + 0x10))
                                   (*(long **)(param_1 + 0xf8),0x40,8);
        if (plVar5 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0xf8) + 0xb8))();
        }
        uVar10 = *(undefined8 *)(param_1 + 0xf8);
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar10;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        *(int *)(plVar5 + 2) = local_64;
        plVar5[6] = 0;
        plVar5[7] = 0;
        plVar5[4] = 0;
        plVar5[5] = 0;
        plVar5[3] = 0;
        *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        *plVar5 = 0;
        plVar5[1] = uVar12;
        fVar13 = (float)(*(long *)(param_1 + 0x110) + 1);
        if ((uVar11 == 0) || (*(float *)(param_1 + 0x118) * (float)uVar11 < fVar13)) {
          if (uVar11 < 3) {
            uVar7 = 1;
          }
          else {
            uVar7 = (ulong)((uVar11 - 1 & uVar11) != 0);
          }
          uVar8 = (ulong)(fVar13 / *(float *)(param_1 + 0x118));
          uVar7 = uVar7 | uVar11 << 1;
          if (uVar8 <= uVar7) {
            uVar8 = uVar7;
          }
          FUN_006e5360(plVar1,uVar8);
          uVar11 = *(ulong *)(param_1 + 0xd0);
          if ((uVar11 - 1 & uVar11) == 0) {
            unaff_x28 = uVar11 - 1 & uVar12;
            plVar6 = *(long **)(*plVar1 + unaff_x28 * 8);
            goto joined_r0x006e3aa0;
          }
          if (uVar12 < uVar11) {
            plVar6 = *(long **)(*plVar1 + uVar12 * 8);
            unaff_x28 = uVar12;
            goto joined_r0x006e3aa0;
          }
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar7 = uVar12 / uVar11;
          }
          unaff_x28 = uVar12 - uVar7 * uVar11;
          plVar6 = *(long **)(*plVar1 + unaff_x28 * 8);
          if (plVar6 != (long *)0x0) goto LAB_006e3a34;
LAB_006e3ab8:
          *plVar5 = *plVar2;
          *plVar2 = (long)plVar5;
          *(long **)(*plVar1 + unaff_x28 * 8) = plVar2;
          if (*plVar5 != 0) {
            uVar12 = *(ulong *)(*plVar5 + 8);
            if ((uVar11 - 1 & uVar11) == 0) {
              uVar12 = uVar12 & uVar11 - 1;
            }
            else if (uVar11 <= uVar12) {
              uVar7 = 0;
              if (uVar11 != 0) {
                uVar7 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar7 * uVar11;
            }
            plVar6 = (long *)(*plVar1 + uVar12 * 8);
            goto LAB_006e3b1c;
          }
        }
        else {
          plVar6 = *(long **)(*plVar1 + unaff_x28 * 8);
joined_r0x006e3aa0:
          if (plVar6 == (long *)0x0) goto LAB_006e3ab8;
LAB_006e3a34:
          *plVar5 = *plVar6;
LAB_006e3b1c:
          *plVar6 = (long)plVar5;
        }
        *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + 1;
        iVar9 = iVar9 + 1;
        if (iVar3 <= iVar9) {
          return;
        }
      }
      uVar7 = uVar11 - 1;
      if ((uVar7 & uVar11) == 0) {
        unaff_x28 = uVar7 & uVar12;
        plVar5 = *(long **)(*plVar1 + unaff_x28 * 8);
      }
      else {
        unaff_x28 = uVar12;
        if (uVar11 <= uVar12) {
          uVar8 = 0;
          if (uVar11 != 0) {
            uVar8 = uVar12 / uVar11;
          }
          unaff_x28 = uVar12 - uVar8 * uVar11;
        }
        plVar5 = *(long **)(*plVar1 + unaff_x28 * 8);
      }
      if (plVar5 == (long *)0x0) goto LAB_006e3980;
      if ((uVar7 & uVar11) == 0) {
        do {
          plVar5 = (long *)*plVar5;
          if ((plVar5 == (long *)0x0) || (plVar5[1] != uVar12 && (plVar5[1] & uVar7) != unaff_x28))
          goto LAB_006e3980;
        } while ((int)plVar5[2] != local_64);
      }
      else {
        do {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_006e3980;
          uVar7 = plVar5[1];
          if (uVar7 != uVar12) {
            if (uVar11 <= uVar7) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar7 / uVar11;
              }
              uVar7 = uVar7 - uVar8 * uVar11;
            }
            if (uVar7 != unaff_x28) goto LAB_006e3980;
          }
        } while (*(int *)(plVar5 + 2) != local_64);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
  }
  return;
}


