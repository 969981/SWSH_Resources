/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a6440; name: FUN_003a6440
 */


void FUN_003a6440(long *param_1,uint param_2,uint param_3,long *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  
  if (param_2 < *(uint *)(param_1 + 1)) {
    uVar5 = *(uint *)(*param_1 + (ulong)param_2 * 4);
  }
  else {
    uVar5 = 0xffffffff;
  }
  uVar3 = 0xffffffff;
  if (param_3 < *(uint *)(param_1 + 1)) {
    uVar3 = *(uint *)(*param_1 + (ulong)param_3 * 4);
  }
  lVar4 = param_4[2];
  if (uVar5 != 0xffffffff) {
    puVar8 = (uint *)(lVar4 + (ulong)uVar5 * 0x1c + 0x18);
    uVar5 = *puVar8;
    uVar2 = uVar5 >> 1 & 0xf;
    if (uVar2 != 0) {
      lVar6 = *param_4 + (ulong)(uVar5 >> 5) * 4;
      lVar7 = 0;
      do {
        if (*(uint *)(lVar6 + lVar7 * 4) == param_2) {
          uVar2 = uVar2 - 1;
          *puVar8 = uVar5 & 0xffffffe1 | uVar2 * 2;
          *(undefined4 *)(lVar6 + lVar7 * 4) = 0xffffffff;
          *(undefined4 *)(*param_1 + (ulong)param_2 * 4) = 0xffffffff;
          if (uVar2 != (uint)lVar7) {
            uVar1 = *(undefined4 *)(lVar6 + lVar7 * 4);
            *(undefined4 *)(lVar6 + lVar7 * 4) = *(undefined4 *)(lVar6 + (ulong)uVar2 * 4);
            *(undefined4 *)(lVar6 + (ulong)uVar2 * 4) = uVar1;
          }
          break;
        }
        lVar7 = lVar7 + 1;
      } while ((uint)lVar7 < uVar2);
    }
  }
  if ((param_2 != param_3) && (uVar3 != 0xffffffff)) {
    uVar5 = *(uint *)(lVar4 + (ulong)uVar3 * 0x1c + 0x18);
    uVar2 = uVar5 >> 1 & 0xf;
    if (uVar2 != 0) {
      lVar6 = 0;
      lVar4 = *param_4 + (ulong)(uVar5 >> 5) * 4;
      do {
        if (*(uint *)(lVar4 + lVar6 * 4) == param_3) {
          *(uint *)(lVar4 + lVar6 * 4) = param_2;
          lVar4 = *param_1;
          *(uint *)(lVar4 + (ulong)param_2 * 4) = uVar3;
          *(undefined4 *)(lVar4 + (ulong)param_3 * 4) = 0xffffffff;
          return;
        }
        lVar6 = lVar6 + 1;
      } while ((uint)lVar6 < uVar2);
    }
  }
  return;
}


