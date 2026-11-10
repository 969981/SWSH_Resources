/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2eb60; name: FUN_00c2eb60
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00c2eb60(undefined1 *param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 local_288;
  long local_278;
  undefined1 auStack_252 [258];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_48;
  
  if ((*(long *)(param_2 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar5 = FUN_00be66c0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        FUN_00c1cf00(&local_288,puVar8 + -10);
        goto joined_r0x00c2ed98;
      }
    }
  }
  FUN_00c1cf00(&local_288,0);
joined_r0x00c2ed98:
  if (local_288 == 0) {
LAB_00c2ed9c:
    *param_1 = 0;
    return;
  }
  puVar8 = *(undefined8 **)(local_288 + 0x60);
  if (puVar8 != (undefined8 *)0x0) {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar5 = FUN_00bd9700();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        plVar4 = puVar8 + -10;
        goto joined_r0x00c2edc4;
      }
    }
  }
  plVar4 = (long *)0x0;
joined_r0x00c2edc4:
  if (local_288 != 0) {
    (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
    local_288 = 0;
  }
  if ((plVar4 == (long *)0x0) || (FUN_00bd9cd0(&local_48,plVar4), local_48 == 0)) goto LAB_00c2ed9c;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_150 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  uVar2 = FUN_009ff9e0();
  if ((*(long *)(param_2 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar6 = (long *)(**(code **)*puVar8)(puVar8);
    lVar5 = FUN_00be66c0();
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)lVar5) {
        iVar3 = FUN_00c1ce10(puVar8 + -10);
        goto joined_r0x00c2edd8;
      }
    }
  }
  iVar3 = FUN_00c1ce10(0);
joined_r0x00c2edd8:
  if (iVar3 == 2) {
    if ((*(long *)(param_2 + 0x68) != 0) &&
       (puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar6 = (long *)(**(code **)*puVar8)(puVar8);
      lVar5 = FUN_00be66c0();
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)lVar5) {
          FUN_00c1ce80(&local_288,puVar8 + -10);
          goto joined_r0x00c2edf0;
        }
      }
    }
    FUN_00c1ce80(&local_288,0);
joined_r0x00c2edf0:
    if (local_288 == 0) goto LAB_00c2ee90;
    puVar8 = *(undefined8 **)(local_288 + 0x60);
    if (puVar8 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)(**(code **)*puVar8)(puVar8);
      if (((*PTR_DAT_0271b7a8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_0271b7a8), iVar3 != 0)) {
        uVar9 = FUN_00bd9700();
        *(undefined8 *)PTR_DAT_0271b7b0 = uVar9;
        __cxa_guard_release(PTR_DAT_0271b7a8);
      }
      for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
        if (puVar7 == (undefined8 *)PTR_DAT_0271b7b0) {
          puVar8 = puVar8 + -10;
          goto joined_r0x00c2ee00;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
joined_r0x00c2ee00:
    if (local_288 != 0) {
      (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
      local_288 = 0;
    }
    if ((puVar8 == (undefined8 *)0x0) || (FUN_00bdb920(&local_288,puVar8), local_278 == 0))
    goto LAB_00c2ee90;
    bVar1 = FUN_00bdbbe0(puVar8);
    bVar1 = bVar1 & 1;
  }
  else {
LAB_00c2ee90:
    bVar1 = 0;
  }
  iVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
  if (iVar3 == 3) {
    if (*(long *)(param_2 + 0x68) != 0) {
      puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60);
      uVar9 = 0;
      if (puVar8 == (undefined8 *)0x0) goto LAB_00c2ef9c;
      plVar4 = (long *)(**(code **)*puVar8)(puVar8);
      lVar5 = FUN_00be66c0();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar5) {
          FUN_00c1cce0(&local_288,puVar8 + -10);
          lVar5 = FUN_00be53f0(&local_288);
          if (local_288 != 0) {
            (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
            local_288 = 0;
          }
          uVar9 = 0;
          if (lVar5 == 0) goto LAB_00c2ef9c;
          FUN_00bdd7c0(&local_288,lVar5);
          if (local_288 != 0) {
            puVar8 = *(undefined8 **)(local_288 + 0x60);
            if (puVar8 != (undefined8 *)0x0) {
              puVar7 = (undefined8 *)(**(code **)*puVar8)(puVar8);
              if (((*PTR_DAT_0271b788 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(PTR_DAT_0271b788), iVar3 != 0)) {
                uVar9 = FUN_00bd9700();
                *(undefined8 *)PTR_DAT_0271b790 = uVar9;
                __cxa_guard_release(PTR_DAT_0271b788);
              }
              if (puVar7 != (undefined8 *)0x0) goto LAB_00c2f07c;
            }
            puVar8 = (undefined8 *)0x0;
            goto joined_r0x00c2f0a4;
          }
          break;
        }
      }
    }
  }
  else if ((char)plVar4[0xe] != '\0') {
    lVar5 = plVar4[0x10];
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (plVar4[0x12] == 0) {
      memcpy(&local_288,plVar4 + 0x13,0x136);
      memcpy(&local_150,auStack_252,0x100);
    }
    else {
      plVar6 = (long *)(plVar4[0x12] + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      memcpy(&local_288,plVar4 + 0x13,0x136);
      memcpy(&local_150,auStack_252,0x100);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
  }
  uVar9 = 0;
LAB_00c2ef9c:
  *(undefined4 *)(param_1 + 8) = uVar2;
  memcpy(param_1 + 0xc,&local_150,0x100);
  *(undefined8 *)(param_1 + 0x110) = uVar9;
  param_1[0x118] = bVar1;
  *(undefined4 *)(param_1 + 0x119) = (undefined4)local_288;
  param_1[0x11f] = local_288._6_1_;
  *(undefined2 *)(param_1 + 0x11d) = local_288._4_2_;
  *param_1 = 1;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
  while (puVar7 = (undefined8 *)*puVar7, puVar7 != (undefined8 *)0x0) {
LAB_00c2f07c:
    if (puVar7 == (undefined8 *)PTR_DAT_0271b790) {
      puVar8 = puVar8 + -10;
      goto joined_r0x00c2f0a4;
    }
  }
  puVar8 = (undefined8 *)0x0;
joined_r0x00c2f0a4:
  if (local_288 != 0) {
    (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
    local_288 = 0;
  }
  uVar9 = 0;
  if (puVar8 != (undefined8 *)0x0) {
    auVar10 = FUN_00bdc8d0(puVar8);
    uVar9 = 0;
    if ((auVar10._0_8_ & 0xff) != 0) {
      uVar9 = auVar10._8_8_;
    }
  }
  goto LAB_00c2ef9c;
}


