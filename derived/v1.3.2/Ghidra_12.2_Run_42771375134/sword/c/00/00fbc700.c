/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbc700; name: FUN_00fbc700
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_00fbc700(long param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong *puVar17;
  long *plVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  ulong *puVar25;
  long *plVar26;
  ulong uVar27;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  ulong local_d8 [5];
  char acStack_b0 [80];
  
  plVar16 = *(long **)PTR_DAT_027194d8;
  if ((ulong)(long)*(int *)(param_1 + 0x48) <=
      (ulong)(*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 3)) {
    return (long *)0x0;
  }
  uVar27 = 0xcbf29ce484222645;
  uVar8 = FUN_01225e50(param_2);
  pbVar9 = (byte *)FUN_0121afe0();
  nn::util::TSNPrintf((char *)local_d8,0x25,
                      "%02x%02x%02x%02x-%02x%02x-%02x%02x-%02x%02x-%02x%02x%02x%02x%02x%02x",
                      (ulong)*pbVar9,(ulong)pbVar9[1],(ulong)pbVar9[2],(ulong)pbVar9[3],
                      (ulong)pbVar9[4],(uint)pbVar9[5],(uint)pbVar9[6],(uint)pbVar9[7],
                      (uint)pbVar9[8],(uint)pbVar9[9],(uint)pbVar9[10],(uint)pbVar9[0xb],
                      (uint)pbVar9[0xc],(uint)pbVar9[0xd],(uint)pbVar9[0xe],(uint)pbVar9[0xf]);
  puVar10 = (ulong *)FUN_0121aff0(uVar8);
  uVar21 = *puVar10;
  lVar11 = FUN_0121aff0(uVar8);
  snprintf(acStack_b0,0x48,"%s_%016lx_%016lx",(char *)local_d8,uVar21,*(ulong *)(lVar11 + 8));
  snprintf((char *)&local_130,0x58,"CHARA_%s",acStack_b0);
  uVar21 = 0xcbf29ce484222645;
  if ((byte)local_130 != 0) {
    uVar21 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_130 | 1);
    do {
      uVar21 = (uVar21 ^ (byte)local_130) * 0x100000001b3;
      local_130._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_130 != 0);
  }
  lVar14 = *(long *)(param_1 + 0x100);
  for (lVar11 = *(long *)(param_1 + 0xf8); lVar11 != lVar14; lVar11 = lVar11 + 8) {
    lVar12 = FUN_00fba2d0(lVar11);
    if ((lVar12 != 0) && (*(ulong *)(lVar12 + 0x1a0) == uVar21)) {
      return (long *)0x0;
    }
  }
  lVar11 = FUN_01225e60(param_2);
  local_130 = *(ulong *)(lVar11 + 4);
  uStack_128 = *(undefined8 *)(lVar11 + 0xc);
  local_120 = *(undefined8 *)(lVar11 + 0x14);
  uStack_118 = *(undefined8 *)(lVar11 + 0x1c);
  local_110 = *(undefined8 *)(lVar11 + 0x24);
  uStack_108 = *(undefined8 *)(lVar11 + 0x2c);
  local_100 = *(undefined8 *)(lVar11 + 0x34);
  local_f8 = *(undefined8 *)(lVar11 + 0x3c);
  uStack_f0 = *(undefined8 *)(lVar11 + 0x44);
  local_e8 = *(undefined4 *)(lVar11 + 0x4c);
  iVar7 = FUN_0121d1c0(&local_130);
  lVar11 = 0x230;
  if (iVar7 != 1) {
    lVar11 = 0x228;
  }
  plVar13 = (long *)FUN_00fbeac0(plVar16,*(undefined8 *)(param_1 + lVar11));
  *(undefined4 *)(plVar13 + 0x6e) = *(undefined4 *)(param_1 + 0x60);
  *(undefined1 *)(plVar13 + 0x43) = 0;
  FUN_00ed5c50(plVar13,param_2);
  (**(code **)(*plVar13 + 0x10))(&local_138,plVar13);
  local_d8[0] = local_138;
  local_138 = 0;
  puVar10 = *(ulong **)(param_1 + 0x100);
  if (puVar10 < *(ulong **)(param_1 + 0x108)) {
    uVar8 = *(undefined8 *)(param_1 + 0x110);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    uVar19 = local_d8[0];
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00fbd3f0;
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    local_d8[0] = 0;
    *puVar10 = uVar19;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 8;
  }
  else {
    FUN_00fc3550((long *)(param_1 + 0xf8),local_d8);
    if (local_d8[0] != 0) {
      (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x18))();
      local_d8[0] = 0;
    }
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    local_138 = 0;
  }
  plVar13[0x34] = uVar21;
  puVar10 = *(ulong **)(param_1 + 0x158);
  if (*(ulong **)(param_1 + 0x160) != puVar10) {
    do {
      while (lVar11 = FUN_00fbede0(puVar10), lVar11 != 0) {
        lVar11 = *(long *)(lVar11 + 0x560);
        if (lVar11 == 0) {
LAB_00fbcbb4:
          local_d8[0] = *puVar10;
          if (((local_d8[0] == 0) ||
              ((**(code **)(*(long *)(local_d8[0] + 0x48) + 0x10))(), local_d8[0] == 0)) ||
             (*(int *)(local_d8[0] + 0x54) == 0)) goto LAB_00fbcafc;
          goto LAB_00fbcbf0;
        }
        plVar22 = (long *)(lVar11 + 0x48);
        (**(code **)(*plVar22 + 0x10))(plVar22);
        iVar7 = *(int *)(lVar11 + 0x54);
        (**(code **)(*plVar22 + 0x18))(plVar22);
        if (iVar7 == 0) goto LAB_00fbcbb4;
        puVar10 = puVar10 + 1;
        if (*(ulong **)(param_1 + 0x160) == puVar10) goto LAB_00fbcaf8;
      }
      puVar17 = *(ulong **)(param_1 + 0x160);
      puVar25 = puVar10 + 1;
      if (puVar25 == puVar17) {
        puVar20 = puVar10;
LAB_00fbcac4:
        do {
          puVar17 = puVar25 + -1;
          if (*puVar17 != 0) {
            (**(code **)(*(long *)(*puVar17 + 0x48) + 0x18))();
            puVar25[-1] = 0;
          }
          puVar25 = puVar17;
        } while (puVar20 != puVar17);
      }
      else {
        puVar25 = puVar10;
        do {
          if (*puVar25 != 0) {
            (**(code **)(*(long *)(*puVar25 + 0x48) + 0x18))();
            *puVar25 = 0;
          }
          puVar20 = puVar25 + 1;
          uVar21 = *puVar20;
          *puVar20 = 0;
          *puVar25 = uVar21;
          puVar25 = puVar20;
        } while (puVar17 + -1 != puVar20);
        puVar25 = *(ulong **)(param_1 + 0x160);
        if (puVar25 != puVar20) goto LAB_00fbcac4;
      }
      *(ulong **)(param_1 + 0x160) = puVar20;
    } while (puVar20 != puVar10);
  }
