/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b1f10; name: FUN_004b1f10
 */


undefined8 FUN_004b1f10(long *param_1,uint param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_02712a90;
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 <= param_2) {
    if (*(uint *)((long)param_1 + 0xc) < param_2) {
      uVar1 = *(uint *)((long)param_1 + 0xc) + (param_2 - uVar3);
      puVar6 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar1 << 2);
      if (puVar6 == (undefined4 *)0x0) {
        return 0;
      }
      puVar7 = (undefined4 *)*param_1;
      if ((puVar7 != (undefined4 *)0x0) && (puVar7 != puVar6)) {
        uVar4 = *(uint *)(param_1 + 1);
        if (uVar4 != 0) {
          uVar9 = 0;
          puVar7 = puVar6;
          do {
            if (puVar7 != (undefined4 *)0x0) {
              *(undefined2 *)puVar7 = 0xffff;
              *(undefined1 *)((long)puVar7 + 2) = 2;
              *(byte *)((long)puVar7 + 3) = *(byte *)((long)puVar7 + 3) & 0xfe;
            }
            lVar8 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            *puVar7 = *(undefined4 *)(*param_1 + lVar8);
            puVar7 = puVar7 + 1;
          } while (uVar4 != uVar9);
          puVar7 = (undefined4 *)*param_1;
        }
        FUN_00404870(*(undefined4 *)puVar5,puVar7);
      }
      *param_1 = (long)puVar6;
      *(uint *)((long)param_1 + 0xc) = uVar1;
    }
    if (uVar3 < param_2) {
      lVar8 = (ulong)uVar3 << 2;
      lVar10 = (ulong)param_2 - (ulong)uVar3;
      do {
        if (*param_1 + lVar8 != 0) {
          puVar2 = (undefined2 *)(*param_1 + lVar8);
          *puVar2 = 0xffff;
          *(undefined1 *)(puVar2 + 1) = 2;
          *(byte *)((long)puVar2 + 3) = *(byte *)((long)puVar2 + 3) & 0xfe;
        }
        lVar8 = lVar8 + 4;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}


