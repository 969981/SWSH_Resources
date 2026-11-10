/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006379e0; name: FUN_006379e0
 */


undefined8 FUN_006379e0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  void *__dest;
  size_t __n;
  int iVar9;
  long local_98 [9];
  size_t local_48;
  
  uVar6 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2a8))();
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  (**(code **)PTR_DAT_02714638)(local_98 + 1);
  (**(code **)PTR_DAT_02714640)(local_98 + 1,uVar6);
  iVar2 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 8);
  local_98[0] = (long)iVar3;
  __n = (size_t)iVar2;
  if (iVar3 < 1) {
    iVar9 = 0;
    iVar3 = *(int *)(param_2 + 0x10);
  }
  else {
    iVar9 = 0;
    if (iVar3 != 0) {
      iVar9 = iVar2 / iVar3;
    }
    iVar3 = *(int *)(param_2 + 0x10);
  }
  local_48 = __n;
  if (1 < iVar3) {
    local_48 = (size_t)(iVar3 * iVar2);
  }
  plVar7 = *(long **)(param_2 + 0x38);
  if (plVar7 != (long *)0x0) {
    *(long **)(param_1 + 0x108) = plVar7;
    (**(code **)(*plVar7 + 0x10))();
  }
  uVar8 = FUN_00638780(param_1,&local_48,local_98,param_2);
  if ((uVar8 & 1) != 0) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x108) + 0x80))();
    (**(code **)PTR_DAT_02714648)(local_98 + 1,uVar6,*(undefined8 *)(param_1 + 0x118),__n);
    lVar1 = param_1 + 0xd0;
    cVar5 = (**(code **)PTR_DAT_02714650)(lVar1,local_98 + 1);
    if (cVar5 == '\x01') {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x108) + 0x74);
      if (((uVar4 & 1) == 0) && (*(long *)(param_2 + 0x30) != 0)) {
        __dest = (void *)(**(code **)PTR_DAT_02714658)(lVar1);
        memcpy(__dest,*(void **)(param_2 + 0x30),__n);
        if ((uVar4 >> 2 & 1) != 0) {
          (**(code **)PTR_DAT_02714660)(lVar1,0,__n);
        }
      }
      uVar6 = (**(code **)PTR_DAT_02714668)(lVar1);
      *(undefined8 *)(param_1 + 0x100) = uVar6;
      *(undefined1 *)(param_1 + 0x128) = 1;
      *(int *)(param_1 + 0xbc) = iVar2;
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 8);
      *(int *)(param_1 + 0xc4) = (int)*(undefined8 *)(param_1 + 0x118);
      *(int *)(param_1 + 200) = iVar9;
      *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_1 + 0xa4) = 10;
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0x18);
      return 1;
    }
  }
  return 0;
}


