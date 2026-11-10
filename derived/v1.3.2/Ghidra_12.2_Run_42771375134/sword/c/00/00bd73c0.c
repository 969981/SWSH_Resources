/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd73c0; name: FUN_00bd73c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bd73c0(long param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_2b8 [104];
  undefined1 auStack_250 [16];
  long local_240;
  undefined2 local_1e8;
  undefined *local_1e0 [2];
  undefined1 auStack_1d0 [184];
  undefined1 auStack_118 [184];
  long local_58;
  
  if (*(long *)(param_1 + 0x98) == 0) {
    return;
  }
  FUN_00bdd810(local_1e0);
  if (local_1e0[0] == (undefined *)0x0) {
    return;
  }
  puVar10 = *(undefined8 **)(local_1e0[0] + 0x60);
  if (puVar10 != (undefined8 *)0x0) {
    plVar3 = (long *)(**(code **)*puVar10)(puVar10);
    lVar4 = FUN_00bd9700();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        plVar3 = puVar10 + -10;
        goto joined_r0x00bd7514;
      }
    }
  }
  plVar3 = (long *)0x0;
joined_r0x00bd7514:
  if (local_1e0[0] != (undefined *)0x0) {
    (**(code **)(*(long *)(local_1e0[0] + 0x48) + 0x18))();
    local_1e0[0] = (undefined *)0x0;
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  FUN_00bd9cd0(&local_58,plVar3);
  if (local_58 == 0) {
    return;
  }
  lVar4 = FUN_00bda9a0(plVar3);
  if (lVar4 == 0) goto joined_r0x00bd7a28;
  cVar1 = FUN_009ff0e0(local_58);
  iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
  if (iVar2 == 3) {
    FUN_00bdd7c0(local_1e0,*(undefined8 *)(param_1 + 0x98));
    if (local_1e0[0] != (undefined *)0x0) {
      puVar10 = *(undefined8 **)(local_1e0[0] + 0x60);
      if (puVar10 != (undefined8 *)0x0) {
        plVar3 = (long *)(**(code **)*puVar10)(puVar10);
        if (((*PTR_DAT_0271b788 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_0271b788), iVar2 != 0)) {
          uVar9 = FUN_00bd9700();
          *(undefined8 *)PTR_DAT_0271b790 = uVar9;
          __cxa_guard_release(PTR_DAT_0271b788);
        }
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)PTR_DAT_0271b790) {
            puVar10 = puVar10 + -10;
            goto joined_r0x00bd77ac;
          }
        }
      }
      puVar10 = (undefined8 *)0x0;
joined_r0x00bd77ac:
      if (local_1e0[0] != (undefined *)0x0) {
        (**(code **)(*(long *)(local_1e0[0] + 0x48) + 0x18))();
        local_1e0[0] = (undefined *)0x0;
      }
      if (puVar10 != (undefined8 *)0x0) {
        iVar2 = FUN_00bdc320(puVar10);
        FUN_010491d0(auStack_118,lVar4,0,0);
        if (iVar2 == 2) {
          FUN_010348f0(local_1e0,*(undefined8 *)(param_1 + 8));
          memcpy(auStack_1d0,auStack_118,0xb8);
          local_1e0[0] = PTR_DAT_0271b7f0;
        }
        else {
          if (iVar2 != 1) goto joined_r0x00bd7a28;
          FUN_010348f0(local_1e0,*(undefined8 *)(param_1 + 8));
          memcpy(auStack_1d0,auStack_118,0xb8);
          local_1e0[0] = PTR_DAT_0271b7e8;
        }
        local_1e0[0] = local_1e0[0] + 0x10;
        FUN_01034150(auStack_250,local_1e0);
        FUN_01034430(auStack_250);
        FUN_01031e00(auStack_250);
      }
    }
    goto joined_r0x00bd7a28;
  }
  if (iVar2 == 2) {
    FUN_00bdd770(local_1e0,*(undefined8 *)(param_1 + 0x98));
    if (local_1e0[0] == (undefined *)0x0) goto joined_r0x00bd7a28;
    puVar10 = *(undefined8 **)(local_1e0[0] + 0x60);
    if (puVar10 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar10)(puVar10);
      if (((*PTR_DAT_0271b7a8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_0271b7a8), iVar2 != 0)) {
        uVar9 = FUN_00bd9700();
        *(undefined8 *)PTR_DAT_0271b7b0 = uVar9;
        __cxa_guard_release(PTR_DAT_0271b7a8);
      }
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)PTR_DAT_0271b7b0) {
          puVar10 = puVar10 + -10;
          goto joined_r0x00bd77bc;
        }
      }
    }
    puVar10 = (undefined8 *)0x0;
