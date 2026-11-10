/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d2490; name: FUN_004d2490
 */


void FUN_004d2490(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  bVar4 = *(byte *)(param_1 + 0xb9) | *(byte *)(param_1 + 0xb8) >> 2;
  uVar2 = bVar4 & 0x1f;
  if (((*(long *)(param_1 + 0x310) == 0) || (*(short *)(param_1 + 0x2c0) != 0)) ||
     (*(short *)(param_1 + 0x340) != 0)) {
    if (((*(long *)(param_1 + 0x2f8) == 0) || (*(short *)(param_1 + 0x240) != 0)) ||
       (*(short *)(param_1 + 0x340) != 0)) {
      if (((*(long *)(param_1 + 0x2e0) == 0) || (*(short *)(param_1 + 0x1c0) != 0)) ||
         (*(short *)(param_1 + 0x340) != 0)) {
        lVar1 = param_1 + 0x88;
        if (((*(long *)(param_1 + 0x2c8) == 0) || (*(short *)(param_1 + 0x140) != 0)) ||
           (*(short *)(param_1 + 0x340) != 0)) {
          puVar9 = *(undefined8 **)(param_1 + 0xa8);
        }
        else {
          lVar1 = param_1 + 0x2c8;
          puVar9 = *(undefined8 **)(param_1 + 0xa8);
        }
      }
      else {
        lVar1 = param_1 + 0x2e0;
        puVar9 = *(undefined8 **)(param_1 + 0xa8);
      }
    }
    else {
      lVar1 = param_1 + 0x2f8;
      puVar9 = *(undefined8 **)(param_1 + 0xa8);
    }
  }
  else {
    lVar1 = param_1 + 0x310;
    puVar9 = *(undefined8 **)(param_1 + 0xa8);
  }
  puVar5 = (undefined4 *)PTR_DAT_02712e28;
  if ((puVar9 != (undefined8 *)0x0) &&
     ((*(uint *)((long)puVar9 + 0x44) != uVar2 || (*(int *)(puVar9 + 1) != *(int *)(lVar1 + 8))))) {
    uVar3 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*puVar9)(puVar9);
    FUN_00404870(uVar3,puVar9);
    puVar9 = (undefined8 *)0x0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    puVar5 = (undefined4 *)PTR_DAT_02712e28;
  }
  PTR_DAT_02712e28 = (undefined *)puVar5;
  if (((bVar4 & 0x1f) != 0) && (puVar9 == (undefined8 *)0x0)) {
    plVar8 = (long *)FUN_00404690(*puVar5,0x48);
    puVar6 = PTR_DAT_02713570;
    if (plVar8 != (long *)0x0) {
      *(undefined4 *)(plVar8 + 1) = *(undefined4 *)(lVar1 + 8);
      plVar8[4] = 0;
      plVar8[7] = 0;
      plVar8[8] = 0;
      *plVar8 = (long)(puVar6 + 0x10);
      plVar8[5] = 0;
      plVar8[6] = 0;
      puVar6 = PTR_DAT_02712b38;
      plVar8[2] = 0;
      plVar8[3] = 0;
      *(long **)(param_1 + 0xa8) = plVar8;
      iVar7 = FUN_004d2670(plVar8,*(undefined4 *)puVar6,uVar2);
      if (iVar7 == 1) {
        return;
      }
      puVar9 = *(undefined8 **)(param_1 + 0xa8);
      if (puVar9 != (undefined8 *)0x0) {
        uVar3 = *puVar5;
        (**(code **)*puVar9)(puVar9);
        FUN_00404870(uVar3,puVar9);
      }
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


