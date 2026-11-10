/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059d050; name: FUN_0059d050
 */


int FUN_0059d050(long param_1,ulong param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte in_w6;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  undefined1 *in_stack_00000018;
  
  if (in_stack_00000018 != (undefined1 *)0x0) {
    *in_stack_00000018 = 0;
  }
  puVar2 = PTR_DAT_02713ca8;
  puVar1 = PTR_DAT_02713ca0;
  if (param_3 == 0xffffffff) {
    param_3 = *(uint *)(PTR_DAT_02713ca8 + (param_2 & 0xffffffff) * 4);
    iVar4 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x2c);
  }
  if ((iVar4 < 0) ||
     (puVar8 = *(uint **)(*(long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xe0) +
                         (ulong)param_3 * 8), puVar8 == (uint *)0x0)) {
    if (in_stack_00000018 != (undefined1 *)0x0) {
      *in_stack_00000018 = 0;
    }
    param_2 = param_2 & 0xffffffff;
    if (param_3 == 0xffffffff) {
      param_3 = *(uint *)(PTR_DAT_02713ca8 + param_2 * 4);
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + param_2 * 8 + 0x14f00);
    iVar4 = 0;
    if ((lVar7 != 0) &&
       (iVar4 = 0,
       lVar7 != *(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xd0) +
                         (ulong)param_3 * 8))) {
      iVar4 = -6;
    }
    if (*(long *)(PTR_DAT_02713ca0 + param_2 * 8) != param_1) {
      iVar4 = -6;
    }
    if ((iVar4 < 0) && ((in_w6 & 1) == 0)) {
      return iVar4;
    }
    lVar7 = *(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xd0) +
                     (ulong)param_3 * 8);
    FUN_005470c0(*(undefined4 *)(lVar7 + 0x54),*(undefined4 *)(lVar7 + 0x58));
  }
  else {
    uVar5 = *puVar8;
    if (uVar5 != 0) {
      param_2 = param_2 & 0xffffffff;
      if (in_stack_00000018 == (undefined1 *)0x0) {
        uVar3 = 0;
        do {
          if (param_3 == 0xffffffff) {
            uVar6 = *(uint *)(puVar2 + param_2 * 4);
            lVar7 = *(long *)(*(long *)(param_1 + 0x20) + param_2 * 8 + 0x14f00);
            if (lVar7 != 0) goto LAB_0059d274;
            iVar4 = 0;
          }
          else {
            lVar7 = *(long *)(*(long *)(param_1 + 0x20) + param_2 * 8 + 0x14f00);
            iVar4 = 0;
            uVar6 = param_3;
            if (lVar7 != 0) {
LAB_0059d274:
              iVar4 = 0;
              if (lVar7 != *(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xd0)
                                    + (ulong)uVar6 * 8)) {
                iVar4 = -6;
              }
            }
          }
          if (*(long *)(puVar1 + param_2 * 8) != param_1) {
            iVar4 = -6;
          }
          if ((iVar4 < 0 & (in_w6 ^ 1)) == 0) {
            lVar7 = *(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xd0) +
                             (ulong)uVar6 * 8);
            FUN_005470c0(*(undefined4 *)(lVar7 + 0x54),*(undefined4 *)(lVar7 + 0x58));
            uVar5 = *puVar8;
            iVar4 = 0;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar5);
      }
      else {
        uVar5 = 0;
        do {
          *in_stack_00000018 = 0;
          if (param_3 == 0xffffffff) {
            uVar3 = *(uint *)(PTR_DAT_02713ca8 + param_2 * 4);
            lVar7 = *(long *)(*(long *)(param_1 + 0x20) + param_2 * 8 + 0x14f00);
            if (lVar7 != 0) goto LAB_0059d12c;
            iVar4 = 0;
          }
          else {
            lVar7 = *(long *)(*(long *)(param_1 + 0x20) + param_2 * 8 + 0x14f00);
            iVar4 = 0;
            uVar3 = param_3;
            if (lVar7 != 0) {
LAB_0059d12c:
              iVar4 = 0;
              if (lVar7 != *(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xd0)
                                    + (ulong)uVar3 * 8)) {
                iVar4 = -6;
              }
            }
          }
          if (*(long *)(puVar1 + param_2 * 8) != param_1) {
            iVar4 = -6;
          }
          if ((iVar4 < 0 & (in_w6 ^ 1)) == 0) {
            lVar7 = *(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0xa0) * 8 + 0xd0) +
                             (ulong)uVar3 * 8);
            FUN_005470c0(*(undefined4 *)(lVar7 + 0x54),*(undefined4 *)(lVar7 + 0x58));
            iVar4 = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *puVar8);
      }
      if (iVar4 < 0) {
        return iVar4;
      }
    }
  }
  return 0;
}


