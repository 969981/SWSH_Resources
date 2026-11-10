/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00637ea0; name: FUN_00637ea0
 */


undefined8 FUN_00637ea0(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  void *__dest;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong local_98 [9];
  long local_48;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 0x20) + 0x2a8))();
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  (**(code **)PTR_DAT_02714638)(local_98 + 1);
  (**(code **)PTR_DAT_02714640)(local_98 + 1,uVar4);
  uVar7 = param_2[7];
  uVar8 = 8;
  if ((uVar7 >> 2 & 1) != 0) {
    (**(code **)PTR_DAT_02713a38)(uVar4,4,&local_48);
    if ((int)(uint)local_48 < 9) {
      local_48._0_4_ = 8;
    }
    uVar7 = param_2[7];
    uVar8 = (uint)local_48;
  }
  if ((uVar7 & 0x8000) != 0 && uVar8 < 0x21) {
    uVar8 = 0x20;
  }
  if (uVar8 < 0x201 && (uVar7 & 0x4028) != 0) {
    uVar8 = 0x200;
  }
  iVar2 = param_2[1];
  iVar10 = param_2[2];
  if (iVar10 < 1) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    if (iVar10 != 0) {
      iVar9 = iVar2 / iVar10;
    }
  }
  iVar10 = iVar2;
  if (1 < (int)param_2[4]) {
    iVar10 = param_2[4] * iVar2;
  }
  local_48 = (long)iVar10;
  plVar5 = *(long **)(param_2 + 0xe);
  if (plVar5 != (long *)0x0) {
    *(long **)(param_1 + 0x108) = plVar5;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_98[0] = (ulong)uVar8;
  uVar6 = FUN_00638780(param_1,&local_48,local_98,param_2);
  if ((uVar6 & 1) != 0) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x108) + 0x80))();
    (**(code **)PTR_DAT_02714648)
              (local_98 + 1,uVar4,*(undefined8 *)(param_1 + 0x118),
               (long)(int)((uVar8 - 1) + iVar10 & -uVar8));
    lVar1 = param_1 + 0xd0;
    cVar3 = (**(code **)PTR_DAT_02714650)(lVar1,local_98 + 1);
    if (cVar3 == '\x01') {
      uVar4 = (**(code **)PTR_DAT_02714668)(lVar1);
      *(undefined8 *)(param_1 + 0x100) = uVar4;
      uVar7 = *(uint *)(*(long *)(param_1 + 0x108) + 0x74);
      if (((uVar7 & 1) == 0) && (*(long *)(param_2 + 0xc) != 0)) {
        __dest = (void *)(**(code **)PTR_DAT_02714658)(lVar1);
        memcpy(__dest,*(void **)(param_2 + 0xc),(long)(int)param_2[1]);
        if ((uVar7 >> 2 & 1) != 0) {
          (**(code **)PTR_DAT_02714660)(lVar1,0,(long)(int)param_2[1]);
        }
      }
      *(undefined1 *)(param_1 + 0x128) = 1;
      *(undefined4 *)(param_1 + 0xb8) = *param_2;
      *(uint *)(param_1 + 0xbc) = (uVar8 - 1) + iVar2 & -uVar8;
      *(undefined4 *)(param_1 + 0xc0) = param_2[2];
      *(int *)(param_1 + 0xc4) = (int)*(undefined8 *)(param_1 + 0x118);
      *(int *)(param_1 + 200) = iVar9;
      *(undefined4 *)(param_1 + 0xcc) = param_2[4];
      *(undefined4 *)(param_1 + 0xac) = param_2[7];
      *(undefined4 *)(param_1 + 0xb0) = param_2[8];
      *(undefined4 *)(param_1 + 0xb4) = param_2[9];
      *(undefined4 *)(param_1 + 0xa4) = 10;
      *(undefined4 *)(param_1 + 0xa8) = param_2[6];
      return 1;
    }
  }
  return 0;
}


