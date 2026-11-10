/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a8d530; name: FUN_00a8d530
 */


void FUN_00a8d530(long *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x27;
  long lVar11;
  
  lVar3 = *(long *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = lVar3;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  lVar3 = *(long *)(param_2 + 0x30);
  param_1[5] = 0;
  param_1[6] = lVar3;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  FUN_00a89680(param_1,*(undefined8 *)(param_2 + 8));
  puVar2 = PTR_DAT_02710860;
  plVar8 = *(long **)(param_2 + 0x28);
  if (plVar8 != (long *)0x0) {
    do {
      while( true ) {
        iVar1 = (int)plVar8[2];
        uVar10 = (ulong)iVar1;
        uVar9 = param_1[1];
        if (uVar9 != 0) break;
LAB_00a8d658:
        plVar4 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x20,8);
        if (plVar4 == (long *)0x0) {
          (**(code **)(*(long *)param_1[6] + 0xb8))();
        }
        lVar11 = param_1[6];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *(int *)(plVar4 + 2) = (int)plVar8[2];
        lVar11 = plVar8[3];
        plVar4[3] = lVar11;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        *plVar4 = 0;
        plVar4[1] = uVar10;
        if ((uVar9 == 0) || (*(float *)(param_1 + 10) * (float)uVar9 < (float)(param_1[9] + 1))) {
          if (uVar9 < 3) {
            uVar6 = 1;
          }
          else {
            uVar6 = (ulong)((uVar9 - 1 & uVar9) != 0);
          }
          uVar7 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
          uVar6 = uVar6 | uVar9 << 1;
          if (uVar7 <= uVar6) {
            uVar7 = uVar6;
          }
          FUN_00a89680(param_1,uVar7);
          uVar9 = param_1[1];
          if ((uVar9 - 1 & uVar9) == 0) {
            unaff_x27 = uVar9 - 1 & uVar10;
            plVar5 = *(long **)(*param_1 + unaff_x27 * 8);
            goto joined_r0x00a8d780;
          }
          if (uVar10 < uVar9) {
            plVar5 = *(long **)(*param_1 + uVar10 * 8);
            unaff_x27 = uVar10;
            goto joined_r0x00a8d780;
          }
          uVar6 = 0;
          if (uVar9 != 0) {
            uVar6 = uVar10 / uVar9;
          }
          unaff_x27 = uVar10 - uVar6 * uVar9;
          plVar5 = *(long **)(*param_1 + unaff_x27 * 8);
          if (plVar5 != (long *)0x0) goto LAB_00a8d714;
LAB_00a8d798:
          *plVar4 = param_1[5];
          param_1[5] = (long)plVar4;
          *(long **)(*param_1 + unaff_x27 * 8) = param_1 + 5;
          if (*plVar4 != 0) {
            uVar10 = *(ulong *)(*plVar4 + 8);
            if ((uVar9 - 1 & uVar9) == 0) {
              uVar10 = uVar10 & uVar9 - 1;
            }
            else if (uVar9 <= uVar10) {
              uVar6 = 0;
              if (uVar9 != 0) {
                uVar6 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar6 * uVar9;
            }
            plVar5 = (long *)(*param_1 + uVar10 * 8);
            goto LAB_00a8d7fc;
          }
        }
        else {
          plVar5 = *(long **)(*param_1 + unaff_x27 * 8);
joined_r0x00a8d780:
          if (plVar5 == (long *)0x0) goto LAB_00a8d798;
LAB_00a8d714:
          *plVar4 = *plVar5;
LAB_00a8d7fc:
          *plVar5 = (long)plVar4;
        }
        param_1[9] = param_1[9] + 1;
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          return;
        }
      }
      uVar6 = uVar9 - 1;
      if ((uVar6 & uVar9) == 0) {
        unaff_x27 = uVar6 & uVar10;
        plVar4 = *(long **)(*param_1 + unaff_x27 * 8);
      }
      else {
        unaff_x27 = uVar10;
        if (uVar9 <= uVar10) {
          uVar7 = 0;
          if (uVar9 != 0) {
            uVar7 = uVar10 / uVar9;
          }
          unaff_x27 = uVar10 - uVar7 * uVar9;
        }
        plVar4 = *(long **)(*param_1 + unaff_x27 * 8);
      }
      if (plVar4 == (long *)0x0) goto LAB_00a8d658;
      if ((uVar6 & uVar9) == 0) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) || (plVar4[1] != uVar10 && (plVar4[1] & uVar6) != unaff_x27))
          goto LAB_00a8d658;
        } while ((int)plVar4[2] != iVar1);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00a8d658;
          uVar6 = plVar4[1];
          if (uVar6 != uVar10) {
            if (uVar9 <= uVar6) {
              uVar7 = 0;
              if (uVar9 != 0) {
                uVar7 = uVar6 / uVar9;
              }
              uVar6 = uVar6 - uVar7 * uVar9;
            }
            if (uVar6 != unaff_x27) goto LAB_00a8d658;
          }
        } while (*(int *)(plVar4 + 2) != iVar1);
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  return;
}


