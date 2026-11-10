/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00638140; name: FUN_00638140
 */


undefined8 FUN_00638140(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  void *__dest;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
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
  uVar6 = param_2[7];
  uVar7 = 8;
  if ((uVar6 >> 2 & 1) != 0) {
    (**(code **)PTR_DAT_02713a38)(uVar4,4,&local_48);
    if ((int)(uint)local_48 < 9) {
      local_48._0_4_ = 8;
    }
    uVar6 = param_2[7];
    uVar7 = (uint)local_48;
  }
  if ((uVar6 & 0x8000) != 0 && uVar7 < 0x21) {
    uVar7 = 0x20;
  }
  if (uVar7 < 0x81 && (uVar6 & 8) != 0) {
    uVar7 = 0x80;
  }
  if (uVar7 < 0x201 && (uVar6 & 0x4020) != 0) {
    uVar7 = 0x200;
  }
  iVar2 = param_2[1];
  iVar9 = param_2[2];
  if (iVar9 < 1) {
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    if (iVar9 != 0) {
      iVar8 = iVar2 / iVar9;
    }
  }
  iVar9 = iVar2;
  if (1 < (int)param_2[4]) {
    iVar9 = param_2[4] * iVar2;
  }
  local_48 = (long)iVar9;
  if (*(long **)(param_2 + 0xe) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0xe) + 0x10))();
  }
  if (*(long **)(param_1 + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x108) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0xe);
  local_98[0] = (ulong)uVar7;
  uVar5 = FUN_00638780(param_1,&local_48,local_98,param_2);
  if ((uVar5 & 1) != 0) {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x108) + 0x80))();
    (**(code **)PTR_DAT_02714648)
              (local_98 + 1,uVar4,*(undefined8 *)(param_1 + 0x120),
               (long)(int)((uVar7 - 1) + iVar9 & -uVar7));
    lVar1 = param_1 + 0xd0;
    cVar3 = (**(code **)PTR_DAT_02714650)(lVar1,local_98 + 1);
    if (cVar3 == '\x01') {
      uVar4 = (**(code **)PTR_DAT_02714668)(lVar1);
      *(undefined8 *)(param_1 + 0x100) = uVar4;
      if (((*(uint *)(*(long *)(param_1 + 0x108) + 0x74) & 1) == 0) &&
         (*(long *)(param_2 + 0xc) != 0)) {
        __dest = (void *)(**(code **)PTR_DAT_02714658)(lVar1);
        memcpy(__dest,*(void **)(param_2 + 0xc),(long)(int)param_2[1]);
      }
      *(undefined1 *)(param_1 + 0x128) = 1;
      *(undefined4 *)(param_1 + 0xb8) = *param_2;
      *(uint *)(param_1 + 0xbc) = (uVar7 - 1) + iVar2 & -uVar7;
      *(undefined4 *)(param_1 + 0xc0) = param_2[2];
      *(int *)(param_1 + 0xc4) = (int)*(undefined8 *)(param_1 + 0x118);
      *(int *)(param_1 + 200) = iVar8;
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


