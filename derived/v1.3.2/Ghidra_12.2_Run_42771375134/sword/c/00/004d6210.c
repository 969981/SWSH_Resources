/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d6210; name: FUN_004d6210
 */


void FUN_004d6210(long param_1,long param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  void *__dest;
  uint uVar4;
  long lVar5;
  ushort uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    uVar3 = *(ushort *)(param_1 + 0x14);
    if (uVar3 != 0) {
      uVar2 = param_4 + param_3;
      if (uVar3 == 1) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        iVar9 = (uVar3 & 1) - (uint)uVar3;
        do {
          puVar8 = (uint *)(lVar5 + 8);
          puVar1 = (uint *)(lVar5 + 0x28);
          lVar5 = lVar5 + 0x40;
          iVar9 = iVar9 + 2;
          uVar6 = uVar6 + (param_3 <= *puVar8 && *puVar8 < uVar2) +
                  (ushort)(param_3 <= *puVar1 && *puVar1 < uVar2);
        } while (iVar9 != 0);
      }
      if ((uVar3 & 1) != 0) {
        uVar6 = uVar6 + (param_3 <= *(uint *)(lVar5 + 8) && *(uint *)(lVar5 + 8) < uVar2);
      }
      if (uVar6 != 0) {
        __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,
                                      ((ulong)*(ushort *)(param_2 + 0x14) + (ulong)uVar6) * 0x20);
        if (__dest == (void *)0x0) {
          FUN_004904f0(param_2);
          return;
        }
        if (*(void **)(param_2 + 0x18) != (void *)0x0) {
          memcpy(__dest,*(void **)(param_2 + 0x18),(ulong)*(ushort *)(param_2 + 0x14) << 5);
        }
        uVar10 = (uint)*(ushort *)(param_1 + 0x14);
        if (*(ushort *)(param_1 + 0x14) != 0) {
          puVar7 = (undefined8 *)((long)__dest + (ulong)*(ushort *)(param_2 + 0x14) * 0x20);
          uVar4 = 0;
          puVar8 = (uint *)(*(long *)(param_1 + 0x18) + 8);
          do {
            if (param_3 <= *puVar8 && *puVar8 < uVar2) {
              *puVar7 = *(undefined8 *)(puVar8 + -2);
              *(undefined4 *)(puVar7 + 1) = 0;
              puVar7[3] = *(undefined8 *)(puVar8 + 4);
              puVar7[2] = *(undefined8 *)(puVar8 + 2);
              uVar10 = (uint)*(ushort *)(param_1 + 0x14);
              puVar7 = puVar7 + 4;
            }
            uVar4 = uVar4 + 1;
            puVar8 = puVar8 + 8;
          } while (uVar4 < uVar10);
        }
        FUN_004904f0(param_2);
        *(void **)(param_2 + 0x18) = __dest;
        *(ushort *)(param_2 + 0x14) = *(short *)(param_2 + 0x14) + uVar6;
      }
    }
  }
  return;
}


