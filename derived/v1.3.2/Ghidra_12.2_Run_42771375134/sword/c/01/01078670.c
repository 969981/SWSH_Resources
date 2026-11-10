/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01078670; name: FUN_01078670
 */


void FUN_01078670(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x26;
  long lVar10;
  
  lVar2 = *(long *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = lVar2;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  lVar2 = *(long *)(param_2 + 0x30);
  param_1[5] = 0;
  param_1[6] = lVar2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  FUN_01078960(param_1,*(undefined8 *)(param_2 + 8));
  puVar1 = PTR_DAT_02710860;
  plVar7 = *(long **)(param_2 + 0x28);
  if (plVar7 != (long *)0x0) {
    do {
      while( true ) {
        uVar9 = plVar7[2];
        uVar8 = param_1[1];
        if (uVar8 != 0) break;
LAB_01078798:
        plVar3 = (long *)(**(code **)(*(long *)param_1[6] + 0x10))((long *)param_1[6],0x18,8);
        if (plVar3 == (long *)0x0) {
          (**(code **)(*(long *)param_1[6] + 0xb8))();
        }
        lVar10 = param_1[6];
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar10;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        plVar3[2] = plVar7[2];
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        *plVar3 = 0;
        plVar3[1] = uVar9;
        if ((uVar8 == 0) || (*(float *)(param_1 + 10) * (float)uVar8 < (float)(param_1[9] + 1))) {
          if (uVar8 < 3) {
            uVar5 = 1;
          }
          else {
            uVar5 = (ulong)((uVar8 - 1 & uVar8) != 0);
          }
          uVar6 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
          uVar5 = uVar5 | uVar8 << 1;
          if (uVar6 <= uVar5) {
            uVar6 = uVar5;
          }
          FUN_01078960(param_1,uVar6);
          uVar8 = param_1[1];
          if ((uVar8 - 1 & uVar8) == 0) {
            unaff_x26 = uVar8 - 1 & uVar9;
            plVar4 = *(long **)(*param_1 + unaff_x26 * 8);
            goto joined_r0x010788a4;
          }
          if (uVar9 < uVar8) {
            plVar4 = *(long **)(*param_1 + uVar9 * 8);
            unaff_x26 = uVar9;
            goto joined_r0x010788a4;
          }
          uVar5 = 0;
          if (uVar8 != 0) {
            uVar5 = uVar9 / uVar8;
          }
          unaff_x26 = uVar9 - uVar5 * uVar8;
          plVar4 = *(long **)(*param_1 + unaff_x26 * 8);
          if (plVar4 != (long *)0x0) goto LAB_01078838;
LAB_010788bc:
          *plVar3 = param_1[5];
          param_1[5] = (long)plVar3;
          *(long **)(*param_1 + unaff_x26 * 8) = param_1 + 5;
          if (*plVar3 != 0) {
            uVar9 = *(ulong *)(*plVar3 + 8);
            if ((uVar8 - 1 & uVar8) == 0) {
              uVar9 = uVar9 & uVar8 - 1;
            }
            else if (uVar8 <= uVar9) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar5 * uVar8;
            }
            plVar4 = (long *)(*param_1 + uVar9 * 8);
            goto LAB_01078920;
          }
        }
        else {
          plVar4 = *(long **)(*param_1 + unaff_x26 * 8);
joined_r0x010788a4:
          if (plVar4 == (long *)0x0) goto LAB_010788bc;
LAB_01078838:
          *plVar3 = *plVar4;
LAB_01078920:
          *plVar4 = (long)plVar3;
        }
        param_1[9] = param_1[9] + 1;
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      }
      uVar5 = uVar8 - 1;
      if ((uVar5 & uVar8) == 0) {
        unaff_x26 = uVar5 & uVar9;
        plVar3 = *(long **)(*param_1 + unaff_x26 * 8);
      }
      else {
        unaff_x26 = uVar9;
        if (uVar8 <= uVar9) {
          uVar6 = 0;
          if (uVar8 != 0) {
            uVar6 = uVar9 / uVar8;
          }
          unaff_x26 = uVar9 - uVar6 * uVar8;
        }
        plVar3 = *(long **)(*param_1 + unaff_x26 * 8);
      }
      if (plVar3 == (long *)0x0) goto LAB_01078798;
      if ((uVar5 & uVar8) == 0) {
        do {
          plVar3 = (long *)*plVar3;
          if ((plVar3 == (long *)0x0) || (plVar3[1] != uVar9 && (plVar3[1] & uVar5) != unaff_x26))
          goto LAB_01078798;
        } while (plVar3[2] != uVar9);
      }
      else {
        do {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_01078798;
          uVar5 = plVar3[1];
          if (uVar5 != uVar9) {
            if (uVar8 <= uVar5) {
              uVar6 = 0;
              if (uVar8 != 0) {
                uVar6 = uVar5 / uVar8;
              }
              uVar5 = uVar5 - uVar6 * uVar8;
            }
            if (uVar5 != unaff_x26) goto LAB_01078798;
          }
        } while (plVar3[2] != uVar9);
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return;
}


