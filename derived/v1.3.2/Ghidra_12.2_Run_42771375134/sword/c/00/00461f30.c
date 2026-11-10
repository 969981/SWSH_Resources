/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00461f30; name: FUN_00461f30
 */


undefined8 * FUN_00461f30(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  puVar3 = PTR_DAT_02712a90;
  uVar2 = *(uint *)(param_1 + 1);
  uVar8 = *(uint *)((long)param_1 + 0xc);
  if (uVar8 <= uVar2) {
    uVar8 = uVar8 + 2;
    lVar4 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar8 << 4);
    if (lVar4 == 0) {
      return (undefined8 *)0x0;
    }
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar4)) {
      uVar7 = (ulong)*(uint *)(param_1 + 1);
      if (*(uint *)(param_1 + 1) != 0) {
        lVar6 = 0;
        do {
          puVar5 = (undefined8 *)(lVar4 + lVar6);
          if (puVar5 != (undefined8 *)0x0) {
            puVar1 = (undefined8 *)(lVar4 + lVar6);
            *puVar1 = 0;
            *(undefined2 *)(puVar1 + 1) = 0;
            *(undefined4 *)((long)puVar1 + 0xc) = 0;
          }
          puVar1 = (undefined8 *)(*param_1 + lVar6);
          lVar6 = lVar6 + 0x10;
          puVar5[1] = puVar1[1];
          uVar7 = uVar7 - 1;
          *puVar5 = *puVar1;
        } while (uVar7 != 0);
        lVar6 = *param_1;
      }
      FUN_00404870(*(undefined4 *)puVar3,lVar6);
    }
    *param_1 = lVar4;
    *(uint *)((long)param_1 + 0xc) = uVar8;
  }
  if (uVar2 < uVar8) {
    uVar8 = *(uint *)(param_1 + 1);
    puVar5 = (undefined8 *)(*param_1 + (ulong)uVar8 * 0x10);
    *(uint *)(param_1 + 1) = uVar8 + 1;
    if (puVar5 != (undefined8 *)0x0) {
      lVar4 = *param_1 + (ulong)uVar8 * 0x10;
      *(undefined4 *)puVar5 = 0;
      *(undefined4 *)(lVar4 + 4) = 0;
      *(undefined2 *)(lVar4 + 8) = 0;
      *(undefined4 *)(lVar4 + 0xc) = 0;
      puVar5[1] = param_2[1];
      *puVar5 = *param_2;
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  return puVar5;
}


