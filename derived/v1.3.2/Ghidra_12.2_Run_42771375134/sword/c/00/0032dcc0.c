/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0032dcc0; name: FUN_0032dcc0
 */


void FUN_0032dcc0(ulong *param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 auStack_1e8 [48];
  undefined1 auStack_1b8 [64];
  undefined1 auStack_178 [48];
  undefined4 local_148 [2];
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  ulong local_e8;
  ulong uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  ulong local_c8;
  ulong uStack_c0;
  undefined8 *local_b8;
  char *local_b0;
  ulong local_a8;
  undefined8 local_a0;
  char *local_98;
  char *local_90;
  undefined8 *local_88;
  ulong uStack_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char *local_60;
  undefined1 local_58;
  undefined1 auStack_57 [7];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  
  uVar8 = (**(code **)(*(long *)param_1[2] + 0x38))();
  uVar6 = local_34;
  uVar7 = uStack_3c;
  uVar11 = local_40;
  local_40 = (uint)unaff_x24;
  uStack_3c = (undefined4)((ulong)unaff_x24 >> 0x20);
  uStack_38 = (undefined4)unaff_x23;
  local_34 = (uint)((ulong)unaff_x23 >> 0x20);
  switch(uVar8) {
  case 0:
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    uVar11 = *puVar10;
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    local_98 = "Geometry";
    local_90 = (char *)((ulong)local_90 & 0xffffffffffffff00);
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = local_90;
      *puVar14 = "Geometry";
      *puVar10 = *puVar10 + 1;
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    else {
      FUN_00327960(uVar9,&local_98);
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    local_98 = "PxSphereGeometry";
    local_90 = (char *)((ulong)local_90 & 0xffffffffffffff00);
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = local_90;
      *puVar14 = "PxSphereGeometry";
      *puVar10 = *puVar10 + 1;
    }
    else {
      FUN_00327960(uVar9,&local_98);
    }
    local_a0 = 0;
    FUN_00217dd0(param_2,param_1[2],&local_a0);
    FUN_00217550(&uStack_c0);
    pcVar1 = (char *)*param_1;
    pcVar3 = (char *)param_1[1];
    uVar9 = param_1[3];
    uVar2 = param_1[4];
    FUN_00217550(&local_60);
    local_68 = 0;
    uStack_70 = 0;
    local_98 = pcVar1;
    local_90 = pcVar3;
    local_88 = &local_a0;
    uStack_80 = uVar9;
    local_78 = uVar2;
    FUN_0032ef80(&local_98,&local_60,0);
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    if (*puVar10 != 0) {
      uVar11 = *puVar10 - 1;
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
        (**(code **)(*(long *)param_1[1] + 0x28))();
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10 - 1;
      }
      *(uint *)(uVar9 + 0x10) = uVar11;
      if (uVar11 != 0) {
        uVar11 = uVar11 - 1;
        if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
          (**(code **)(*(long *)param_1[1] + 0x28))();
          puVar10 = (uint *)(*param_1 + 0x10);
          uVar11 = *puVar10 - 1;
        }
        *puVar10 = uVar11;
      }
    }
    return;
  case 1:
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    uVar12 = *puVar10;
    local_40 = uVar11;
    uStack_3c = uVar7;
    local_34 = uVar6;
    if (uVar12 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar12 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar12 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar12 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar12 - 1) * 0x10 + 8) = 1;
      }
    }
    uVar11 = local_40;
    local_40 = local_40 & 0xffffff00;
    if (uVar12 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar12 * 0x10);
      puVar14[1] = CONCAT44(uStack_3c,uVar11) & 0xffffffffffffff00;
      *puVar14 = "Geometry";
      *puVar10 = *puVar10 + 1;
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    else {
      FUN_00327960(uVar9,auStack_57 + 0xf);
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    uVar6 = local_40;
    local_40 = local_40 & 0xffffff00;
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = CONCAT44(uStack_3c,uVar6) & 0xffffffffffffff00;
      *puVar14 = "PxPlaneGeometry";
      *puVar10 = *puVar10 + 1;
    }
    else {
      FUN_00327960(uVar9,auStack_57 + 0xf);
    }
    FUN_00217e10(param_2,param_1[2],auStack_57 + 0xf);
    FUN_002175a0(auStack_57 + 7);
    puVar14 = (undefined8 *)param_1[3];
    plVar13 = (long *)param_1[1];
    local_34 = local_34 & 0xffffff00;
    (**(code **)*puVar14)(puVar14,&local_34,1);
    (**(code **)(*plVar13 + 0x10))(plVar13,"PxPlaneGeometry",puVar14[4]);
    puVar14[3] = 0;
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    if (*puVar10 != 0) {
      uVar11 = *puVar10 - 1;
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
        (**(code **)(*(long *)param_1[1] + 0x28))();
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10 - 1;
      }
      *(uint *)(uVar9 + 0x10) = uVar11;
      if (uVar11 != 0) {
        uVar11 = uVar11 - 1;
        if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
          (**(code **)(*(long *)param_1[1] + 0x28))();
          puVar10 = (uint *)(*param_1 + 0x10);
          uVar11 = *puVar10 - 1;
        }
        *puVar10 = uVar11;
      }
    }
    return;
  case 2:
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    uVar11 = *puVar10;
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    local_90 = "Geometry";
    local_88 = (undefined8 *)((ulong)local_88 & 0xffffffffffffff00);
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = local_88;
      *puVar14 = "Geometry";
      *puVar10 = *puVar10 + 1;
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    else {
      FUN_00327960(uVar9,&local_90);
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    local_90 = "PxCapsuleGeometry";
    local_88 = (undefined8 *)((ulong)local_88 & 0xffffffffffffff00);
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = local_88;
      *puVar14 = "PxCapsuleGeometry";
      *puVar10 = *puVar10 + 1;
    }
    else {
      FUN_00327960(uVar9,&local_90);
    }
    local_d8._0_4_ = 2;
    local_d8._4_4_ = 0;
    local_d0 = 0;
    FUN_00217df0(param_2,param_1[2],&local_d8);
    FUN_00217220(&local_118);
    uVar9 = *param_1;
    uVar2 = param_1[1];
    pcVar1 = (char *)param_1[3];
    uVar4 = param_1[4];
    FUN_00217220(&local_90);
    local_98 = (char *)0x0;
    local_a0 = 0;
    local_c8 = uVar9;
    uStack_c0 = uVar2;
    local_b8 = &local_d8;
    local_b0 = pcVar1;
    local_a8 = uVar4;
    FUN_0032f200(&local_c8,&local_90,0);
    FUN_0032f380(&local_c8,&uStack_70,1);
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    if (*puVar10 != 0) {
      uVar11 = *puVar10 - 1;
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
        (**(code **)(*(long *)param_1[1] + 0x28))();
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10 - 1;
      }
      *(uint *)(uVar9 + 0x10) = uVar11;
      if (uVar11 != 0) {
        uVar11 = uVar11 - 1;
        if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
          (**(code **)(*(long *)param_1[1] + 0x28))();
          puVar10 = (uint *)(*param_1 + 0x10);
          uVar11 = *puVar10 - 1;
        }
        *puVar10 = uVar11;
      }
    }
    return;
  case 3:
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    uVar11 = *puVar10;
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    local_60 = "Geometry";
    local_58 = 0;
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = (ulong)(uint7)auStack_57 << 8;
      *puVar14 = "Geometry";
      *puVar10 = *puVar10 + 1;
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    else {
      FUN_00327960(uVar9,&local_60);
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    local_60 = "PxBoxGeometry";
    local_58 = 0;
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = (ulong)(uint7)auStack_57 << 8;
      *puVar14 = "PxBoxGeometry";
      *puVar10 = *puVar10 + 1;
    }
    else {
      FUN_00327960(uVar9,&local_60);
    }
    local_40 = 3;
    uStack_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
    FUN_00217db0(param_2,param_1[2],&local_40);
    FUN_002171b0(&local_60);
    FUN_0032f710(*param_1,&local_40,param_1[1],param_1[3],param_1[4]);
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    if (*puVar10 != 0) {
      uVar11 = *puVar10 - 1;
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
        (**(code **)(*(long *)param_1[1] + 0x28))();
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10 - 1;
      }
      *(uint *)(uVar9 + 0x10) = uVar11;
      if (uVar11 != 0) {
        uVar11 = uVar11 - 1;
        if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
          (**(code **)(*(long *)param_1[1] + 0x28))();
          puVar10 = (uint *)(*param_1 + 0x10);
          uVar11 = *puVar10 - 1;
        }
        *puVar10 = uVar11;
      }
    }
    return;
  case 4:
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    uVar11 = *puVar10;
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    local_d0 = 0x1cd95e9;
    uStack_cc = 0;
    local_c8 = local_c8 & 0xffffffffffffff00;
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = local_c8;
      *puVar14 = "Geometry";
      *puVar10 = *puVar10 + 1;
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    else {
      FUN_00327960(uVar9,&local_d0);
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    local_d0 = 0x1ceab83;
    uStack_cc = 0;
    local_c8 = local_c8 & 0xffffffffffffff00;
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = local_c8;
      *puVar14 = "PxConvexMeshGeometry";
      *puVar10 = *puVar10 + 1;
    }
    else {
      FUN_00327960(uVar9,&local_d0);
    }
    local_138 = 4;
    uStack_134 = 0x3f800000;
    local_130 = 0x3f800000;
    uStack_12c = 0x3f800000;
    local_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    local_11c = 0x3f800000;
    local_118._0_4_ = 0;
    local_118._4_4_ = 0;
    uStack_110 = 0x7f7fc99e;
    uStack_10c = 0;
    FUN_00217e30(param_2,param_1[2],&local_138);
    FUN_002173c0(auStack_1b8);
    uVar9 = *param_1;
    uVar2 = param_1[1];
    pcVar1 = (char *)param_1[3];
    uVar4 = param_1[4];
    FUN_002173c0(&local_d0);
    local_108 = (undefined4)uVar9;
    uStack_104 = (undefined4)(uVar9 >> 0x20);
    uStack_100 = (undefined4)uVar2;
    uStack_fc = (undefined4)(uVar2 >> 0x20);
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    uStack_e0 = 0;
    local_f0 = pcVar1;
    local_e8 = uVar4;
    local_f8 = &local_138;
    FUN_0032f8c0(&local_d0,&local_108,0);
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    if (*puVar10 != 0) {
      uVar11 = *puVar10 - 1;
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
        (**(code **)(*(long *)param_1[1] + 0x28))();
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10 - 1;
      }
      *(uint *)(uVar9 + 0x10) = uVar11;
      if (uVar11 != 0) {
        uVar11 = uVar11 - 1;
        if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
          (**(code **)(*(long *)param_1[1] + 0x28))();
          puVar10 = (uint *)(*param_1 + 0x10);
          uVar11 = *puVar10 - 1;
        }
        *puVar10 = uVar11;
      }
    }
    return;
  case 5:
    break;
  case 6:
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    uVar11 = *puVar10;
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    local_f0 = "Geometry";
    local_e8 = local_e8 & 0xffffffffffffff00;
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = local_e8;
      *puVar14 = "Geometry";
      *puVar10 = *puVar10 + 1;
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    else {
      FUN_00327960(uVar9,&local_f0);
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
    }
    if (uVar11 != 0) {
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
        (**(code **)(*(long *)param_1[1] + 0x20))
                  ((long *)param_1[1],
                   *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10;
        *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
      }
    }
    local_f0 = "PxHeightFieldGeometry";
    local_e8 = local_e8 & 0xffffffffffffff00;
    if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
      puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
      puVar14[1] = local_e8;
      *puVar14 = "PxHeightFieldGeometry";
      *puVar10 = *puVar10 + 1;
    }
    else {
      FUN_00327960(uVar9,&local_f0);
    }
    local_148[0] = 6;
    local_140 = 0;
    local_138 = 0x3f800000;
    uStack_134 = 0x3f800000;
    local_130 = 0x3f800000;
    uStack_12c = 0;
    FUN_00217e70(param_2,param_1[2],local_148);
    FUN_002176f0(auStack_1e8);
    uVar9 = *param_1;
    uVar4 = param_1[1];
    uVar2 = param_1[3];
    uVar5 = param_1[4];
    FUN_002176f0(&local_f0);
    local_128 = (undefined4)uVar9;
    uStack_124 = (undefined4)(uVar9 >> 0x20);
    uStack_120 = (undefined4)uVar4;
    local_11c = (undefined4)(uVar4 >> 0x20);
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    uStack_110 = (undefined4)uVar2;
    uStack_10c = (undefined4)(uVar2 >> 0x20);
    local_108 = (undefined4)uVar5;
    uStack_104 = (undefined4)(uVar5 >> 0x20);
    uStack_100 = 0;
    uStack_fc = 0;
    local_118 = local_148;
    FUN_00330cf0(&local_f0,&local_128,0);
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    if (*puVar10 != 0) {
      uVar11 = *puVar10 - 1;
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
        (**(code **)(*(long *)param_1[1] + 0x28))();
        uVar9 = *param_1;
        puVar10 = (uint *)(uVar9 + 0x10);
        uVar11 = *puVar10 - 1;
      }
      *(uint *)(uVar9 + 0x10) = uVar11;
      if (uVar11 != 0) {
        uVar11 = uVar11 - 1;
        if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
          (**(code **)(*(long *)param_1[1] + 0x28))();
          puVar10 = (uint *)(*param_1 + 0x10);
          uVar11 = *puVar10 - 1;
        }
        *puVar10 = uVar11;
      }
    }
    return;
  default:
    return;
  }
  uVar9 = *param_1;
  puVar10 = (uint *)(uVar9 + 0x10);
  uVar11 = *puVar10;
  if (uVar11 != 0) {
    if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
      *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
    }
  }
  local_b0 = "Geometry";
  local_a8 = local_a8 & 0xffffffffffffff00;
  if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
    puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
    puVar14[1] = local_a8;
    *puVar14 = "Geometry";
    *puVar10 = *puVar10 + 1;
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    uVar11 = *puVar10;
  }
  else {
    FUN_00327960(uVar9,&local_b0);
    uVar9 = *param_1;
    puVar10 = (uint *)(uVar9 + 0x10);
    uVar11 = *puVar10;
  }
  if (uVar11 != 0) {
    if (*(char *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) == '\0') {
      (**(code **)(*(long *)param_1[1] + 0x20))
                ((long *)param_1[1],
                 *(undefined8 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10));
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10;
      *(undefined1 *)(*(long *)(uVar9 + 8) + (ulong)(uVar11 - 1) * 0x10 + 8) = 1;
    }
  }
  local_b0 = "PxTriangleMeshGeometry";
  local_a8 = local_a8 & 0xffffffffffffff00;
  if (uVar11 < (*(uint *)(uVar9 + 0x14) & 0x7fffffff)) {
    puVar14 = (undefined8 *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10);
    puVar14[1] = local_a8;
    *puVar14 = "PxTriangleMeshGeometry";
    *puVar10 = *puVar10 + 1;
  }
  else {
    FUN_00327960(uVar9,&local_b0);
  }
  local_118._0_4_ = 5;
  local_118._4_4_ = 0x3f800000;
  uStack_110 = 0x3f800000;
  uStack_10c = 0x3f800000;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3f800000;
  local_f8._0_4_ = 0;
  local_f0 = (char *)0x0;
  FUN_00217e50(param_2,param_1[2],&local_118);
  FUN_002175b0(auStack_178);
  uVar9 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  FUN_002175b0(&local_b0);
  local_b8 = (undefined8 *)0x0;
  local_d0 = (undefined4)uVar2;
  uStack_cc = (undefined4)(uVar2 >> 0x20);
  uStack_c0 = 0;
  local_e8 = uVar9;
  uStack_e0 = uVar4;
  local_c8 = uVar5;
  local_d8 = &local_118;
  FUN_003305e0(&local_b0,&local_e8,0);
  uVar9 = *param_1;
  puVar10 = (uint *)(uVar9 + 0x10);
  if (*puVar10 != 0) {
    uVar11 = *puVar10 - 1;
    if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
      (**(code **)(*(long *)param_1[1] + 0x28))();
      uVar9 = *param_1;
      puVar10 = (uint *)(uVar9 + 0x10);
      uVar11 = *puVar10 - 1;
    }
    *(uint *)(uVar9 + 0x10) = uVar11;
    if (uVar11 != 0) {
      uVar11 = uVar11 - 1;
      if (*(char *)(*(long *)(uVar9 + 8) + (ulong)uVar11 * 0x10 + 8) != '\0') {
        (**(code **)(*(long *)param_1[1] + 0x28))();
        puVar10 = (uint *)(*param_1 + 0x10);
        uVar11 = *puVar10 - 1;
      }
      *puVar10 = uVar11;
    }
  }
  return;
}


