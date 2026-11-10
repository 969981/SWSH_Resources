/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002afb10; name: FUN_002afb10
 */


/* WARNING: Removing unreachable block (ram,0x002afbc0) */

void FUN_002afb10(ushort param_1,uint param_2,long param_3,undefined8 *param_4,uint param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  ushort *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  byte abStack_b0 [128];
  
  if (param_1 < 0x100) {
    uVar9 = (ulong)param_2;
    lVar5 = -(uVar9 + 0xf & 0x1fffffff0);
    (**(code **)*param_4)(param_4,abStack_b0 + lVar5 + 0x80,param_2);
    if (param_2 != 0) {
      if (uVar9 - 1 < 3) {
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        puVar7 = (ushort *)(param_3 + 4);
        do {
          pbVar6 = abStack_b0 + lVar4 + lVar5 + 0x81;
          lVar4 = lVar4 + 4;
          puVar7[-2] = (ushort)pbVar6[-1];
          puVar7[-1] = (ushort)*pbVar6;
          *puVar7 = (ushort)pbVar6[1];
          puVar7[1] = (ushort)pbVar6[2];
          puVar7 = puVar7 + 4;
        } while (uVar9 - (uVar9 & 3) != lVar4);
      }
      if ((param_2 & 3) != 0) {
        lVar3 = -(uVar9 & 3);
        pbVar6 = abStack_b0 + lVar5 + 0x80 + lVar4;
        puVar7 = (ushort *)(param_3 + lVar4 * 2);
        do {
          lVar3 = lVar3 + 1;
          *puVar7 = (ushort)*pbVar6;
          pbVar6 = pbVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (lVar3 != 0);
      }
    }
  }
  else {
    (**(code **)*param_4)(param_4,param_3,param_2 << 1);
    if ((param_2 != 0) && ((param_5 & 1) != 0)) {
      if (param_2 == 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        puVar8 = (undefined1 *)(param_3 + 3);
        do {
          uVar1 = puVar8[-3];
          lVar5 = lVar5 + 2;
          uVar2 = puVar8[-1];
          puVar8[-3] = puVar8[-2];
          puVar8[-2] = uVar1;
          puVar8[-1] = *puVar8;
          *puVar8 = uVar2;
          puVar8 = puVar8 + 4;
        } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar5);
        if ((param_2 & 1) == 0) {
          return;
        }
      }
      puVar8 = (undefined1 *)(param_3 + lVar5 * 2);
      uVar1 = *puVar8;
      *puVar8 = puVar8[1];
      puVar8[1] = uVar1;
    }
  }
  return;
}


