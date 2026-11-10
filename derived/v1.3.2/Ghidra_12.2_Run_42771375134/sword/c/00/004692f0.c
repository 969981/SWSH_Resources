/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004692f0; name: FUN_004692f0
 */


void FUN_004692f0(uint *param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ushort uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if ((*(long *)(param_1 + 2) != 0) && ((*(byte *)(param_2 + 8) >> 2 & 1) != 0)) {
    *(undefined8 *)(param_3 + 0x18) = 0;
    *(undefined2 *)(param_3 + 0x14) = 0;
    uVar6 = *param_1;
    if (uVar6 != 0) {
      uVar4 = 0;
      uVar5 = 0;
      uVar1 = *(ushort *)(param_3 + 0x12) + param_4;
      lVar8 = 4;
      do {
        if (param_4 <= *(uint *)(*(long *)(param_1 + 2) + lVar8) &&
            *(uint *)(*(long *)(param_1 + 2) + lVar8) < uVar1) {
          uVar4 = uVar4 + 1;
          *(ushort *)(param_3 + 0x14) = uVar4;
          uVar6 = *param_1;
        }
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x10;
      } while (uVar5 < uVar6);
      if (uVar4 != 0) {
        plVar3 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,(ulong)uVar4 << 5);
        *(long **)(param_3 + 0x18) = plVar3;
        if (plVar3 == (long *)0x0) {
          *(undefined2 *)(param_3 + 0x14) = 0;
        }
        else {
          uVar6 = *param_1;
          if (uVar6 != 0) {
            lVar8 = 0;
            uVar5 = 0;
            do {
              uVar2 = *(uint *)(*(long *)(param_1 + 2) + lVar8 + 4);
              if (param_4 <= uVar2 && uVar2 < uVar1) {
                *plVar3 = param_2;
                *(uint *)(plVar3 + 1) = *(int *)(*(long *)(param_1 + 2) + lVar8 + 4) - param_4;
                lVar7 = *(long *)(param_1 + 2);
                plVar3[3] = ((long *)(lVar7 + lVar8))[1];
                plVar3[2] = *(long *)(lVar7 + lVar8);
                uVar6 = *param_1;
                plVar3 = plVar3 + 4;
              }
              uVar5 = uVar5 + 1;
              lVar8 = lVar8 + 0x10;
            } while (uVar5 < uVar6);
          }
        }
      }
    }
  }
  return;
}


