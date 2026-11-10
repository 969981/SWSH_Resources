/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00459fa0; name: FUN_00459fa0
 */


undefined8 FUN_00459fa0(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 0x20);
  if (uVar4 <= param_2) {
    if (*(uint *)(param_1 + 0x24) < param_2) {
      uVar1 = *(uint *)(param_1 + 0x24) + (param_2 - uVar4);
      uVar5 = (ulong)uVar1 * 0x18;
      lVar7 = param_1;
      if (0x18 < uVar5) {
        lVar7 = FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,uVar5,8);
      }
      if (lVar7 == 0) {
        return 0;
      }
      lVar6 = *(long *)(param_1 + 0x18);
      if ((lVar6 != 0) && (lVar6 != lVar7)) {
        uVar5 = (ulong)*(uint *)(param_1 + 0x20);
        if (*(uint *)(param_1 + 0x20) != 0) {
          lVar6 = 0;
          do {
            puVar2 = (undefined8 *)(lVar7 + lVar6);
            if (puVar2 != (undefined8 *)0x0) {
              puVar3 = (undefined8 *)(lVar7 + lVar6);
              *puVar3 = 0xffffffffffffffff;
              *(undefined4 *)(puVar3 + 1) = 0;
              *(undefined4 *)(puVar3 + 2) = 0x3f800000;
            }
            puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar6);
            lVar6 = lVar6 + 0x18;
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            puVar2[1] = puVar3[1];
            uVar5 = uVar5 - 1;
            *puVar2 = *puVar3;
          } while (uVar5 != 0);
          lVar6 = *(long *)(param_1 + 0x18);
        }
        if (param_1 != lVar6) {
          FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
        }
      }
      *(long *)(param_1 + 0x18) = lVar7;
      *(uint *)(param_1 + 0x24) = uVar1;
    }
    if (uVar4 < param_2) {
      lVar6 = (ulong)param_2 - (ulong)uVar4;
      lVar7 = (ulong)uVar4 * 0x18;
      do {
        if (*(long *)(param_1 + 0x18) + lVar7 != 0) {
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar7);
          *puVar2 = 0xffffffffffffffff;
          *(undefined4 *)(puVar2 + 1) = 0;
          *(undefined4 *)(puVar2 + 2) = 0x3f800000;
        }
        lVar7 = lVar7 + 0x18;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  *(uint *)(param_1 + 0x20) = param_2;
  return 1;
}


