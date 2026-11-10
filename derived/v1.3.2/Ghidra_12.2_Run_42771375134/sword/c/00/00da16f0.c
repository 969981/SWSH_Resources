/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da16f0; name: FUN_00da16f0
 */


void FUN_00da16f0(long *param_1,long *param_2,long *param_3,int param_4)

{
  int *piVar1;
  char *__s1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined *local_190;
  long local_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [104];
  long local_78;
  undefined4 local_70;
  int local_6c [3];
  
  puVar8 = PTR_DAT_02715078;
  lVar13 = *(long *)(*param_2 + 0x68);
  local_6c[0] = param_4;
  if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(lVar13 + 0x54);
    puVar9 = (undefined8 *)PTR_DAT_02715080;
    iVar14 = *(int *)(lVar13 + 0x54);
    do {
      while( true ) {
        puVar11 = *(undefined8 **)(lVar13 + 0x58);
        if ((*puVar8 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar8);
          puVar9 = (undefined8 *)PTR_DAT_02715080;
          if (iVar5 != 0) {
            uVar6 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar6;
            __cxa_guard_release(puVar8);
            puVar9 = (undefined8 *)PTR_DAT_02715080;
          }
        }
        lVar12 = 0;
        if (puVar11 == (undefined8 *)0x0) goto LAB_00da17f4;
        while (puVar11 != puVar9) {
          puVar11 = (undefined8 *)*puVar11;
          if (puVar11 == (undefined8 *)0x0) {
            lVar12 = 0;
            goto LAB_00da17f4;
          }
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar14) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar13 + 0x60) != 0) {
            lVar12 = *(long *)(lVar13 + 0x60) + -0x50;
          }
          goto LAB_00da17f4;
        }
        lVar12 = 0;
        iVar14 = iVar5;
        if (iVar5 == 0) goto LAB_00da17f4;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar14 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00da17f4:
  iVar14 = local_6c[0];
  local_70 = 0xffffffff;
  if (local_6c[0] == 2) {
    lVar13 = *param_2;
    lVar10 = *(long *)(lVar13 + 0x108);
    if (*(long *)(lVar10 + 0x78) == 0) {
      puVar9 = (undefined8 *)(lVar10 + 0x70);
    }
    else {
      puVar9 = (undefined8 *)PTR_PTR_02710928;
      if (*(long *)(lVar10 + 0x60) != 0) {
        puVar9 = (undefined8 *)(*(long *)(lVar10 + 0x60) + 0x60);
      }
    }
    pcVar7 = strrchr((char *)*puVar9,0x2f);
    __s1 = (char *)0x0;
    if (pcVar7 != (char *)0x0) {
      __s1 = pcVar7 + 1;
    }
    iVar5 = strncmp(__s1,"pm0986_",7);
    if (iVar5 == 0) {
      local_70 = 0;
      lVar10 = *param_3;
      local_190 = PTR_DAT_02710a48 + 0x10;
      local_188 = *(long *)(lVar10 + 0xa228);
      local_78 = lVar13;
      if (local_188 != 0) {
        (**(code **)(*(long *)(local_188 + 0x48) + 0x10))();
      }
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      if (*(code **)(lVar10 + 0xa240) != (code *)0x0) {
        (**(code **)(lVar10 + 0xa240))(lVar10 + 0xa250,auStack_160);
        local_180 = *(undefined8 *)(lVar10 + 0xa230);
        local_178 = *(code **)(lVar10 + 0xa238);
        local_170 = *(undefined8 *)(lVar10 + 0xa240);
        uStack_168 = *(undefined8 *)(lVar10 + 0xa248);
      }
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      if (*(code **)(lVar10 + 0xa2c0) != (code *)0x0) {
        (**(code **)(lVar10 + 0xa2c0))(lVar10 + 0xa2d0,auStack_e0);
        local_100 = *(undefined8 *)(lVar10 + 0xa2b0);
        local_f8 = *(code **)(lVar10 + 0xa2b8);
        local_f0 = *(undefined8 *)(lVar10 + 0xa2c0);
        uStack_e8 = *(undefined8 *)(lVar10 + 0xa2c8);
      }
      goto LAB_00da1a34;
    }
  }
  else {
    lVar13 = *param_2;
  }
  local_78 = lVar13;
  lVar13 = FUN_00dab280(*param_3,iVar14);
  local_188 = *(long *)(lVar13 + 8);
  local_190 = PTR_DAT_02710a48 + 0x10;
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x10))();
  }
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  local_178 = (code *)0x0;
  if (*(code **)(lVar13 + 0x20) != (code *)0x0) {
    (**(code **)(lVar13 + 0x20))(lVar13 + 0x30,auStack_160);
    local_180 = *(undefined8 *)(lVar13 + 0x10);
    local_178 = *(code **)(lVar13 + 0x18);
    local_170 = *(undefined8 *)(lVar13 + 0x20);
    uStack_168 = *(undefined8 *)(lVar13 + 0x28);
  }
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  local_f8 = (code *)0x0;
  if (*(code **)(lVar13 + 0xa0) != (code *)0x0) {
    (**(code **)(lVar13 + 0xa0))(lVar13 + 0xb0,auStack_e0);
    local_100 = *(undefined8 *)(lVar13 + 0x90);
    local_f8 = *(code **)(lVar13 + 0x98);
    local_f0 = *(undefined8 *)(lVar13 + 0xa0);
    uStack_e8 = *(undefined8 *)(lVar13 + 0xa8);
  }
LAB_00da1a34:
  local_190 = PTR_DAT_02715e08 + 0x10;
  lVar13 = FUN_00da24e0(lVar12,*(undefined8 *)(lVar12 + 8),&local_78,&local_190);
  local_190 = PTR_DAT_02710a48 + 0x10;
  if (local_188 == 0) {
    local_188 = 0;
    pcVar4 = local_f8;
  }
  else {
    FUN_006e2100(local_188,&local_190);
    lVar10 = local_188;
    local_188 = 0;
    pcVar4 = local_f8;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      pcVar4 = local_f8;
    }
  }
  local_f8 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar4)(auStack_e0);
  }
  pcVar4 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar4)(auStack_160);
  }
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    local_188 = 0;
  }
  local_78 = lVar13;
  puVar8 = (undefined *)
           FUN_00da25f0(&local_190,*(undefined8 *)(lVar12 + 8),param_2,param_3,local_6c,&local_70,
                        &local_78);
  if (puVar8 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar8 + 0x48) + 0x10))();
  }
  local_190 = puVar8;
  FUN_006d9640(lVar12,&local_190);
  if (local_190 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
    local_190 = (undefined *)0x0;
  }
  *param_1 = (long)puVar8;
  if (puVar8 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar8 + 0x48) + 0x10))(puVar8 + 0x48);
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  return;
}


