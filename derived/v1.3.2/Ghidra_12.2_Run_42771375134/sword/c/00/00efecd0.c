/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00efecd0; name: FUN_00efecd0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00efecd0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  ulong local_c8;
  ulong *puStack_c0;
  undefined8 local_b8;
  long local_b0;
  ulong local_a8 [4];
  undefined1 auStack_88 [8];
  char *local_80;
  long local_70;
  undefined8 local_68;
  
  plVar22 = (long *)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar18 = (long *)*plVar22;
  puVar14 = (undefined8 *)(*(long *)PTR_DAT_027194d8 + 0xb8);
  plVar20 = (long *)*puVar14;
joined_r0x00efed0c:
  if (plVar18 == plVar20) {
    return 0;
  }
  lVar16 = *plVar18;
  puVar17 = (undefined8 *)(lVar16 + 0x50);
  plVar6 = (long *)(**(code **)*puVar17)(puVar17);
  lVar7 = FUN_015bed20();
  while( true ) {
    if (plVar6 == (long *)0x0) goto LAB_00efed5c;
    if (plVar6 == (long *)lVar7) break;
    plVar6 = (long *)*plVar6;
  }
  uVar8 = (**(code **)(*(long *)*plVar18 + 0x88))();
  if ((uVar8 & 1) != 0) goto LAB_00efed5c;
  local_68 = *(undefined8 *)(lVar16 + 0x3a0);
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar7 + 0x688) == 0) {
    puVar9 = (ulong *)FUN_01028290();
    local_a8[0] = *puVar9;
    if (local_a8[0] != 0) {
      (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(local_a8,*(long *)(lVar7 + 0x688),&local_68);
  }
  FUN_006cf0c0(auStack_88,local_a8);
  if (local_a8[0] != 0) {
    (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x18))();
    local_a8[0] = 0;
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  puVar2 = PTR_DAT_0271ed68;
  *(undefined4 *)(param_1 + 0x214) = 0;
  puVar3 = PTR_DAT_0271ed70;
  uVar8 = 0;
LAB_00efee70:
  uVar21 = 0xcbf29ce484222645;
  snprintf((char *)local_a8,0x20,"%s%02d","HealPoke_",(int)uVar8);
  if ((byte)local_a8[0] != 0) {
    pbVar12 = (byte *)((ulong)local_a8 | 1);
    bVar1 = (byte)local_a8[0];
    do {
      uVar21 = (uVar21 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar1 != 0);
  }
  plVar20 = (long *)*puVar14;
  for (plVar18 = (long *)*plVar22; plVar18 != plVar20; plVar18 = plVar18 + 1) {
    lVar7 = *plVar18;
    plVar6 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50));
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
      if (((*PTR_DAT_0271ed78 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar4 != 0)) {
        if (((*PTR_DAT_0271ed88 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_0271ed88), iVar4 != 0)) {
          uVar15 = FUN_0156b190();
          *(undefined8 *)PTR_DAT_0271ed90 = uVar15;
          __cxa_guard_release(PTR_DAT_0271ed88);
        }
        *(undefined **)PTR_DAT_0271ed80 = PTR_DAT_0271ed90;
        __cxa_guard_release(PTR_DAT_0271ed78);
      }
      *(undefined **)puVar3 = PTR_DAT_0271ed80;
      __cxa_guard_release(puVar2);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)puVar3) {
        if ((*(ulong *)(lVar7 + 0x1a0) == uVar21) &&
           (uVar10 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar10 & 1) == 0)) {
          *(long *)(param_1 + uVar8 * 8 + 0x198) = lVar7;
          uVar8 = uVar8 + 1;
          *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
          if (uVar8 < 6) goto LAB_00efee70;
          goto LAB_00eff048;
        }
        break;
      }
    }
  }
