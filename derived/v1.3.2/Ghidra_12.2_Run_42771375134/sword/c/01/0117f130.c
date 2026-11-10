/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117f130; name: FUN_0117f130
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0117f130(long param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  ulong uVar9;
  char *pcVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  undefined4 local_2dc;
  undefined1 auStack_2d8 [16];
  char local_2c8 [4];
  undefined8 local_2c4;
  undefined8 local_2bc;
  long local_2b0 [2];
  char local_2a0;
  char local_298;
  char local_288;
  char local_264;
  char local_250;
  char local_214;
  char local_20c;
  char local_1c0;
  char local_100;
  char local_b0;
  
  lVar13 = *(long *)(*(long *)(*(long *)PTR_DAT_02710880 + 0xb8) + 0x58);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  switch(*(undefined4 *)(param_1 + 0x180)) {
  case 0:
    FUN_0117f740(param_1);
    goto joined_r0x0117f40c;
  case 1:
    if (lVar13 == 0) {
      if (_DAT_00000060 != 0) {
        return;
      }
    }
    else {
      FUN_01127680(local_2b0,lVar13);
      lVar14 = *(long *)(local_2b0[0] + 0x60);
      if (local_2b0[0] != 0) {
        (**(code **)(*(long *)(local_2b0[0] + 0x48) + 0x18))();
      }
      if (lVar14 != 0) goto LAB_0117f70c;
    }
    if (*(char *)(param_1 + 0x184) == '\0') {
LAB_0117f610:
      uVar6 = 0xd;
      goto LAB_0117f704;
    }
    local_2b0[0] = *(long *)(param_1 + 0x188);
    uVar9 = FUN_011fe130(*(undefined8 *)PTR_DAT_02718f20,param_1 + 0x70,local_2b0);
    if ((uVar9 & 1) != 0) {
      uVar6 = 2;
      goto LAB_0117f704;
    }
    break;
  case 2:
    if (lVar13 == 0) {
      if (_DAT_00000070 != 0) {
        return;
      }
    }
    else {
      FUN_01127680(local_2b0,lVar13);
      lVar14 = *(long *)(local_2b0[0] + 0x70);
      if (local_2b0[0] != 0) {
        (**(code **)(*(long *)(local_2b0[0] + 0x48) + 0x18))();
      }
      if (lVar14 != 0) goto LAB_0117f70c;
    }
    puVar4 = PTR_DAT_027185f8;
    iVar7 = FUN_0120e800(*(undefined8 *)PTR_DAT_027185f8);
    puVar3 = PTR_DAT_02710958;
    if (iVar7 != 0) {
      FUN_01211940(local_2b0,*(undefined8 *)PTR_DAT_02710958);
      pcVar10 = (char *)FUN_01225ea0(local_2b0);
      local_2c8[0] = *pcVar10 != '\0';
      if ((bool)local_2c8[0]) {
        local_2c4 = *(undefined8 *)(pcVar10 + 4);
        local_2bc = *(undefined8 *)(pcVar10 + 0xc);
      }
      local_2dc = 1;
      puVar11 = (undefined2 *)FUN_0121b430((ulong)local_2c8 | 4);
      uVar2 = *puVar11;
      uVar6 = FUN_0120e800(*(undefined8 *)puVar4);
      puVar8 = (ushort *)FUN_0121b430((ulong)local_2c8 | 4);
      FUN_0121b280(auStack_2d8,&local_2dc,uVar2,uVar6,*puVar8 + 1);
      FUN_01211760(*(undefined8 *)puVar3,auStack_2d8);
      *(undefined4 *)(param_1 + 0x180) = 3;
joined_r0x0117f264:
      if (local_2c8[0] != '\0') {
        local_2c8[0] = '\0';
      }
      if (local_b0 != '\0') {
        local_b0 = '\0';
      }
      if (local_100 != '\0') {
        local_100 = '\0';
      }
      if (local_1c0 != '\0') {
        local_1c0 = '\0';
      }
      if (local_214 != '\0') {
        if (local_20c != '\0') {
          local_20c = '\0';
        }
        local_214 = '\0';
      }
      if (local_250 != '\0') {
        local_250 = '\0';
      }
      if (local_264 != '\0') {
        local_264 = '\0';
      }
      if (local_288 != '\0') {
        local_288 = '\0';
      }
      if (local_298 != '\0') {
        local_298 = '\0';
      }
      if (local_2a0 != '\0') {
        local_2a0 = '\0';
        goto joined_r0x0117f40c;
      }
    }
    break;
  case 3:
  case 4:
    FUN_0117f8e0(param_1);
    puVar4 = PTR_DAT_027185f8;
    uVar5 = FUN_0120e820(*(undefined8 *)PTR_DAT_027185f8);
    puVar3 = PTR_DAT_02710958;
    if (1 < uVar5) {
      FUN_01211940(local_2b0,*(undefined8 *)PTR_DAT_02710958);
      pcVar10 = (char *)FUN_01225ea0(local_2b0);
      local_2c8[0] = *pcVar10 != '\0';
      if ((bool)local_2c8[0]) {
        local_2c4 = *(undefined8 *)(pcVar10 + 4);
        local_2bc = *(undefined8 *)(pcVar10 + 0xc);
      }
      local_2dc = 2;
      puVar11 = (undefined2 *)FUN_0121b430((ulong)local_2c8 | 4);
      uVar2 = *puVar11;
      uVar6 = FUN_0120e800(*(undefined8 *)puVar4);
      puVar8 = (ushort *)FUN_0121b430((ulong)local_2c8 | 4);
      FUN_0121b280(auStack_2d8,&local_2dc,uVar2,uVar6,*puVar8 + uVar5);
      FUN_01211760(*(undefined8 *)puVar3,auStack_2d8);
      *(undefined4 *)(param_1 + 0x180) = 4;
      goto joined_r0x0117f264;
    }
    break;
  case 5:
    if (lVar13 == 0) {
      if (_DAT_00000060 != 0) {
        return;
      }
    }
    else {
      FUN_01127680(local_2b0,lVar13);
      lVar14 = *(long *)(local_2b0[0] + 0x60);
      if (local_2b0[0] != 0) {
        (**(code **)(*(long *)(local_2b0[0] + 0x48) + 0x18))();
      }
      if (lVar14 != 0) goto LAB_0117f70c;
    }
    if (*(char *)(param_1 + 0x184) == '\0') goto LAB_0117f610;
    uVar6 = 6;
    goto LAB_0117f704;
  case 6:
    FUN_0117fa60(param_1);
    FUN_0117fc00(param_1);
LAB_0117f39c:
    cVar1 = *(char *)(param_1 + 0x184);
joined_r0x0117f3fc:
    if ((cVar1 == '\0') || (uVar9 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940), (uVar9 & 1) != 0)
       ) {
      uVar6 = 0xb;
      goto LAB_0117f704;
    }
    break;
  case 7:
    uVar9 = FUN_0117fd10(param_1);
    if ((uVar9 & 1) == 0) {
      uVar9 = FUN_0117fa60(param_1);
      if (((uVar9 & 1) == 0) ||
         (iVar7 = *(int *)(param_1 + 400), *(int *)(param_1 + 400) = iVar7 + 1, iVar7 < 0xf))
      goto LAB_0117f39c;
      *(undefined4 *)(param_1 + 400) = 0;
      *(undefined4 *)(param_1 + 0x180) = 6;
      cVar1 = *(char *)(param_1 + 0x184);
      goto joined_r0x0117f3fc;
    }
    break;
  case 8:
    FUN_0117fd10(param_1);
joined_r0x0117f40c:
    if (lVar13 == 0) {
      return;
    }
    goto LAB_0117f70c;
  case 9:
    if (lVar13 == 0) {
      if (_DAT_00000060 != 0) {
        return;
      }
      if (_DAT_00000070 != 0) {
        return;
      }
LAB_0117f630:
      puVar3 = PTR_DAT_02710958;
      FUN_01211940(local_2b0,*(undefined8 *)PTR_DAT_02710958);
      pcVar10 = (char *)FUN_01225ea0(local_2b0);
      local_2c8[0] = *pcVar10 != '\0';
      if ((bool)local_2c8[0]) {
        local_2c4 = *(undefined8 *)(pcVar10 + 4);
        local_2bc = *(undefined8 *)(pcVar10 + 0xc);
      }
      local_2dc = 2;
      puVar11 = (undefined2 *)FUN_0121b430((ulong)local_2c8 | 4);
      uVar2 = *puVar11;
      puVar12 = (undefined4 *)FUN_0121b440((ulong)local_2c8 | 4);
      FUN_0121b280(auStack_2d8,&local_2dc,uVar2,*puVar12,0);
      FUN_01211760(*(undefined8 *)puVar3,auStack_2d8);
      *(undefined4 *)(param_1 + 0x180) = 10;
      goto joined_r0x0117f264;
    }
    FUN_01127680(local_2b0,lVar13);
    lVar14 = *(long *)(local_2b0[0] + 0x60);
    if (local_2b0[0] != 0) {
      (**(code **)(*(long *)(local_2b0[0] + 0x48) + 0x18))();
    }
    if (lVar14 == 0) {
      FUN_01127680(local_2b0,lVar13);
      lVar14 = *(long *)(local_2b0[0] + 0x70);
      if (local_2b0[0] != 0) {
        (**(code **)(*(long *)(local_2b0[0] + 0x48) + 0x18))();
      }
      if (lVar14 == 0) goto LAB_0117f630;
    }
    goto LAB_0117f70c;
  case 0xb:
    if (lVar13 == 0) {
      if (_DAT_00000060 != 0) {
        return;
      }
    }
    else {
      FUN_01127680(local_2b0,lVar13);
      lVar14 = *(long *)(local_2b0[0] + 0x60);
      if (local_2b0[0] != 0) {
        (**(code **)(*(long *)(local_2b0[0] + 0x48) + 0x18))();
      }
      if (lVar14 != 0) goto LAB_0117f70c;
    }
    uVar9 = FUN_011fca80(*(undefined8 *)PTR_DAT_02718f20);
    if ((uVar9 & 1) != 0) {
      uVar6 = 0xc;
      goto LAB_0117f704;
    }
    break;
  case 0xc:
    uVar9 = FUN_011fcf90(*(undefined8 *)PTR_DAT_02718f20);
    if ((uVar9 & 1) == 0) goto LAB_0117f610;
    break;
  case 0xe:
    if (lVar13 == 0) {
      if (_DAT_00000060 != 0) {
        return;
      }
    }
    else {
      FUN_01127680(local_2b0,lVar13);
      lVar14 = *(long *)(local_2b0[0] + 0x60);
      if (local_2b0[0] != 0) {
        (**(code **)(*(long *)(local_2b0[0] + 0x48) + 0x18))();
      }
      if (lVar14 != 0) goto LAB_0117f70c;
    }
    uVar6 = 0xf;
LAB_0117f704:
    *(undefined4 *)(param_1 + 0x180) = uVar6;
  }
  if (lVar13 != 0) {
LAB_0117f70c:
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  return;
}


