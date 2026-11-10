/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e5630; name: FUN_004e5630
 */


long * FUN_004e5630(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  if ((*(uint *)(param_1 + 0x40) < 6) && (uVar6 = FUN_004e6f50(param_1 + 0x28,6), (uVar6 & 1) == 0))
  {
    plVar8 = (long *)0x0;
  }
  else {
    puVar3 = PTR_DAT_02712a90;
    plVar8 = *(long **)(*(long *)(param_1 + 0x38) + 0x28);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x118);
      if (plVar8 != (long *)0x0) {
        *plVar8 = (long)(PTR_DAT_02713720 + 0x10);
        plVar8[1] = 0;
        puVar4 = PTR_DAT_02713630;
        lVar7 = *(long *)(PTR_DAT_02713630 + 8);
        plVar8[2] = 0;
        plVar8[3] = lVar7;
        plVar1 = (long *)(puVar4 + 0x10);
        if (*(long *)(puVar4 + 0x10) != 0) {
          plVar1 = (long *)(lVar7 + 0x10);
        }
        *plVar1 = (long)plVar8;
        *(long **)(puVar4 + 8) = plVar8;
        *(int *)puVar4 = *(int *)puVar4 + 1;
        *(undefined4 *)((long)plVar8 + 100) = 0;
        plVar8[4] = -1;
        plVar8[5] = -1;
        plVar8[6] = -1;
        plVar8[7] = 0;
        plVar8[8] = 0x3f800000;
        plVar8[9] = -1;
        plVar8[10] = 0;
        plVar8[0xb] = 0x3f800000;
        *(undefined2 *)(plVar8 + 0xd) = 0x101;
        puVar4 = PTR_DAT_02713728;
        *(undefined1 *)(plVar8 + 0x11) = 0;
        plVar8[0xf] = 0;
        plVar8[0x10] = 0;
        plVar8[0xe] = 0;
        *(undefined4 *)(plVar8 + 0x13) = 0x3f800000;
        *(undefined4 *)((long)plVar8 + 0xa4) = 0x3f800000;
        plVar8[0x19] = 0;
        *(undefined4 *)(plVar8 + 0x1a) = 0;
        plVar8[0x16] = 0;
        *(undefined4 *)(plVar8 + 0x22) = 0;
        plVar8[0x20] = 0;
        plVar8[0x21] = 0;
        plVar8[0x1b] = 0;
        plVar8[0x1e] = 0;
        plVar8[0x1f] = 0;
        plVar8[0x1c] = 0;
        plVar8[0x1d] = 0;
        *plVar8 = (long)(puVar4 + 0x10);
        plVar8[0x12] = 0x42c8000000000000;
        *(undefined8 *)((long)plVar8 + 0x9c) = 0xffffffff00000001;
        *(byte *)(plVar8 + 0x15) = *(byte *)(plVar8 + 0x15) | 1;
        *(undefined4 *)(plVar8 + 0x17) = 0x3f800000;
        *(undefined4 *)((long)plVar8 + 0xbc) = 0;
        *(undefined4 *)(plVar8 + 0x18) = 0x3f800000;
        *(undefined4 *)((long)plVar8 + 0xc4) = 0;
        *(long **)(*(long *)(param_1 + 0x38) + 0x28) = plVar8;
        plVar8[1] = param_1;
        iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 0x48));
        if (iVar5 != 1) {
          uVar2 = *(undefined4 *)puVar3;
          (**(code **)*plVar8)(plVar8);
          FUN_00404870(uVar2,plVar8);
          plVar8 = (long *)0x0;
          *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28) = 0;
        }
      }
    }
  }
  return plVar8;
}