LAB_00eff048:
  if (*(long *)(param_1 + 0x198) != 0) {
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Monbo_",1);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x108) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Monbo_",2);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x110) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Monbo_",3);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x118) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Monbo_",4);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x120) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Monbo_",5);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x128) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Monbo_",6);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x130) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_BallFlash_",1);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x138) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_BallFlash_",2);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x140) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_BallFlash_",3);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x148) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_BallFlash_",4);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x150) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_BallFlash_",5);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar20 = (long *)*puVar14;
    plVar18 = (long *)*plVar22;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x158) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_BallFlash_",6);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar20 = (long *)*puVar14;
    plVar18 = (long *)*plVar22;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x160) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Ring_",1);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar20 = (long *)*puVar14;
    plVar18 = (long *)*plVar22;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x168) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Ring_",2);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar20 = (long *)*puVar14;
    plVar18 = (long *)*plVar22;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x170) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Ring_",3);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar20 = (long *)*puVar14;
    plVar18 = (long *)*plVar22;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x178) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Ring_",4);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar20 = (long *)*puVar14;
    plVar18 = (long *)*plVar22;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x180) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Ring_",5);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar20 = (long *)*puVar14;
    plVar18 = (long *)*plVar22;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x188) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s%02d",local_80,"_Ring_",6);
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar20 = (long *)*puVar14;
    plVar18 = (long *)*plVar22;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 400) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s",local_80,"_PcRecovery");
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar20 = (long *)*puVar14;
    plVar18 = (long *)*plVar22;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x1c8) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s",local_80,"_PcRecoveryText");
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar20 = (long *)*puVar14;
    plVar18 = (long *)*plVar22;
    while( true ) {
      if (plVar18 == plVar20) goto LAB_00eff0f0;
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) break;
      plVar18 = plVar18 + 1;
    }
    *(long *)(param_1 + 0x1d0) = lVar7;
    snprintf((char *)local_a8,0x20,"%s%s",local_80,"_BirthDay");
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_a8[0] != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)local_a8 | 1);
      bVar1 = (byte)local_a8[0];
      do {
        uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    plVar18 = (long *)*plVar22;
    plVar20 = (long *)*puVar14;
    for (; plVar18 != plVar20; plVar18 = plVar18 + 1) {
      lVar7 = *plVar18;
      uVar21 = FUN_015bec30(lVar7 + 0x50);
      if ((((uVar21 & 1) != 0) && (*(ulong *)(lVar7 + 0x1a0) == uVar8)) &&
         (uVar21 = (**(code **)(*(long *)*plVar18 + 0x88))(), (uVar21 & 1) == 0)) {
        *(long *)(param_1 + 0x1d8) = lVar7;
        snprintf((char *)local_a8,0x20,"%s%s",local_80,"_PCLADY");
        puVar3 = PTR_DAT_0271fdc8;
        puVar2 = PTR_DAT_0271fdc0;
        uVar8 = 0xcbf29ce484222645;
        if ((byte)local_a8[0] != 0) {
          uVar8 = 0xcbf29ce484222645;
          pbVar12 = (byte *)((ulong)local_a8 | 1);
          bVar1 = (byte)local_a8[0];
          do {
            uVar8 = (uVar8 ^ bVar1) * 0x100000001b3;
            bVar1 = *pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (bVar1 != 0);
        }
        plVar18 = (long *)*puVar14;
        for (plVar22 = (long *)*plVar22; plVar22 != plVar18; plVar22 = plVar22 + 1) {
          lVar7 = *plVar22;
          plVar20 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50))
          ;
          if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
            if (((*PTR_DAT_0271ed78 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar4 != 0)) {
              if (((*PTR_DAT_0271ed88 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_0271ed88), iVar4 != 0)) {
                uVar15 = FUN_0156b190();
                *(undefined8 *)PTR_DAT_0271ed90 = uVar15;
                __cxa_guard_release(PTR_DAT_0271ed88);
              }
              *(undefined **)PTR_DAT_0271ed80 = PTR_DAT_0271ed90;
              __cxa_guard_release(PTR_DAT_0271ed78);
            }
            *(undefined **)puVar3 = PTR_DAT_0271ed80;
            __cxa_guard_release(puVar2);
          }
          for (; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
            if (plVar20 == (long *)puVar3) {
              if ((*(ulong *)(lVar7 + 0x1a0) == uVar8) &&
                 (uVar21 = (**(code **)(*(long *)*plVar22 + 0x88))(), (uVar21 & 1) == 0)) {
                *(long *)(param_1 + 0x1e0) = lVar7;
                lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
                if (lVar7 != 0) {
                  (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                }
                plVar18 = *(long **)(lVar7 + 0x58);
                if (plVar18 != (long *)0x0) {
                  plVar22 = plVar18 + 9;
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                  (**(code **)(*plVar22 + 0x18))(plVar22);
                }
                iVar4 = FUN_00884820(plVar18);
                if (iVar4 != 0) {
                  iVar19 = 0;
                  iVar13 = 0;
                  do {
                    lVar16 = (**(code **)(*plVar18 + 0x58))(plVar18,iVar19);
                    if (((lVar16 != 0) && (uVar8 = FUN_008787d0(), (uVar8 & 1) == 0)) &&
                       (uVar8 = FUN_0087d610(lVar16,2), (uVar8 & 1) == 0)) {
                      uVar5 = FUN_00878a80(lVar16);
                      lVar16 = (long)iVar13;
                      iVar13 = iVar13 + 1;
                      *(undefined4 *)(param_1 + lVar16 * 4 + 0xf0) = uVar5;
                    }
                    iVar19 = iVar19 + 1;
                  } while (iVar4 != iVar19);
                }
                lVar16 = 0;
                do {
                  lVar11 = *(long *)(param_1 + lVar16 * 8 + 0x108);
                  *(undefined1 *)(lVar11 + 0x218) = 0;
                  lVar11 = *(long *)(lVar11 + 0x410);
                  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x60), lVar11 == 0)) {
                    lVar11 = 0;
                  }
                  else {
                    uVar8 = FUN_00a8cbe0(lVar11);
                    lVar11 = lVar11 + -0x50;
                    if ((uVar8 & 1) == 0) {
                      lVar11 = 0;
                    }
                  }
                  iVar4 = 0;
                  do {
                    iVar4 = iVar4 + 1;
                    snprintf((char *)local_a8,0x20,"%s%02d",*(char **)(param_1 + 0x238),iVar4);
                    uVar8 = local_a8[0] & 0xff;
                    local_c8 = 0xcbf29ce484222645;
                    if ((byte)local_a8[0] != '\0') {
                      local_c8 = 0xcbf29ce484222645;
                      pbVar12 = (byte *)((ulong)local_a8 | 1);
                      do {
                        local_c8 = (local_c8 ^ uVar8) * 0x100000001b3;
                        bVar1 = *pbVar12;
                        uVar8 = (ulong)bVar1;
                        pbVar12 = pbVar12 + 1;
                      } while (bVar1 != 0);
                    }
                    local_b8 = 0x1f;
                    local_b0 = 0;
                    puStack_c0 = local_a8;
                    uVar5 = FUN_0072e390(*(undefined8 *)(lVar11 + 0x360),&local_c8);
                    if (local_b0 != 0) {
                      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
                      local_b0 = 0;
                    }
                    FUN_0072e410(*(undefined8 *)(lVar11 + 0x360),uVar5,0,0);
                  } while (iVar4 != 0x1a);
                  lVar16 = lVar16 + 1;
                } while (lVar16 != 6);
                if (lVar7 != 0) {
                  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
                }
                uVar15 = 1;
                goto joined_r0x00eff0f8;
              }
              break;
            }
          }
        }
        break;
      }
    }
  }
LAB_00eff0f0:
  uVar15 = 0;
joined_r0x00eff0f8:
  if (local_70 == 0) {
    return uVar15;
  }
  (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  return uVar15;
LAB_00efed5c:
  plVar18 = plVar18 + 1;
  goto joined_r0x00efed0c;
}


