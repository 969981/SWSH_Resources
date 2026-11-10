/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc2d80; name: FUN_00cc2d80
 */


void FUN_00cc2d80(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint local_180;
  undefined4 uStack_17c;
  int local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  long local_38;
  
  if (param_1 != (ulong *)0x0) {
    uVar10 = *param_1;
    *param_1 = uVar10 & 0xfffffffffffffffc;
    puVar5 = PTR_DAT_02710848;
    *param_1 = uVar10 & 0xfffffffffffffff8 | ((ulong)*param_2 & 1) << 2;
    lVar12 = *(long *)(*(long *)puVar5 + 0x78);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    FUN_00c58c20(&local_38,lVar12);
    FUN_00c62ba0(&local_180,local_38);
    uVar7 = FUN_00cbf670(*(undefined8 *)(&DAT_00001588 + CONCAT44(uStack_17c,local_180)));
    uVar6 = FUN_00cbd230(uVar7,*(undefined8 *)(param_2 + 8));
    *param_1 = *param_1 & 0xffffffffffffff07 | (ulong)((uVar6 & 0x1f) << 3);
    if (CONCAT44(uStack_17c,local_180) != 0) {
      (**(code **)(*(long *)(CONCAT44(uStack_17c,local_180) + 0x48) + 0x18))();
      local_180 = 0;
      uStack_17c = 0;
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    uVar11 = param_1[2];
    uVar9 = *param_1;
    uVar2 = param_1[1];
    uVar10 = uVar11 & 0x3ffffffffff | (ulong)(param_2[5] & 0x1f) << 0x2a;
    *param_1 = uVar9;
    param_1[1] = uVar2;
    param_1[2] = uVar11 & 0xffff800000000000 | uVar10;
    bVar3 = param_2[6];
    *param_1 = uVar9;
    param_1[1] = uVar2;
    param_1[2] = uVar11 & 0xfff0000000000000 | uVar10 | (ulong)(bVar3 & 0x1f) << 0x2f;
    lVar12 = *(long *)(*(long *)puVar5 + 0x78);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    FUN_00c58c10(&local_180,lVar12);
    lVar4 = CONCAT44(uStack_17c,local_180);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      local_180 = 0;
      uStack_17c = 0;
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    bVar3 = *param_2;
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x10) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x10);
      uVar9 = FUN_00cc4490(lVar4,bVar3,1,&local_38,&local_180);
      uVar10 = (ulong)(local_178 * 0x100000 + 0x100000U & 0x3ff00000);
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    param_1[1] = param_1[1];
    param_1[2] = param_1[2];
    *param_1 = *param_1 & 0xffffffffc00fffff | uVar10;
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x18) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x18);
      uVar9 = FUN_00cc4490(lVar4,bVar3,2,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 0x20;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    param_1[1] = param_1[1];
    param_1[2] = param_1[2];
    *param_1 = *param_1 & 0xfffffc00ffffffff | uVar10;
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x20) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x20);
      uVar9 = FUN_00cc4490(lVar4,bVar3,3,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 0x2a;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    param_1[1] = param_1[1];
    param_1[2] = param_1[2];
    *param_1 = *param_1 & 0xfff003ffffffffff | uVar10;
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x28) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x28);
      uVar9 = FUN_00cc4490(lVar4,bVar3,4,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 0x34;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    param_1[1] = param_1[1];
    param_1[2] = param_1[2];
    *param_1 = *param_1 & 0xc00fffffffffffff | uVar10;
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x30) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x30);
      uVar9 = FUN_00cc4490(lVar4,bVar3,5,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff);
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1] & 0xfffffffffffffc00 | uVar10;
    param_1[2] = param_1[2];
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x38) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x38);
      uVar9 = FUN_00cc4490(lVar4,bVar3,6,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 10;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1] & 0xfffffffffff003ff | uVar10;
    param_1[2] = param_1[2];
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x40) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x40);
      uVar9 = FUN_00cc4490(lVar4,bVar3,7,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 0x14;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1] & 0xffffffffc00fffff | uVar10;
    param_1[2] = param_1[2];
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x48) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x48);
      uVar9 = FUN_00cc4490(lVar4,bVar3,8,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 0x20;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1] & 0xfffffc00ffffffff | uVar10;
    param_1[2] = param_1[2];
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x50) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x50);
      uVar9 = FUN_00cc4490(lVar4,bVar3,9,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 0x2a;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1] & 0xfff003ffffffffff | uVar10;
    param_1[2] = param_1[2];
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x58) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x58);
      uVar9 = FUN_00cc4490(lVar4,bVar3,10,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 0x34;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1] & 0xc00fffffffffffff | uVar10;
    param_1[2] = param_1[2];
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x60) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x60);
      uVar9 = FUN_00cc4490(lVar4,bVar3,0xb,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff);
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1];
    param_1[2] = param_1[2] & 0xfffffffffffffc00 | uVar10;
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x68) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x68);
      uVar9 = FUN_00cc4490(lVar4,bVar3,0xc,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 10;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1];
    param_1[2] = param_1[2] & 0xfffffffffff003ff | uVar10;
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x70) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x70);
      uVar9 = FUN_00cc4490(lVar4,bVar3,0xd,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 0x14;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1];
    param_1[2] = param_1[2] & 0xffffffffc00fffff | uVar10;
    plVar8 = (long *)FUN_00cbd3c0();
    if (*(long *)(param_2 + 0x78) == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_38 = *(long *)(param_2 + 0x78);
      uVar9 = FUN_00cc4490(lVar4,bVar3,0xe,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 0x3ff) << 0x20;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    *param_1 = *param_1;
    param_1[1] = param_1[1];
    param_1[2] = param_1[2] & 0xfffffc00ffffffff | uVar10;
    plVar8 = (long *)FUN_00cbd3c0();
    local_38 = *(long *)(param_2 + 0x80);
    if (local_38 == *plVar8) {
      uVar10 = 0;
    }
    else {
      local_180 = local_180 & 0xffffff00;
      uStack_17c = 0;
      local_178 = 0x3ff;
      local_148 = 0;
      local_158 = 0;
      uStack_150 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      uVar9 = FUN_00cc4490(lVar4,bVar3,0xf,&local_38,&local_180);
      uVar10 = (ulong)(local_178 + 1U & 3) << 0x1e;
      if ((uVar9 & 1) == 0) {
        uVar10 = 0;
      }
    }
    uVar2 = *param_1;
    uVar11 = param_1[1];
    uVar10 = param_1[2] & 0xffffffff3fffffff | uVar10;
    *param_1 = uVar2;
    param_1[1] = uVar11;
    param_1[2] = uVar10;
    bVar3 = param_2[1];
    param_1[1] = uVar11;
    param_1[2] = uVar10;
    uVar9 = 0xf00;
    if (bVar3 != 0) {
      uVar9 = ((ulong)bVar3 & 0xf) << 8;
    }
    *param_1 = uVar9 | uVar2 & 0xfffffffffffff0ff;
    bVar3 = param_2[2];
    param_1[1] = uVar11;
    param_1[2] = uVar10;
    uVar1 = 0xf000;
    if (bVar3 != 0) {
      uVar1 = ((ulong)bVar3 & 0xf) << 0xc;
    }
    *param_1 = uVar9 | uVar2 & 0xffffffffffff00ff | uVar1;
    bVar3 = param_2[3];
    param_1[2] = uVar10;
    uVar10 = 0xf0000;
    if (bVar3 != 0) {
      uVar10 = ((ulong)bVar3 & 0xf) << 0x10;
    }
    *param_1 = uVar9 | uVar2 & 0xfffffffffff000ff | uVar1 | uVar10;
    param_1[1] = uVar11;
  }
  return;
}