joined_r0x00bd77bc:
    if (local_1e0[0] != (undefined *)0x0) {
      (**(code **)(*(long *)(local_1e0[0] + 0x48) + 0x18))();
      local_1e0[0] = (undefined *)0x0;
    }
    if ((puVar10 == (undefined8 *)0x0) || (*(char *)(puVar10 + 0xe) == '\0'))
    goto joined_r0x00bd7a28;
    uVar7 = puVar10[0xf];
    lVar11 = puVar10[0x10];
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    lVar13 = puVar10[0x12];
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    uVar14 = uVar7 & 0xffffffff00000000;
    iVar2 = (int)uVar7;
    if (cVar1 == '\x01') {
      lVar6 = FUN_00bdbac0(puVar10);
      if ((lVar6 != 0) && (FUN_00bdb920(auStack_250,puVar10), local_240 != 0)) {
        uVar7 = FUN_00be28a0(lVar6,local_1e8);
        lVar6 = FUN_00be2600(lVar6,local_1e8);
        FUN_010491d0(auStack_118,lVar4,uVar14 | iVar2 == 2,lVar6 << 0x20 | 1);
        if ((uVar7 & 1) == 0) {
          FUN_010348f0(local_1e0,*(undefined8 *)(param_1 + 8));
          memcpy(auStack_1d0,auStack_118,0xb8);
          local_1e0[0] = PTR_DAT_0271b7e0;
        }
        else {
          FUN_010348f0(local_1e0,*(undefined8 *)(param_1 + 8));
          memcpy(auStack_1d0,auStack_118,0xb8);
          local_1e0[0] = PTR_DAT_0271b7c8;
        }
        goto LAB_00bd78f4;
      }
    }
    else if (((cVar1 == '\0') && (lVar6 = FUN_00bdbab0(puVar10), lVar6 != 0)) &&
            (FUN_00bdb920(auStack_250,puVar10), local_240 != 0)) {
      uVar7 = FUN_00be28a0(lVar6,local_1e8);
      lVar6 = FUN_00be2600(lVar6,local_1e8);
      FUN_010491d0(auStack_118,lVar4,uVar14 | iVar2 == 2,lVar6 << 0x20 | 1);
      if ((uVar7 & 1) == 0) {
        FUN_010348f0(local_1e0,*(undefined8 *)(param_1 + 8));
        memcpy(auStack_1d0,auStack_118,0xb8);
        local_1e0[0] = PTR_DAT_0271b7d8;
      }
      else {
        FUN_010348f0(local_1e0,*(undefined8 *)(param_1 + 8));
        memcpy(auStack_1d0,auStack_118,0xb8);
        local_1e0[0] = PTR_DAT_0271b7b8;
      }
LAB_00bd78f4:
      local_1e0[0] = local_1e0[0] + 0x10;
      FUN_01034150(auStack_2b8,local_1e0);
      FUN_01034430(auStack_2b8);
      puVar8 = auStack_2b8;
      goto LAB_00bd7914;
    }
  }
  else {
    if ((iVar2 != 1) ||
       (FUN_00bdd720(local_1e0,*(undefined8 *)(param_1 + 0x98)), local_1e0[0] == (undefined *)0x0))
    goto joined_r0x00bd7a28;
    puVar10 = *(undefined8 **)(local_1e0[0] + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar5 = (undefined8 *)(**(code **)*puVar10)(puVar10);
      if (((*PTR_DAT_0271b798 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_0271b798), iVar2 != 0)) {
        uVar9 = FUN_00bd9700();
        *(undefined8 *)PTR_DAT_0271b7a0 = uVar9;
        __cxa_guard_release(PTR_DAT_0271b798);
      }
      puVar12 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        do {
          if (puVar5 == (undefined8 *)PTR_DAT_0271b7a0) {
            puVar12 = puVar10 + -10;
            goto joined_r0x00bd76e8;
          }
          puVar5 = (undefined8 *)*puVar5;
        } while (puVar5 != (undefined8 *)0x0);
        puVar12 = (undefined8 *)0x0;
      }
    }
joined_r0x00bd76e8:
    if (local_1e0[0] != (undefined *)0x0) {
      (**(code **)(*(long *)(local_1e0[0] + 0x48) + 0x18))();
      local_1e0[0] = (undefined *)0x0;
    }
    if ((puVar12 == (undefined8 *)0x0) || (*(char *)(puVar12 + 0xe) == '\0'))
    goto joined_r0x00bd7a28;
    uVar7 = puVar12[0xf];
    lVar11 = puVar12[0x10];
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    lVar13 = puVar12[0x12];
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    FUN_010491d0(auStack_118,lVar4,uVar7 & 0xffffffff00000000 | (ulong)((int)uVar7 == 2),0);
    if (cVar1 == '\x01') {
      FUN_010348f0(local_1e0,*(undefined8 *)(param_1 + 8));
      memcpy(auStack_1d0,auStack_118,0xb8);
      local_1e0[0] = PTR_DAT_0271b7d0;
    }
    else {
      if (cVar1 != '\0') goto LAB_00bd7918;
      FUN_010348f0(local_1e0,*(undefined8 *)(param_1 + 8));
      memcpy(auStack_1d0,auStack_118,0xb8);
      local_1e0[0] = PTR_DAT_0271b7c0;
    }
    local_1e0[0] = local_1e0[0] + 0x10;
    FUN_01034150(auStack_250,local_1e0);
    FUN_01034430(auStack_250);
    puVar8 = auStack_250;
LAB_00bd7914:
    FUN_01031e00(puVar8);
  }
LAB_00bd7918:
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
joined_r0x00bd7a28:
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


