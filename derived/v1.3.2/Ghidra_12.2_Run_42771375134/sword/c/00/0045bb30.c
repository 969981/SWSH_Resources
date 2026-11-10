/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045bb30; name: FUN_0045bb30
 */


void FUN_0045bb30(ulong param_1,int *param_2,uint *param_3,int param_4,undefined8 param_5,
                 undefined4 param_6,code *param_7,undefined8 param_8)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 != 0) {
    uVar5 = param_1;
    if (param_7 == (code *)0x0) {
      do {
        uVar8 = (ulong)*(ushort *)(param_2 + 1);
        puVar1 = (ushort *)((long)param_2 + 6);
        param_2 = (int *)(lVar10 + uVar8 * 0xc);
        uVar2 = *param_3;
        iVar6 = 0;
        iVar7 = *puVar1 - 1;
        do {
          while( true ) {
            iVar4 = iVar7 - iVar6;
            if (iVar4 < 0) {
              iVar4 = iVar4 + 1;
            }
            iVar4 = iVar6 + (iVar4 >> 1);
            puVar9 = (uint *)(param_2 + (long)iVar4 * 3);
            uVar3 = *puVar9;
            if (uVar2 > uVar3 || uVar3 == uVar2) break;
            iVar7 = iVar4 + -1;
            if (iVar7 < iVar6) goto LAB_0045bcac;
          }
          if (uVar2 <= uVar3) {
            if (param_4 + -1 == 0) {
              uVar5 = FUN_0045b7b0(uVar5,puVar9,param_5);
              if (*param_2 != 0) {
                return;
              }
              goto LAB_0045bcb4;
            }
            uVar5 = FUN_0045bb30(param_1,puVar9,param_3 + 1,param_4 + -1,param_5,param_6,0,param_8);
            iVar6 = *param_2;
            goto joined_r0x0045bd0c;
          }
          iVar6 = iVar4 + 1;
        } while (iVar6 <= iVar7);
LAB_0045bcac:
        iVar6 = *param_2;
joined_r0x0045bd0c:
        if (iVar6 != 0) {
          return;
        }
LAB_0045bcb4:
        if (*param_3 == 0) {
          return;
        }
        param_4 = param_4 + -1;
        if (param_4 == 0) goto LAB_0045bd14;
        lVar10 = *(long *)(param_1 + 8);
        param_3 = param_3 + 1;
      } while (lVar10 != 0);
    }
    else {
      do {
        uVar8 = (ulong)*(ushort *)(param_2 + 1);
        puVar1 = (ushort *)((long)param_2 + 6);
        param_2 = (int *)(lVar10 + uVar8 * 0xc);
        iVar6 = 0;
        iVar7 = *puVar1 - 1;
        do {
          while( true ) {
            iVar4 = iVar7 - iVar6;
            if (iVar4 < 0) {
              iVar4 = iVar4 + 1;
            }
            iVar4 = iVar6 + (iVar4 >> 1);
            puVar9 = (uint *)(param_2 + (long)iVar4 * 3);
            if (*param_3 < *puVar9) break;
            if (*param_3 <= *puVar9) {
              if (param_4 + -1 == 0) {
                uVar5 = (*param_7)(param_6,puVar9[1],param_8);
                if ((uVar5 & 1) != 0) {
                  uVar5 = FUN_0045b7b0(uVar5,puVar9,param_5);
                  iVar6 = *param_2;
                  goto joined_r0x0045bc04;
                }
              }
              else {
                uVar5 = FUN_0045bb30(param_1,puVar9,param_3 + 1,param_4 + -1,param_5,param_6,param_7
                                     ,param_8);
              }
              goto LAB_0045bc28;
            }
            iVar6 = iVar4 + 1;
            if (iVar7 < iVar6) goto LAB_0045bc28;
          }
          iVar7 = iVar4 + -1;
        } while (iVar6 <= iVar7);
LAB_0045bc28:
        iVar6 = *param_2;
joined_r0x0045bc04:
        if (iVar6 != 0) {
          return;
        }
        if (*param_3 == 0) {
          return;
        }
        param_4 = param_4 + -1;
        if (param_4 == 0) {
LAB_0045bd14:
          if ((param_7 == (code *)0x0) ||
             (uVar5 = (*param_7)(param_6,*(undefined4 *)(lVar10 + uVar8 * 0xc + 4),param_8),
             (uVar5 & 1) != 0)) {
            FUN_0045b7b0(uVar5,param_2,param_5);
            return;
          }
          return;
        }
        lVar10 = *(long *)(param_1 + 8);
        param_3 = param_3 + 1;
      } while (lVar10 != 0);
    }
  }
  return;
}


