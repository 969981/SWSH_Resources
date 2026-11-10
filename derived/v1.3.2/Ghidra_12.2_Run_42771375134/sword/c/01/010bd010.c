/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bd010; name: FUN_010bd010
 */


void FUN_010bd010(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 local_68 [7];
  
  local_68[2] = DAT_02163b88;
  local_68[3] = DAT_02163b90;
  local_68[0] = DAT_02163b78;
  local_68[1] = DAT_02163b80;
  local_68[6] = DAT_02163ba8;
  local_68[4] = DAT_02163b98;
  local_68[5] = DAT_02163ba0;
  piVar1 = (int *)(*(long *)PTR_DAT_027108d8 + 0x11af0);
  bVar4 = *piVar1 != 8;
  if (bVar4) {
    local_68[0] = *(undefined8 *)(PTR_DAT_027243a8 + 0x78);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(PTR_DAT_027243a8 + 0x70);
    iVar9 = *piVar1;
  }
  else {
    iVar9 = 8;
  }
  puVar3 = PTR_DAT_027243a8;
  uVar8 = (ulong)bVar4;
  iVar2 = *(int *)PTR_DAT_027243a8;
  if (iVar9 != iVar2) {
    local_68[uVar8] = *(undefined8 *)(PTR_DAT_027243a8 + 8);
    lVar6 = uVar8 * 4;
    uVar8 = (ulong)(bVar4 + 1);
    *(int *)(param_1 + lVar6 + 0xd0) = iVar2;
    iVar9 = *piVar1;
  }
  if (((uint)uVar8 < 7) && (iVar2 = *(int *)(puVar3 + 0x10), iVar9 != iVar2)) {
    local_68[uVar8] = *(undefined8 *)(puVar3 + 0x18);
    lVar6 = uVar8 * 4;
    uVar8 = (ulong)((uint)uVar8 + 1);
    *(int *)(param_1 + lVar6 + 0xd0) = iVar2;
    iVar9 = *piVar1;
  }
  if (((uint)uVar8 < 7) && (iVar2 = *(int *)(puVar3 + 0x20), iVar9 != iVar2)) {
    local_68[uVar8] = *(undefined8 *)(puVar3 + 0x28);
    lVar6 = uVar8 * 4;
    uVar8 = (ulong)((uint)uVar8 + 1);
    *(int *)(param_1 + lVar6 + 0xd0) = iVar2;
    iVar9 = *piVar1;
  }
  if (((uint)uVar8 < 7) && (iVar2 = *(int *)(puVar3 + 0x30), iVar9 != iVar2)) {
    local_68[uVar8] = *(undefined8 *)(puVar3 + 0x38);
    lVar6 = uVar8 * 4;
    uVar8 = (ulong)((uint)uVar8 + 1);
    *(int *)(param_1 + lVar6 + 0xd0) = iVar2;
    iVar9 = *piVar1;
  }
  if (((uint)uVar8 < 7) && (iVar2 = *(int *)(puVar3 + 0x40), iVar9 != iVar2)) {
    local_68[uVar8] = *(undefined8 *)(puVar3 + 0x48);
    lVar6 = uVar8 * 4;
    uVar8 = (ulong)((uint)uVar8 + 1);
    *(int *)(param_1 + lVar6 + 0xd0) = iVar2;
    iVar9 = *piVar1;
  }
  if (((uint)uVar8 < 7) && (iVar2 = *(int *)(puVar3 + 0x50), iVar9 != iVar2)) {
    local_68[uVar8] = *(undefined8 *)(puVar3 + 0x58);
    lVar6 = uVar8 * 4;
    uVar8 = (ulong)((uint)uVar8 + 1);
    *(int *)(param_1 + lVar6 + 0xd0) = iVar2;
    iVar9 = *piVar1;
  }
  if (((uint)uVar8 < 7) && (iVar2 = *(int *)(puVar3 + 0x60), iVar9 != iVar2)) {
    local_68[uVar8] = *(undefined8 *)(puVar3 + 0x68);
    lVar6 = uVar8 * 4;
    uVar8 = (ulong)((uint)uVar8 + 1);
    *(int *)(param_1 + lVar6 + 0xd0) = iVar2;
    iVar9 = *piVar1;
  }
  uVar7 = (uint)uVar8;
  if ((uVar7 < 7) && (iVar2 = *(int *)(puVar3 + 0x70), iVar9 != iVar2)) {
    local_68[uVar8] = *(undefined8 *)(puVar3 + 0x78);
    uVar7 = uVar7 + 1;
    *(int *)(param_1 + uVar8 * 4 + 0xd0) = iVar2;
    iVar9 = *piVar1;
  }
  if ((uVar7 < 7) && (iVar2 = *(int *)(puVar3 + 0x80), iVar9 != iVar2)) {
    local_68[uVar7] = *(undefined8 *)(puVar3 + 0x88);
    *(int *)(param_1 + (ulong)uVar7 * 4 + 0xd0) = iVar2;
  }
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar10)(puVar10);
    lVar6 = FUN_010aad10();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar10 = puVar10 + -10;
        goto LAB_010bd28c;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_010bd28c:
  FUN_010bd5c0(puVar10,local_68,7);
  FUN_010bc320(param_1,0xf88777581d917ff5,1,0,param_2 & 1,0);
  lVar6 = *(long *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x7c) = 5;
  FUN_016b2d70(*(undefined8 *)(lVar6 + 0x5f0),0);
  FUN_016b2d70(*(undefined8 *)(lVar6 + 0x5f8),0);
  FUN_016b2d70(*(undefined8 *)(lVar6 + 0x600),0);
  FUN_016b2d70(*(undefined8 *)(lVar6 + 0x608),0);
  if (*(int *)(param_1 + 0x80) == 0) {
    lVar6 = *(long *)(param_1 + 0x88);
    FUN_016b2d70(*(undefined8 *)(lVar6 + 0x618),0);
    FUN_016b2eb0(*(undefined8 *)(lVar6 + 0x618));
    FUN_016b2da0(*(undefined8 *)(lVar6 + 0x618),0);
    FUN_010ad950(*(undefined8 *)(param_1 + 0x88),0);
  }
  else {
    FUN_010b2a10(*(undefined8 *)(param_1 + 0x90),0);
    FUN_010b1170(*(undefined8 *)(param_1 + 0x90),0);
  }
  return;
}


