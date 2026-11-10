/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006985c0; name: FUN_006985c0
 */


void FUN_006985c0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  long *local_68 [3];
  
  lVar1 = *(long *)(param_2 + 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = lVar1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  lVar1 = *(long *)(param_2 + 0x30);
  param_1[5] = 0;
  param_1[6] = lVar1;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  FUN_00697400(param_1,*(undefined8 *)(param_2 + 8));
  plVar6 = *(long **)(param_2 + 0x28);
  if (plVar6 != (long *)0x0) {
    do {
      while( true ) {
        uVar5 = plVar6[2];
        uVar7 = param_1[1];
        if (uVar7 != 0) break;
LAB_006986e8:
        FUN_00698850(local_68,param_1,uVar5);
        if ((uVar7 == 0) || (*(float *)(param_1 + 10) * (float)uVar7 < (float)(param_1[9] + 1))) {
          uVar4 = (ulong)((float)(param_1[9] + 1) / *(float *)(param_1 + 10));
          uVar3 = 1;
          if (2 < uVar7) {
            uVar3 = (ulong)((uVar7 - 1 & uVar7) != 0);
          }
          uVar3 = uVar3 | uVar7 << 1;
          if (uVar4 <= uVar3) {
            uVar4 = uVar3;
          }
          FUN_00697400(param_1,uVar4);
          uVar7 = param_1[1];
          if ((uVar7 - 1 & uVar7) == 0) {
            unaff_x25 = uVar7 - 1 & uVar5;
            plVar2 = *(long **)(*param_1 + unaff_x25 * 8);
            goto joined_r0x00698798;
          }
          if (uVar5 < uVar7) {
            plVar2 = *(long **)(*param_1 + uVar5 * 8);
            unaff_x25 = uVar5;
            goto joined_r0x00698798;
          }
          uVar3 = 0;
          if (uVar7 != 0) {
            uVar3 = uVar5 / uVar7;
          }
          unaff_x25 = uVar5 - uVar3 * uVar7;
          plVar2 = *(long **)(*param_1 + unaff_x25 * 8);
          if (plVar2 != (long *)0x0) goto LAB_00698728;
LAB_006987b0:
          *local_68[0] = param_1[5];
          param_1[5] = (long)local_68[0];
          *(long **)(*param_1 + unaff_x25 * 8) = param_1 + 5;
          if (*local_68[0] != 0) {
            uVar5 = *(ulong *)(*local_68[0] + 8);
            if ((uVar7 - 1 & uVar7) == 0) {
              uVar5 = uVar5 & uVar7 - 1;
            }
            else if (uVar7 <= uVar5) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar3 * uVar7;
            }
            *(long **)(*param_1 + uVar5 * 8) = local_68[0];
          }
        }
        else {
          plVar2 = *(long **)(*param_1 + unaff_x25 * 8);
joined_r0x00698798:
          if (plVar2 == (long *)0x0) goto LAB_006987b0;
LAB_00698728:
          *local_68[0] = *plVar2;
          *plVar2 = (long)local_68[0];
        }
        param_1[9] = param_1[9] + 1;
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return;
        }
      }
      uVar3 = uVar7 - 1;
      if ((uVar3 & uVar7) == 0) {
        unaff_x25 = uVar3 & uVar5;
        plVar2 = *(long **)(*param_1 + unaff_x25 * 8);
      }
      else {
        unaff_x25 = uVar5;
        if (uVar7 <= uVar5) {
          uVar4 = 0;
          if (uVar7 != 0) {
            uVar4 = uVar5 / uVar7;
          }
          unaff_x25 = uVar5 - uVar4 * uVar7;
        }
        plVar2 = *(long **)(*param_1 + unaff_x25 * 8);
      }
      if (plVar2 == (long *)0x0) goto LAB_006986e8;
      if ((uVar3 & uVar7) == 0) {
        do {
          plVar2 = (long *)*plVar2;
          if ((plVar2 == (long *)0x0) || (plVar2[1] != uVar5 && (plVar2[1] & uVar3) != unaff_x25))
          goto LAB_006986e8;
        } while (plVar2[2] != uVar5);
      }
      else {
        do {
          plVar2 = (long *)*plVar2;
          if (plVar2 == (long *)0x0) goto LAB_006986e8;
          uVar3 = plVar2[1];
          if (uVar3 != uVar5) {
            if (uVar7 <= uVar3) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar3 / uVar7;
              }
              uVar3 = uVar3 - uVar4 * uVar7;
            }
            if (uVar3 != unaff_x25) goto LAB_006986e8;
          }
        } while (plVar2[2] != uVar5);
      }
      plVar6 = (long *)*plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


