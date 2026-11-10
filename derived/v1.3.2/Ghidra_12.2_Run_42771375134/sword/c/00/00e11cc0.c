/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e11cc0; name: FUN_00e11cc0
 */


void FUN_00e11cc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined *local_1c0;
  long local_1b8;
  long local_1b0;
  code *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [96];
  long local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [104];
  long local_a8;
  undefined8 uStack_a0;
  undefined1 *local_98;
  long local_90;
  long local_88;
  undefined4 local_80;
  undefined8 local_78;
  long local_70 [2];
  
  puVar4 = PTR_DAT_02710788;
  if (*(char *)(*(long *)PTR_DAT_02710788 + 0x14b) == '\0') {
    local_78 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
    lVar8 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,9);
    if ((lVar8 != 0) && (iVar6 = FUN_006e2f90(), 0 < iVar6)) {
      puVar10 = (undefined8 *)((ulong)&local_1c0 | 8);
      puVar1 = PTR_DAT_02710810 + 0x10;
      iVar6 = 0;
      puVar2 = PTR_DAT_02710800 + 0x10;
      do {
        local_a8 = FUN_006e2fb0(lVar8,iVar6);
        uStack_a0 = 0xcbf29ce484222645;
        local_98 = &DAT_01d38550;
        uVar9 = *(undefined8 *)puVar4;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_130 = 0;
        local_128 = (code *)0x0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        local_1c0 = puVar1;
        FUN_0071b750(local_70,uVar9,2,&local_a8,0,param_2,lVar8,&local_78);
        if (local_1b8 != 0) {
          (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
        }
        lVar5 = local_70[0];
        local_1b8 = local_70[0];
        if (local_70[0] != 0) {
          plVar11 = (long *)(local_70[0] + 0x48);
          (**(code **)(*plVar11 + 0x10))(plVar11);
          if (local_1b0 != 0 || local_130 != 0) {
            FUN_006e1e70(lVar5,&local_1c0,1);
          }
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
        FUN_00e11fc0(*(undefined8 *)PTR_DAT_0271e8d0,&local_1c0,*(undefined4 *)(param_1 + 0x360));
        local_1c0 = puVar2;
        if (local_1b8 == 0) {
          local_1b8 = 0;
          pcVar3 = local_128;
        }
        else {
          FUN_006e2100(local_1b8,&local_1c0);
          lVar5 = local_1b8;
          local_1b8 = 0;
          pcVar3 = local_128;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
            pcVar3 = local_128;
          }
        }
        local_128 = pcVar3;
        if (pcVar3 != (code *)0x0) {
          local_120 = 0;
          uStack_118 = 0;
          local_130 = 0;
          local_128 = (code *)0x0;
          (*pcVar3)(auStack_110);
        }
        pcVar3 = local_1a8;
        if (local_1a8 != (code *)0x0) {
          local_1a0 = 0;
          uStack_198 = 0;
          local_1b0 = 0;
          local_1a8 = (code *)0x0;
          (*pcVar3)(auStack_190);
        }
        if (local_1b8 != 0) {
          (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
          local_1b8 = 0;
        }
        if ((local_90 != 0) && (local_a8 != 0)) {
          (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        }
        local_a8 = 0;
        uStack_a0 = 0xcbf29ce484222645;
        local_98 = &DAT_01d38550;
        local_90 = 0;
        if (local_88 != 0) {
          (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
          local_88 = 0;
        }
        iVar6 = iVar6 + 1;
        iVar7 = FUN_006e2f90(lVar8);
      } while (iVar6 < iVar7);
    }
  }
  return;
}


