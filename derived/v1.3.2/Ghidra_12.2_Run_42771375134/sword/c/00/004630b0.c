/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004630b0; name: FUN_004630b0
 */


undefined8 FUN_004630b0(long param_1,void *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  void *__dest;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  uVar4 = 0x1f;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  puVar3 = PTR_DAT_02712a90;
  if ((((param_4 == (uint *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) || (param_5 == 0))
  {
LAB_00463210:
    uVar9 = *(uint *)(param_1 + 0x48);
  }
  else {
    __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)(param_3 << 4));
    *(void **)(param_1 + 0x30) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,(ulong)(param_3 << 4));
      *(uint *)(param_1 + 0x38) = param_3;
      lVar5 = FUN_00404690(*(undefined4 *)puVar3,param_5 * 0x18);
      *(long *)(param_1 + 0x40) = lVar5;
      if (lVar5 != 0) {
        *(uint *)(param_1 + 0x48) = param_5;
        uVar9 = *param_4;
        *(uint *)(lVar5 + 8) = param_4[1];
        if (*param_4 < param_3) {
          lVar5 = 0;
          puVar6 = param_4 + 3;
          uVar7 = 1;
          do {
            *(ulong *)(*(long *)(param_1 + 0x40) + lVar5) =
                 *(long *)(param_1 + 0x30) + (ulong)uVar9 * 0x10;
            *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar5 + 0xc) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar5 + 0x10) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x40) + lVar5 + 0x14) = 0;
            if (param_5 <= uVar7) {
              uVar4 = 1;
              uVar9 = *(uint *)(param_1 + 0x48);
              goto joined_r0x00463288;
            }
            uVar9 = puVar6[-1];
            uVar1 = *puVar6;
            uVar10 = (ulong)uVar7;
            puVar6 = puVar6 + 2;
            uVar8 = (ulong)uVar7;
            uVar7 = uVar7 + 1;
            *(uint *)(*(long *)(param_1 + 0x40) + uVar8 * 0x18 + 8) = uVar1;
            lVar5 = lVar5 + 0x18;
          } while (param_4[uVar10 * 2] < param_3);
        }
        uVar4 = 2;
        goto LAB_00463210;
      }
    }
    uVar4 = 0x34;
    uVar9 = *(uint *)(param_1 + 0x48);
  }
joined_r0x00463288:
  if (uVar9 != 0) {
    lVar5 = 0;
    uVar8 = 0;
    do {
      iVar2 = *(int *)(*(long *)(param_1 + 0x40) + lVar5 + 8);
      if (0 < iVar2) {
        *(undefined4 *)
         (*(long *)(*(long *)(param_1 + 0x40) + lVar5) + (long)(iVar2 + -1) * 0x10 + 0xc) =
             *(undefined4 *)(param_1 + 0x2c);
        uVar9 = *(uint *)(param_1 + 0x48);
      }
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar8 < uVar9);
  }
  return uVar4;
}


