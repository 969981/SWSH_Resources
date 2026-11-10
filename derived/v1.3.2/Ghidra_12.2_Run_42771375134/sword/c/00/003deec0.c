/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003deec0; name: FUN_003deec0
 */


void FUN_003deec0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  uint *puVar10;
  byte *pbVar11;
  byte bVar12;
  ulong uVar13;
  undefined1 auStack_a0 [64];
  
  uVar2 = *(uint *)(param_1 + 0x850);
  uVar13 = (ulong)uVar2;
  if (uVar2 != 0) {
    lVar7 = *(long *)(param_1 + 0x1118);
    if ((*(int *)(param_1 + 0x10f8) != 1) ||
       (plVar5 = *(long **)(**(long **)(param_1 + 0x10f0) + 0x48), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      memset(auStack_a0,0,0x10);
    }
    if (*(uint *)(lVar7 + 0x38) == 0) {
      pcVar8 = *(code **)(*plVar5 + 0x20);
      lVar6 = *(long *)(param_1 + 0x848);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x848);
      if (*(uint *)(param_1 + 0x860) < *(uint *)(lVar7 + 0x38)) {
        uVar1 = *(uint *)(lVar7 + 0x28) & 0x7fffffff;
        puVar10 = (uint *)(**(long **)(param_1 + 0x858) + 4);
        pbVar11 = (byte *)(lVar6 + 0x24);
        do {
          uVar3 = puVar10[-1] >> 5;
          if ((uVar1 <= uVar3) ||
             (bVar12 = 1,
             (*(uint *)(*(long *)(lVar7 + 0x20) + (ulong)uVar3 * 4) &
             1 << (ulong)(puVar10[-1] & 0x1f)) == 0)) {
            bVar12 = 0;
          }
          uVar3 = *puVar10 >> 5;
          if ((uVar3 < uVar1) &&
             ((*(uint *)(*(long *)(lVar7 + 0x20) + (ulong)uVar3 * 4) & 1 << (ulong)(*puVar10 & 0x1f)
              ) != 0)) {
            bVar12 = bVar12 | 2;
          }
          puVar10 = puVar10 + 3;
          uVar13 = uVar13 - 1;
          *pbVar11 = bVar12;
          pbVar11 = pbVar11 + 0x28;
        } while (uVar13 != 0);
      }
      else {
        lVar9 = 0;
        pbVar11 = (byte *)(lVar6 + 0x24);
        do {
          if ((*pbVar11 >> 2 & 1) != 0) {
            uVar3 = *(uint *)(**(long **)(param_1 + 0x858) + lVar9);
            uVar4 = uVar3 >> 5;
            uVar1 = *(uint *)(lVar7 + 0x28) & 0x7fffffff;
            if ((uVar1 <= uVar4) ||
               (bVar12 = 1,
               (*(uint *)(*(long *)(lVar7 + 0x20) + (ulong)uVar4 * 4) & 1 << (ulong)(uVar3 & 0x1f))
               == 0)) {
              bVar12 = 0;
            }
            uVar3 = *(uint *)(**(long **)(param_1 + 0x858) + lVar9 + 4);
            uVar4 = uVar3 >> 5;
            if ((uVar4 < uVar1) &&
               ((*(uint *)(*(long *)(lVar7 + 0x20) + (ulong)uVar4 * 4) & 1 << (ulong)(uVar3 & 0x1f))
                != 0)) {
              bVar12 = bVar12 | 2;
            }
            *pbVar11 = bVar12;
          }
          pbVar11 = pbVar11 + 0x28;
          lVar9 = lVar9 + 0xc;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      pcVar8 = *(code **)(*plVar5 + 0x20);
    }
    (*pcVar8)(plVar5,lVar6,uVar2);
  }
  *(undefined4 *)(param_1 + 0x850) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x858) + 8) = 0;
  return;
}