LAB_00fbcaf8:
  local_d8[0] = 0;
LAB_00fbcafc:
  plVar22 = (long *)FUN_00fbec50(plVar16,*(undefined8 *)(param_1 + 0x238));
  *(undefined4 *)(plVar22 + 0x6e) = *(undefined4 *)(param_1 + 0x60);
  (**(code **)(*plVar22 + 0x10))(&local_130);
  if (local_d8[0] != 0) {
    (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x18))();
  }
  local_d8[0] = local_130;
  puVar10 = *(ulong **)(param_1 + 0x160);
  if (puVar10 == *(ulong **)(param_1 + 0x168)) {
    FUN_00fc3760(param_1 + 0x158,local_d8);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x170);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00fbd3f0;
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar10 = local_d8[0];
    if (local_d8[0] != 0) {
      (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x10))();
    }
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 8;
  }
LAB_00fbcbf0:
  lVar11 = FUN_00fbede0(local_d8);
  *(undefined1 *)(lVar11 + 0x218) = 0;
  local_140 = local_d8[0];
  if (local_d8[0] != 0) {
    (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x10))();
  }
  FUN_00e45460(plVar13,&local_140);
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
    local_140 = 0;
  }
  snprintf((char *)&local_130,0x58,"TENT_%s",acStack_b0);
  lVar11 = FUN_00fbede0(local_d8);
  uVar21 = local_130 & 0xff;
  uVar19 = 0xcbf29ce484222645;
  if ((byte)local_130 != '\0') {
    uVar19 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_130 | 1);
    do {
      uVar19 = (uVar19 ^ uVar21) * 0x100000001b3;
      bVar1 = *pbVar9;
      uVar21 = (ulong)bVar1;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(lVar11 + 0x1a0) = uVar19;
  uVar8 = FUN_00fbede0(local_d8);
  FUN_00dbb950(plVar16,uVar8,plVar13);
  if (local_d8[0] != 0) {
    (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x18))();
    local_d8[0] = 0;
  }
  puVar4 = PTR_DAT_0271ed00;
  puVar3 = PTR_DAT_0271ecf8;
  puVar10 = *(ulong **)(param_1 + 0x128);
  if (*(ulong **)(param_1 + 0x130) != puVar10) {
LAB_00fbcda0:
    do {
      if ((*puVar10 != 0) &&
         (puVar23 = *(undefined8 **)(*puVar10 + 0x60), puVar23 != (undefined8 *)0x0)) {
        plVar22 = (long *)(**(code **)*puVar23)(puVar23);
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          uVar8 = FUN_0156b190();
          *(undefined8 *)puVar4 = uVar8;
          __cxa_guard_release(puVar3);
        }
        for (; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
          if (plVar22 == (long *)puVar4) {
            lVar11 = puVar23[0x92];
            if (lVar11 != 0) {
              plVar22 = (long *)(lVar11 + 0x48);
              (**(code **)(*plVar22 + 0x10))(plVar22);
              if (*(int *)(lVar11 + 0x54) != 0) {
                (**(code **)(*plVar22 + 0x18))(plVar22);
                puVar10 = puVar10 + 1;
                if (*(ulong **)(param_1 + 0x130) != puVar10) goto LAB_00fbcda0;
                goto LAB_00fbce70;
              }
            }
            cVar2 = *(char *)((long)puVar23 + 0x48c);
            lVar14 = FUN_01225e70(param_2);
            cVar5 = FUN_01223c90(lVar14 + 0x10);
            if (lVar11 != 0) {
              (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
            }
            if (cVar2 != cVar5) {
              puVar10 = puVar10 + 1;
              if (*(ulong **)(param_1 + 0x130) != puVar10) goto LAB_00fbcda0;
              goto LAB_00fbce70;
            }
            local_d8[0] = *puVar10;
            if (((local_d8[0] == 0) ||
                ((**(code **)(*(long *)(local_d8[0] + 0x48) + 0x10))(), local_d8[0] == 0)) ||
               (*(int *)(local_d8[0] + 0x54) == 0)) goto LAB_00fbce74;
            goto joined_r0x00fbcf6c;
          }
        }
      }
      puVar17 = *(ulong **)(param_1 + 0x130);
      puVar25 = puVar10 + 1;
      if (puVar25 == puVar17) {
        puVar20 = puVar10;
LAB_00fbce3c:
        do {
          puVar17 = puVar25 + -1;
          if (*puVar17 != 0) {
            (**(code **)(*(long *)(*puVar17 + 0x48) + 0x18))();
            puVar25[-1] = 0;
          }
          puVar25 = puVar17;
        } while (puVar20 != puVar17);
      }
      else {
        puVar25 = puVar10;
        do {
          if (*puVar25 != 0) {
            (**(code **)(*(long *)(*puVar25 + 0x48) + 0x18))();
            *puVar25 = 0;
          }
          puVar20 = puVar25 + 1;
          uVar21 = *puVar20;
          *puVar20 = 0;
          *puVar25 = uVar21;
          puVar25 = puVar20;
        } while (puVar17 + -1 != puVar20);
        puVar25 = *(ulong **)(param_1 + 0x130);
        if (puVar25 != puVar20) goto LAB_00fbce3c;
      }
      *(ulong **)(param_1 + 0x130) = puVar20;
    } while (puVar20 != puVar10);
  }
