/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e9bd0; name: FUN_008e9bd0
 */


void FUN_008e9bd0(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  puVar8 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4,0x18,8);
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_4;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  FUN_009fc1c0(puVar8,param_4);
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  local_38 = param_2;
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))();
  }
  FUN_009fc400(puVar8,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar9 = *(long *)(param_1 + 0x418);
  if (lVar9 != 0) {
    local_48 = lVar9;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    FUN_009fd2e0(puVar8,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    local_50 = *(long *)(param_1 + 0x418);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN_009fd4a0(puVar8,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  lVar9 = *(long *)(param_1 + 0x420);
  if (lVar9 != 0) {
    local_48 = lVar9;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    FUN_009fd2e0(puVar8,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    local_50 = *(long *)(param_1 + 0x420);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN_009fd4a0(puVar8,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  lVar9 = *(long *)(param_1 + 0x428);
  if (lVar9 != 0) {
    local_48 = lVar9;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    FUN_009fd2e0(puVar8,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    local_50 = *(long *)(param_1 + 0x428);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN_009fd4a0(puVar8,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  lVar9 = *(long *)(param_1 + 0x430);
  if (lVar9 != 0) {
    local_48 = lVar9;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    FUN_009fd2e0(puVar8,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    local_50 = *(long *)(param_1 + 0x430);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN_009fd4a0(puVar8,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  lVar9 = *(long *)(param_1 + 0x438);
  if (lVar9 != 0) {
    local_48 = lVar9;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    FUN_009fd2e0(puVar8,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    local_50 = *(long *)(param_1 + 0x438);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN_009fd4a0(puVar8,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8);
    (**(code **)(*param_4 + 0x18))(param_4,puVar8,0x18,8);
  }
  bVar3 = FUN_009ff0e0(param_2);
  if (bVar3 < 3) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(&DAT_02149948 + (long)(char)bVar3 * 4);
  }
  cVar4 = FUN_009ff120(param_2);
  if (cVar4 == '\x02') {
    sVar5 = FUN_009fe1a0(param_2,6);
    sVar5 = sVar5 * 0x3c;
    sVar6 = FUN_009fe1a0(param_2,7);
    sVar6 = sVar6 * 0x3c;
  }
  else if (cVar4 == '\x01') {
    sVar6 = FUN_009fe1a0(param_2,7);
    sVar5 = 0;
    sVar6 = sVar6 * 0x3c;
  }
  else if (cVar4 == '\0') {
    sVar5 = FUN_009fe1a0(param_2,6);
    sVar6 = 0;
    sVar5 = sVar5 * 0x3c;
  }
  else {
    sVar6 = 0;
    sVar5 = 0;
  }
  uVar7 = FUN_009fe1a0(param_2,8);
  *(undefined2 *)(param_1 + 0xa5e) = uVar7;
  *(short *)(param_1 + 0xa5a) = sVar5;
  *(short *)(param_1 + 0xa5c) = sVar6;
  uVar10 = FUN_009fed30(param_2,6);
  uVar1 = *(uint *)(param_1 + 0xa70) & 0xfffffdff;
  if ((uVar10 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0xa70) | 0x200;
  }
  *(uint *)(param_1 + 0xa70) = uVar1;
  uVar10 = FUN_009fed30(param_2,7);
  uVar1 = *(uint *)(param_1 + 0xa70) | 0x200000;
  if ((uVar10 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0xa70) & 0xffdfffff;
  }
  *(uint *)(param_1 + 0xa70) = uVar1;
  uVar10 = FUN_009feab0(param_2);
  if (((uVar10 & 1) != 0) &&
     ((cVar4 = FUN_009fed10(param_2), cVar4 == '\x06' ||
      ((cVar4 = FUN_009fed10(param_2), cVar4 == '\b' &&
       (uVar10 = FUN_009fed30(param_2,8), (uVar10 & 1) != 0)))))) {
    *(undefined1 *)(param_1 + 0xa60) = 1;
    uVar10 = FUN_009fed30(param_2,8);
    if ((uVar10 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x411) = 1;
      cVar4 = FUN_009ff160(param_2);
      goto joined_r0x008ea0ac;
    }
  }
  cVar4 = FUN_009ff160(param_2);
joined_r0x008ea0ac:
  if (cVar4 == '\0') {
    uVar2 = 0xa794a627ed850471;
    if (*(char *)(param_1 + 0x3b9) != '\0') {
      uVar2 = 0xcdb8b54649071c03;
    }
    FUN_01001bc0(uVar2,param_1 + 800);
    local_70 = 0x7340add758451ea;
    pcStack_68 = "a_btl35_vs01";
    local_60 = 0xc;
    local_58 = 0;
    FUN_010011e0(&local_70,param_1 + 0x1c0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
  }
  else {
    lVar9 = param_1 + 800;
    if (cVar4 == '\x01') {
      FUN_01001bc0(0x656eadae8919cdc7,lVar9);
      local_90 = 0x9899a43ace435588;
      pcStack_88 = "a_btl36_vs02";
      local_80 = 0xc;
      local_78 = 0;
      FUN_010011e0(&local_90,param_1 + 0x1c0);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      }
    }
    else if (cVar4 == '\x02') {
      FUN_01001bc0(0xfceb79812a615b35,lVar9);
      local_b0 = 0x9899a43ace435588;
      pcStack_a8 = "a_btl36_vs02";
      local_a0 = 0xc;
      local_98 = 0;
      FUN_010011e0(&local_b0,param_1 + 0x1c0);
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      }
    }
    else {
      FUN_01001bc0(0xa794a627ed850471,lVar9);
      local_d0 = 0x7340add758451ea;
      pcStack_c8 = "a_btl35_vs01";
      local_c0 = 0xc;
      local_b8 = 0;
      FUN_010011e0(&local_d0,param_1 + 0x1c0);
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


