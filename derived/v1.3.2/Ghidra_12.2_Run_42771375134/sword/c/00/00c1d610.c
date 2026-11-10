/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1d610; name: FUN_00c1d610
 */


void FUN_00c1d610(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long local_38;
  long local_28;
  
  lVar10 = *param_2;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = *param_3;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_28 = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_38 = lVar11;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  FUN_00ff5fc0(param_1,&local_28,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  puVar3 = PTR_DAT_0271b9c0;
  puVar1 = PTR_DAT_0271b9c0 + 0x10;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = (long)puVar1;
  param_1[9] = (long)(puVar3 + 0x78);
  param_1[10] = (long)(puVar3 + 0xb8);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  puVar1 = PTR_DAT_0271bc08;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x78);
  param_1[10] = (long)(puVar1 + 0xb8);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  puVar4 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar6 = *puVar4;
  uVar8 = puVar4[1];
  do {
    uVar9 = uVar6 ^ uVar8;
    iVar7 = (int)uVar8;
    iVar5 = (int)uVar6;
    uVar8 = uVar9 >> 0x1b | uVar9 << 0x25;
    uVar6 = uVar9 ^ (uVar6 >> 0x28 | uVar6 << 0x18) ^ uVar9 << 0x10;
    uVar9 = (ulong)(uint)(iVar5 + iVar7) & 0xf;
  } while (0xb < uVar9);
  *puVar4 = uVar6;
  puVar4[1] = uVar8;
  *(undefined2 *)((long)param_1 + 0xc4) = 0;
  *(undefined1 *)((long)param_1 + 0xea) = 0;
  uVar2 = *(undefined4 *)(&DAT_0215c9c4 + uVar9 * 4);
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  return;
}


