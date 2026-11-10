/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a400d0; name: FUN_00a400d0
 */


void FUN_00a400d0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  
  plVar4 = (long *)FUN_00ff93d0();
  plVar5 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0xb0,8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar4;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  puVar1 = PTR_DAT_02719298 + 0x10;
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(plVar5 + 0xf) = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[2] = lVar3;
  *plVar5 = (long)puVar1;
  plVar5[1] = lVar2;
  plVar5[0xb] = 0;
  plVar5[0xc] = 0;
  plVar5[9] = 0;
  plVar5[10] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  FUN_00a40aa0(plVar5);
  plVar8 = *(long **)(param_1 + 0x80);
  *(long **)(param_1 + 0x80) = plVar5;
  if (plVar8 != (long *)0x0) {
    *plVar8 = (long)puVar1;
    if (plVar8[0x15] != 0) {
      (**(code **)(*(long *)(plVar8[0x15] + 0x48) + 0x18))();
      plVar8[0x15] = 0;
    }
    lVar6 = plVar8[0x10];
    plVar8[0x10] = 0;
    if (lVar6 != 0) {
      uVar7 = plVar8[0x12];
      if (0xa7 < uVar7) {
        uVar9 = 0;
        plVar5 = (long *)(lVar6 + 0x90);
        puVar1 = PTR_DAT_027192a0 + 0x10;
        do {
          plVar5[-0x12] = (long)puVar1;
          if (*plVar5 != 0) {
            (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
            *plVar5 = 0;
          }
          uVar9 = uVar9 + 1;
          plVar5 = plVar5 + 0x15;
        } while (uVar9 < uVar7 / 0xa8);
        uVar7 = plVar8[0x12];
      }
      (**(code **)(*(long *)plVar8[0x11] + 0x18))((long *)plVar8[0x11],lVar6,uVar7,plVar8[0x13]);
    }
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
              (*(long **)(param_1 + 0x88),plVar8,*(undefined8 *)(param_1 + 0x90),
               *(undefined8 *)(param_1 + 0x98));
  }
  *(long **)(param_1 + 0x88) = plVar4;
  *(undefined8 *)(param_1 + 0x90) = 0xb0;
  *(undefined8 *)(param_1 + 0x98) = 8;
  return;
}


