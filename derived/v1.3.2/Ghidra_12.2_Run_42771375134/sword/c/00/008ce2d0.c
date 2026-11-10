/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ce2d0; name: FUN_008ce2d0
 */


void FUN_008ce2d0(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 local_48;
  
  *(int *)(param_1 + 0x618) = param_2;
  if (param_2 == 2) {
    plVar9 = *(long **)(param_1 + 0x600);
    uVar8 = *(undefined8 *)(param_1 + 0x610);
    uVar7 = *(undefined8 *)(param_1 + 0x608);
    uVar6 = FUN_016b8190(plVar9);
    uVar2 = *(uint *)(param_1 + 0x620);
    uVar5 = (uint)(uVar6 >> 0x20);
    if (uVar2 != uVar5) {
      if (uVar2 != 0xffffffff) {
        FUN_00ffd010(param_1 + 0x100,&UNK_02145f48 + (ulong)uVar2 * 0x180);
      }
      if (uVar5 != 0xffffffff) {
        FUN_00ffd010(param_1 + 0x100,&UNK_02145f40 + (uVar6 >> 0x20) * 0x180);
      }
      *(uint *)(param_1 + 0x620) = uVar5;
    }
    uVar10 = *(undefined8 *)(param_1 + 0x5f8);
    uVar4 = FUN_016c0030(uVar10);
    uVar5 = FUN_016c3340(uVar10,uVar4);
    uVar2 = *(uint *)(param_1 + 0x61c);
    if (uVar2 != uVar5) {
      lVar1 = param_1 + 0x100;
      if (uVar2 != 0xffffffff) {
        local_48 = *(undefined8 *)(PTR_DAT_02717b38 + (ulong)uVar2 * 0x90 + 0x60);
        FUN_00ffd010(lVar1,&local_48);
      }
      puVar3 = PTR_DAT_02717b38;
      if (uVar5 != 0xffffffff) {
        local_48 = *(undefined8 *)(PTR_DAT_02717b38 + (ulong)uVar5 * 0x90 + 0x60);
        FUN_00ffd430(lVar1,&local_48);
        local_48 = *(undefined8 *)(puVar3 + (ulong)uVar5 * 0x90 + 0x58);
        FUN_00ffd010(lVar1,&local_48);
      }
      *(uint *)(param_1 + 0x61c) = uVar5;
    }
    uVar4 = 2;
  }
  else {
    if (param_2 != 1) {
      FUN_016b2eb0(*(undefined8 *)(param_1 + 0x5f8));
      FUN_016b2eb0(*(undefined8 *)(param_1 + 0x600));
      FUN_016b2d70(*(undefined8 *)(param_1 + 0x610),0);
      FUN_016b2d70(*(undefined8 *)(param_1 + 0x608),0);
      if (*(uint *)(param_1 + 0x620) != 0xffffffff) {
        FUN_00ffd010(param_1 + 0x100,&UNK_02145f48 + (ulong)*(uint *)(param_1 + 0x620) * 0x180);
        *(undefined4 *)(param_1 + 0x620) = 0xffffffff;
      }
      if (*(uint *)(param_1 + 0x61c) != 0xffffffff) {
        local_48 = *(undefined8 *)
                    (PTR_DAT_02717b38 + (ulong)*(uint *)(param_1 + 0x61c) * 0x90 + 0x60);
        FUN_00ffd010(param_1 + 0x100,&local_48);
        *(undefined4 *)(param_1 + 0x61c) = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x64c) = 3;
      return;
    }
    plVar9 = *(long **)(param_1 + 0x5f8);
    uVar8 = *(undefined8 *)(param_1 + 0x608);
    uVar7 = *(undefined8 *)(param_1 + 0x610);
    if (*(uint *)(param_1 + 0x620) == 0xffffffff) {
      plVar11 = plVar9;
    }
    else {
      FUN_00ffd010(param_1 + 0x100,&UNK_02145f48 + (ulong)*(uint *)(param_1 + 0x620) * 0x180);
      *(undefined4 *)(param_1 + 0x620) = 0xffffffff;
      plVar11 = *(long **)(param_1 + 0x5f8);
    }
    uVar4 = FUN_016c0030(plVar11);
    uVar5 = FUN_016c3340(plVar11,uVar4);
    uVar2 = *(uint *)(param_1 + 0x61c);
    if (uVar2 != uVar5) {
      lVar1 = param_1 + 0x100;
      if (uVar2 != 0xffffffff) {
        local_48 = *(undefined8 *)(PTR_DAT_02717b38 + (ulong)uVar2 * 0x90 + 0x60);
        FUN_00ffd010(lVar1,&local_48);
      }
      puVar3 = PTR_DAT_02717b38;
      if (uVar5 != 0xffffffff) {
        local_48 = *(undefined8 *)(PTR_DAT_02717b38 + (ulong)uVar5 * 0x90 + 0x60);
        FUN_00ffd430(lVar1,&local_48);
        local_48 = *(undefined8 *)(puVar3 + (ulong)uVar5 * 0x90 + 0x58);
        FUN_00ffd010(lVar1,&local_48);
      }
      *(uint *)(param_1 + 0x61c) = uVar5;
    }
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x64c) = uVar4;
  (**(code **)(*plVar9 + 0x50))(plVar9);
  FUN_016b2d70(uVar8,1);
  FUN_016b2d70(uVar7,0);
  return;
}


