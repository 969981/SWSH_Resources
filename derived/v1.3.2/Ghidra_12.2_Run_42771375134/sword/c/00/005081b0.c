/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005081b0; name: FUN_005081b0
 */


void FUN_005081b0(int *param_1,ushort param_2,long param_3,long *param_4)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  ushort *__dest;
  ulong uVar9;
  ulong __n;
  ushort *__src;
  ulong uVar10;
  ushort *local_78;
  uint local_70;
  undefined1 local_68;
  
  uVar4 = param_1[0x1a];
  uVar9 = (ulong)uVar4;
  __dest = (ushort *)0x0;
  uVar10 = 0;
  piVar2 = param_1 + 4;
  *param_1 = 0;
  do {
    if (uVar9 < uVar10 + 2) {
LAB_00508324:
      param_1[1] = 0x2e;
      param_1[3] = (int)uVar10;
      if (**(long **)(param_1 + 0xc) != 0) {
        FUN_00506af0(piVar2);
      }
      goto joined_r0x00508344;
    }
    iVar6 = param_1[0x1b];
    if (__dest != (ushort *)0x0) {
      FUN_00404870(*(undefined4 *)PTR_DAT_02712e28,__dest);
    }
    __src = (ushort *)(param_3 + uVar10) + 1;
    uVar5 = *(ushort *)(param_3 + uVar10);
    __n = (ulong)uVar5;
    if (param_2 < uVar5) {
LAB_0050837c:
      param_1[0] = 0;
      param_1[1] = 2;
      return;
    }
    if ((param_1[2] == 4) || (uVar3 = uVar10 + 2 + __n, uVar9 < uVar3)) {
      __dest = (ushort *)0x0;
      goto LAB_00508324;
    }
    if (uVar9 < uVar3 + 8) {
      __dest = (ushort *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28,__n + 8);
      if (__dest == (ushort *)0x0) goto LAB_0050837c;
      memcpy(__dest,__src,__n);
      local_78 = __dest;
    }
    else {
      __dest = (ushort *)0x0;
      local_78 = __src;
    }
    local_70 = (uint)uVar5;
    uVar1 = (int)uVar10 + local_70 + 2;
    uVar10 = (ulong)uVar1;
    local_68 = (char)iVar6 != '\0' && uVar1 == uVar4;
    if ((bool)local_68) {
      param_1[2] = 4;
    }
    FUN_005068a0(piVar2,&local_78);
    iVar6 = param_1[0x11] - param_1[0x10];
  } while (iVar6 == 0);
  param_1[3] = uVar1;
  lVar7 = FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,
                       -(ulong)((uint)(param_1[8] * iVar6) >> 0x1f) & 0xfffffffc00000000 |
                       (ulong)(uint)(param_1[8] * iVar6) << 2,0x10);
  *param_4 = lVar7;
  if (lVar7 == 0) {
    param_1[1] = 2;
    param_1[0x19] = 0;
  }
  else {
    uVar4 = param_1[0x18];
    if ((uVar4 >> 0xf & 1) == 0) {
      iVar8 = param_1[8] + 1;
    }
    else {
      iVar8 = (uVar4 >> 0xe & 1) + (uVar4 >> 0xd & 1) + (uVar4 >> 0xc & 1);
    }
    FUN_00506610(piVar2,lVar7,iVar6,iVar8);
    param_1[0x19] = iVar6;
    *param_1 = iVar6;
    if (param_1[2] == 4) {
      iVar6 = FUN_00506610(piVar2,0,0,0);
      if (iVar6 == 0) {
        param_1[1] = 0x11;
        goto joined_r0x00508344;
      }
      iVar6 = *param_1;
    }
    iVar8 = 0x2d;
    if (iVar6 == 0) {
      iVar8 = 0x2e;
    }
    param_1[1] = iVar8;
  }
joined_r0x00508344:
  if (__dest != (ushort *)0x0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28,__dest);
  }
  return;
}