LAB_00fbce70:
  local_d8[0] = 0;
LAB_00fbce74:
  plVar22 = (long *)FUN_00e1a620(plVar16,*(undefined8 *)(param_1 + 0x240));
  *(undefined4 *)(plVar22 + 0x6e) = *(undefined4 *)(param_1 + 0x60);
  lVar11 = FUN_01225e70(param_2);
  uVar6 = FUN_01223c90(lVar11 + 0x10);
  *(undefined1 *)((long)plVar22 + 0x4dc) = uVar6;
  (**(code **)(*plVar22 + 0x10))(&local_130,plVar22);
  if (local_d8[0] != 0) {
    (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x18))();
  }
  local_d8[0] = local_130;
  puVar10 = *(ulong **)(param_1 + 0x130);
  if (puVar10 == *(ulong **)(param_1 + 0x138)) {
    FUN_00fc3980(param_1 + 0x128,local_d8);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x140);
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00fbd3f0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar8;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *puVar10 = local_d8[0];
    if (local_d8[0] != 0) {
      (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x10))();
    }
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 8;
  }
joined_r0x00fbcf6c:
  if (local_d8[0] == 0) {
    DAT_00000218 = 0;
    local_148 = 0;
  }
  else {
    puVar23 = *(undefined8 **)(local_d8[0] + 0x60);
    plVar22 = (long *)(**(code **)*puVar23)(puVar23);
    local_148 = local_d8[0];
    if ((*PTR_DAT_0271ecf8 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_0271ecf8);
      local_148 = local_d8[0];
      if (iVar7 != 0) {
        uVar8 = FUN_0156b190();
        *(undefined8 *)PTR_DAT_0271ed00 = uVar8;
        __cxa_guard_release(PTR_DAT_0271ecf8);
        local_148 = local_d8[0];
      }
    }
    for (; plVar22 != (long *)PTR_DAT_0271ed00; plVar22 = (long *)*plVar22) {
    }
    *(undefined1 *)(puVar23 + 0x39) = 0;
    local_d8[0] = local_148;
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x10))();
    }
  }
  FUN_00e45240(plVar13,&local_148);
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    local_148 = 0;
  }
  snprintf((char *)&local_130,0x58,"BICYCLE_%s",acStack_b0);
  if ((local_d8[0] == 0) ||
     (puVar23 = *(undefined8 **)(local_d8[0] + 0x60), puVar23 == (undefined8 *)0x0)) {
  }
  else {
    plVar22 = (long *)(**(code **)*puVar23)(puVar23);
    if (((*PTR_DAT_0271ecf8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0271ecf8), iVar7 != 0)) {
      uVar8 = FUN_0156b190();
      *(undefined8 *)PTR_DAT_0271ed00 = uVar8;
      __cxa_guard_release(PTR_DAT_0271ecf8);
    }
    for (; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
      if (plVar22 == (long *)PTR_DAT_0271ed00) {
        puVar23 = puVar23 + -10;
        cVar2 = (byte)local_130;
        goto joined_r0x00fbd308;
      }
    }
  }
  puVar23 = (undefined8 *)0x0;
  cVar2 = (byte)local_130;
