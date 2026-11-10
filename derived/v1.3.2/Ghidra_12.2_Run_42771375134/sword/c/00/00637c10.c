/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00637c10; name: FUN_00637c10
 */


undefined8 FUN_00637c10(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  void *__dest;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2a8))();
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  (**(code **)PTR_DAT_02714638)(&local_80);
  (**(code **)PTR_DAT_02714640)(&local_80,uVar5);
  local_88 = 2;
  if (*param_2 == 0x39) {
    local_88 = 2;
  }
  else if (*param_2 == 0x2a) {
    local_88 = 4;
  }
  iVar8 = param_2[1];
  iVar2 = param_2[2];
  lVar10 = (long)iVar8;
  if (iVar2 < 1) {
    iVar11 = 0;
    iVar2 = param_2[4];
  }
  else {
    iVar11 = 0;
    if (iVar2 != 0) {
      iVar11 = iVar8 / iVar2;
    }
    iVar2 = param_2[4];
  }
  local_90 = lVar10;
  if (1 < iVar2) {
    local_90 = (long)(iVar2 * iVar8);
  }
  plVar6 = *(long **)(param_2 + 0xe);
  if (plVar6 != (long *)0x0) {
    *(long **)(param_1 + 0x108) = plVar6;
    (**(code **)(*plVar6 + 0x10))();
  }
  uVar7 = FUN_00638780(param_1,&local_90,&local_88,param_2);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  uVar5 = (**(code **)(**(long **)(param_1 + 0x108) + 0x80))();
  (**(code **)PTR_DAT_02714648)(&local_80,uVar5,*(undefined8 *)(param_1 + 0x118),lVar10);
  lVar1 = param_1 + 0xd0;
  cVar4 = (**(code **)PTR_DAT_02714650)(lVar1,&local_80);
  if (cVar4 != '\x01') {
    return 0;
  }
  uVar3 = *(uint *)(*(long *)(param_1 + 0x108) + 0x74);
  if (((uVar3 & 1) == 0) && (*(long *)(param_2 + 0xc) != 0)) {
    __dest = (void *)(**(code **)PTR_DAT_02714658)(lVar1);
    iVar8 = param_2[10];
    if (iVar8 < 1) {
      iVar8 = param_2[1];
    }
    memcpy(__dest,*(void **)(param_2 + 0xc),(long)iVar8);
    if ((uVar3 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_02714660)(lVar1,0,lVar10);
    }
  }
  if (*param_2 == 0x2a) {
    uVar9 = 2;
  }
  else {
    if (*param_2 != 0x39) goto LAB_00637e0c;
    uVar9 = 1;
  }
  *(undefined4 *)(param_1 + 300) = uVar9;
LAB_00637e0c:
  uVar5 = (**(code **)PTR_DAT_02714668)(lVar1);
  *(undefined8 *)(param_1 + 0x100) = uVar5;
  *(undefined1 *)(param_1 + 0x128) = 1;
  *(int *)(param_1 + 0xb8) = *param_2;
  *(int *)(param_1 + 0xbc) = param_2[1];
  *(int *)(param_1 + 0xc0) = param_2[2];
  *(int *)(param_1 + 0xc4) = (int)*(undefined8 *)(param_1 + 0x118);
  *(int *)(param_1 + 200) = iVar11;
  *(int *)(param_1 + 0xcc) = param_2[1];
  *(int *)(param_1 + 0xac) = param_2[7];
  *(int *)(param_1 + 0xb0) = param_2[8];
  *(int *)(param_1 + 0xb4) = param_2[9];
  *(undefined4 *)(param_1 + 0xa4) = 10;
  *(int *)(param_1 + 0xa8) = param_2[6];
  return 1;
}


