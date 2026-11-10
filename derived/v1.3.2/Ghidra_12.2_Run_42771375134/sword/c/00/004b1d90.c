/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b1d90; name: FUN_004b1d90
 */


void FUN_004b1d90(long *param_1,uint param_2,long param_3,uint param_4)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  
  uVar3 = (**(code **)(*param_1 + 0x78))();
  if ((uVar3 & 1) != 0) {
    (**(code **)(*param_1 + 0x50))(param_1);
    plVar4 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
    if (*(uint *)(plVar4 + 1) == param_2) {
      uVar3 = 0;
      uVar5 = 0;
      if (param_2 != 0) {
        do {
          uVar5 = (uint)uVar3;
          if ((*(short *)(*plVar4 + uVar3 * 4) != *(short *)(param_3 + uVar3 * 0xc)) ||
             (*(uint *)(param_3 + uVar3 * 0xc + 4) != (uint)*(byte *)(*plVar4 + uVar3 * 4 + 2)))
          break;
          uVar5 = uVar5 + 1;
          uVar3 = (ulong)uVar5;
        } while (uVar5 < param_2);
      }
      if (uVar5 == param_2) {
        return;
      }
    }
    if (*plVar4 != 0) {
      *(undefined4 *)(plVar4 + 1) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      *plVar4 = 0;
      *(undefined4 *)((long)plVar4 + 0xc) = 0;
    }
    if ((param_2 != 0) && (uVar3 = FUN_004b1f10(plVar4,param_2), (uVar3 & 1) != 0)) {
      lVar6 = 0;
      uVar3 = (ulong)param_2;
      puVar7 = (undefined4 *)(param_3 + 4);
      do {
        uVar3 = uVar3 - 1;
        *(short *)(*plVar4 + lVar6) = (short)puVar7[-1];
        *(char *)(*plVar4 + lVar6 + 2) = (char)*puVar7;
        lVar2 = *plVar4 + lVar6;
        lVar6 = lVar6 + 4;
        pbVar1 = (byte *)(puVar7 + 1);
        puVar7 = puVar7 + 3;
        *(byte *)(lVar2 + 3) = *(byte *)(lVar2 + 3) & 0xfe | *pbVar1;
      } while (uVar3 != 0);
    }
    if ((param_4 & 1) != 0) {
      FUN_004b2040(param_1);
      return;
    }
  }
  return;
}