joined_r0x00fbd308:
  if (cVar2 != '\0') {
    uVar21 = local_130 & 0xff;
    pbVar9 = (byte *)((ulong)&local_130 | 1);
    do {
      uVar27 = (uVar27 ^ uVar21) * 0x100000001b3;
      bVar1 = *pbVar9;
      uVar21 = (ulong)bVar1;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
  }
  puVar23[0x34] = uVar27;
  if ((local_d8[0] != 0) &&
     (puVar23 = *(undefined8 **)(local_d8[0] + 0x60), puVar23 != (undefined8 *)0x0)) {
    plVar22 = (long *)(**(code **)*puVar23)(puVar23);
    if (((*PTR_DAT_0271ecf8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0271ecf8), iVar7 != 0)) {
      uVar8 = FUN_0156b190();
      *(undefined8 *)PTR_DAT_0271ed00 = uVar8;
      __cxa_guard_release(PTR_DAT_0271ecf8);
    }
    for (; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
      if (plVar22 == (long *)PTR_DAT_0271ed00) {
        puVar23 = puVar23 + -10;
        goto LAB_00fbd0ec;
      }
    }
  }
  puVar23 = (undefined8 *)0x0;
LAB_00fbd0ec:
  FUN_00dbb950(plVar16,puVar23,plVar13);
  puVar4 = PTR_DAT_0271ed00;
  puVar3 = PTR_DAT_0271ecf8;
  plVar22 = *(long **)(param_1 + 0x128);
  if ((plVar22 != *(long **)(param_1 + 0x130)) &&
     ((ulong)(long)*(int *)(param_1 + 0x48) <
      (ulong)((long)*(long **)(param_1 + 0x130) - (long)plVar22 >> 3))) {
    do {
      if ((*plVar22 != 0) &&
         (puVar23 = *(undefined8 **)(*plVar22 + 0x60), puVar23 != (undefined8 *)0x0)) {
        puVar15 = (undefined8 *)(**(code **)*puVar23)(puVar23);
        if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar3), iVar7 != 0)) {
          uVar8 = FUN_0156b190();
          *(undefined8 *)puVar4 = uVar8;
          __cxa_guard_release(puVar3);
        }
        if (puVar15 != (undefined8 *)0x0) {
LAB_00fbd234:
          if (puVar15 != (undefined8 *)puVar4) goto code_r0x00fbd23c;
          lVar11 = puVar23[0x92];
          if (lVar11 != 0) {
            plVar26 = (long *)(lVar11 + 0x48);
            (**(code **)(*plVar26 + 0x10))(plVar26);
            iVar7 = *(int *)(lVar11 + 0x54);
            (**(code **)(*plVar26 + 0x18))(plVar26);
            if (iVar7 != 0) goto LAB_00fbd27c;
          }
          (**(code **)(puVar23[-10] + 0x80))();
          plVar18 = *(long **)(param_1 + 0x130);
          plVar26 = plVar22 + 1;
          if (plVar26 == plVar18) {
            plVar24 = plVar22;
            goto LAB_00fbd19c;
          }
          plVar26 = plVar22;
          do {
            if (*plVar26 != 0) {
              (**(code **)(*(long *)(*plVar26 + 0x48) + 0x18))();
              *plVar26 = 0;
            }
            plVar24 = plVar26 + 1;
            lVar11 = *plVar24;
            *plVar24 = 0;
            *plVar26 = lVar11;
            plVar26 = plVar24;
          } while (plVar18 + -1 != plVar24);
          plVar26 = *(long **)(param_1 + 0x130);
          if (plVar26 != plVar24) {
LAB_00fbd19c:
            do {
              plVar18 = plVar26 + -1;
              if (*plVar18 != 0) {
                (**(code **)(*(long *)(*plVar18 + 0x48) + 0x18))();
                plVar26[-1] = 0;
              }
              plVar26 = plVar18;
            } while (plVar24 != plVar18);
          }
          *(long **)(param_1 + 0x130) = plVar24;
          if (plVar22 == plVar24) break;
          goto LAB_00fbd28c;
        }
      }
LAB_00fbd27c:
      plVar24 = *(long **)(param_1 + 0x130);
      plVar22 = plVar22 + 1;
      if (plVar22 == plVar24) break;
LAB_00fbd28c:
    } while ((ulong)(long)*(int *)(param_1 + 0x48) <
             (ulong)((long)plVar24 - *(long *)(param_1 + 0x128) >> 3));
  }
  if (local_d8[0] != 0) {
    (**(code **)(*(long *)(local_d8[0] + 0x48) + 0x18))();
    local_d8[0] = 0;
  }
  FUN_00fbef40(param_1,param_2);
  (**(code **)(*plVar16 + 0x38))(plVar16,1);
  return plVar13;
code_r0x00fbd23c:
  puVar15 = (undefined8 *)*puVar15;
  if (puVar15 == (undefined8 *)0x0) goto LAB_00fbd27c;
  goto LAB_00fbd234;
}


