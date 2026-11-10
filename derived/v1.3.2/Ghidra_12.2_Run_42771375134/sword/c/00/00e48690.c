/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e48690; name: FUN_00e48690
 */


void FUN_00e48690(long *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  uVar7 = *(ulong *)(param_2 + 0x50);
  if (uVar7 != 0) {
    uVar5 = *param_3;
    uVar8 = uVar7 - 1;
    if ((uVar8 & uVar7) == 0) {
      uVar6 = uVar8 & uVar5;
      plVar9 = *(long **)(*(long *)(param_2 + 0x48) + uVar6 * 8);
    }
    else {
      uVar6 = uVar5;
      if (uVar7 <= uVar5) {
        uVar6 = 0;
        if (uVar7 != 0) {
          uVar6 = uVar5 / uVar7;
        }
        uVar6 = uVar5 - uVar6 * uVar7;
      }
      plVar9 = *(long **)(*(long *)(param_2 + 0x48) + uVar6 * 8);
    }
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if ((uVar8 & uVar7) == 0) {
        do {
          uVar7 = plVar9[1];
          if (uVar5 != uVar7 && (uVar7 & uVar8) != uVar6) break;
          if ((uVar5 == uVar7) && (plVar9[2] == uVar5)) goto LAB_00e4879c;
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar9[1];
          if (uVar5 == uVar8) {
            if (plVar9[2] == uVar5) {
LAB_00e4879c:
              *param_1 = (long)(PTR_DAT_027164e0 + 0x10);
              lVar4 = plVar9[0xb];
              param_1[1] = lVar4;
              if (lVar4 != 0) {
                (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
              }
              param_1[2] = 0;
              param_1[4] = 0;
              param_1[5] = 0;
              param_1[3] = 0;
              if ((code *)plVar9[0xe] != (code *)0x0) {
                (*(code *)plVar9[0xe])(plVar9 + 0x10,param_1 + 6);
                lVar4 = plVar9[0xc];
                lVar1 = plVar9[0xd];
                lVar2 = plVar9[0xf];
                param_1[4] = plVar9[0xe];
                param_1[5] = lVar2;
                param_1[2] = lVar4;
                param_1[3] = lVar1;
              }
              param_1[0x12] = 0;
              param_1[0x14] = 0;
              param_1[0x15] = 0;
              param_1[0x13] = 0;
              if ((code *)plVar9[0x1e] != (code *)0x0) {
                (*(code *)plVar9[0x1e])(plVar9 + 0x20,param_1 + 0x16);
                lVar4 = plVar9[0x1c];
                lVar1 = plVar9[0x1d];
                lVar2 = plVar9[0x1f];
                param_1[0x14] = plVar9[0x1e];
                param_1[0x15] = lVar2;
                param_1[0x12] = lVar4;
                param_1[0x13] = lVar1;
              }
              *param_1 = (long)(PTR_DAT_027164d8 + 0x10);
              return;
            }
          }
          else {
            if (uVar7 <= uVar8) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar3 * uVar7;
            }
            if (uVar8 != uVar6) break;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  memset(param_1,0,0x110);
}


