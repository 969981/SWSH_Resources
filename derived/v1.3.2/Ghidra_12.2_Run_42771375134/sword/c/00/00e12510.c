/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e12510; name: FUN_00e12510
 */


void FUN_00e12510(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined *local_1b0;
  long local_1a8;
  long local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [96];
  long local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [96];
  long local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  long local_70 [2];
  
  if (((*(char *)(*(long *)PTR_DAT_02710788 + 0x14b) == '\0') &&
      (lVar7 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,10), lVar7 != 0)) &&
     (iVar5 = FUN_006e2f90(), 0 < iVar5)) {
    puVar8 = (undefined8 *)((ulong)&local_1b0 | 8);
    puVar1 = PTR_DAT_02710818 + 0x10;
    iVar5 = 0;
    puVar2 = PTR_DAT_02710808 + 0x10;
    do {
      local_a0 = FUN_006e2fb0(lVar7,iVar5);
      uStack_98 = 0xcbf29ce484222645;
      local_90 = &DAT_01d38550;
      local_78 = 0;
      local_88 = 0;
      local_80 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      local_118 = (code *)0x0;
      *puVar8 = 0;
      puVar8[3] = 0;
      puVar8[4] = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      local_1b0 = puVar1;
      FUN_0010ecd0(local_70,*(undefined8 *)PTR_DAT_02710788,2,&local_a0,0,param_2,lVar7);
      if (local_1a8 != 0) {
        (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
      }
      lVar4 = local_70[0];
      local_1a8 = local_70[0];
      if (local_70[0] != 0) {
        plVar9 = (long *)(local_70[0] + 0x48);
        (**(code **)(*plVar9 + 0x10))(plVar9);
        if (local_1a0 != 0 || local_120 != 0) {
          FUN_006e1e70(lVar4,&local_1b0,1);
        }
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      FUN_00e127d0(*(undefined8 *)PTR_DAT_0271e8d0,&local_1b0,*(undefined4 *)(param_1 + 0x360));
      local_1b0 = puVar2;
      if (local_1a8 == 0) {
        local_1a8 = 0;
        pcVar3 = local_118;
      }
      else {
        FUN_006e2100(local_1a8,&local_1b0);
        lVar4 = local_1a8;
        local_1a8 = 0;
        pcVar3 = local_118;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
          pcVar3 = local_118;
        }
      }
      local_118 = pcVar3;
      if (pcVar3 != (code *)0x0) {
        local_110 = 0;
        uStack_108 = 0;
        local_120 = 0;
        local_118 = (code *)0x0;
        (*pcVar3)(auStack_100);
      }
      pcVar3 = local_198;
      if (local_198 != (code *)0x0) {
        local_190 = 0;
        uStack_188 = 0;
        local_1a0 = 0;
        local_198 = (code *)0x0;
        (*pcVar3)(auStack_180);
      }
      if (local_1a8 != 0) {
        (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
        local_1a8 = 0;
      }
      if ((local_88 != 0) && (local_a0 != 0)) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      }
      local_a0 = 0;
      uStack_98 = 0xcbf29ce484222645;
      local_90 = &DAT_01d38550;
      local_88 = 0;
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      iVar5 = iVar5 + 1;
      iVar6 = FUN_006e2f90(lVar7);
    } while (iVar5 < iVar6);
  }
  return;
}


