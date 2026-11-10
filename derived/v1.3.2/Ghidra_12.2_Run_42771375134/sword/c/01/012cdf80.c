/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012cdf80; name: FUN_012cdf80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012cdf80(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long local_1f8;
  undefined1 *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  long *local_1d0;
  long *local_1c8;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long *local_130 [13];
  long local_c8;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 **local_a0 [12];
  long local_38;
  
  lVar5 = FUN_012cc840();
  iVar1 = *(int *)(lVar5 + 0x7c);
  iVar2 = *(int *)(lVar5 + 0x80);
  local_38 = lVar5;
  FUN_01371830(param_1);
  if (iVar1 == 8) {
    lVar5 = *(long *)(lVar5 + 0x358);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_130[0] = &local_38;
    local_150 = &LAB_012d4700;
    local_148 = FUN_012d48c0;
    local_a0[0] = &local_150;
    local_140 = &LAB_012d48d0;
    local_138 = &LAB_012d48e0;
    local_c0 = PTR_LAB_027277e8;
    local_b8 = (code *)PTR_FUN_027277f0;
    local_b0 = PTR_LAB_027277f8;
    local_a8 = PTR_LAB_02727800;
    FUN_01307150(&local_c8,lVar5,&local_c0);
    pcVar4 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined *)0x0;
      local_a8 = (undefined *)0x0;
      local_c0 = (undefined *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar4)(local_a0);
    }
    if (local_c8 != 0) {
      (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
      local_c8 = 0;
    }
    pcVar4 = local_148;
    if (local_148 != (code *)0x0) {
      local_140 = (undefined1 *)0x0;
      local_138 = (undefined1 *)0x0;
      local_150 = (undefined1 *)0x0;
      local_148 = (code *)0x0;
      (*pcVar4)(local_130);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
  }
  if (iVar2 == 0xb) {
    lVar5 = *(long *)(local_38 + 0x3e0);
    if (lVar5 == 0) {
      FUN_013363c0(0,2);
      return;
    }
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_013363c0(lVar5,2);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    return;
  }
  if (iVar2 != 8) {
    return;
  }
  FUN_0132f7f0(&local_c0,local_38);
  uVar6 = FUN_01329830(local_c0);
  if ((uVar6 & 1) == 0) {
    FUN_0132f7f0(&local_158,local_38);
    uVar6 = FUN_01329820(local_158);
    uVar6 = uVar6 & 0xffffffff;
    lVar5 = 0;
    if (local_158 != 0) {
      (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
      local_158 = 0;
      lVar5 = local_158;
    }
  }
  else {
    uVar6 = 0;
    lVar5 = local_158;
  }
  local_158 = lVar5;
  if (local_c0 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = (undefined *)0x0;
  }
  if ((uVar6 & 1) == 0) {
    return;
  }
  uVar3 = *(undefined4 *)(local_38 + 0x1d4);
  lVar5 = *(long *)(local_38 + 0x368);
  if (lVar5 == 0) {
    FUN_0136ae00(0,uVar3);
    lVar5 = *(long *)(local_38 + 0x368);
    if (lVar5 == 0) goto LAB_012ce24c;
LAB_012ce1c0:
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_01369ea0(&local_158,lVar5);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  else {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0136ae00(lVar5,uVar3);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = *(long *)(local_38 + 0x368);
    if (lVar5 != 0) goto LAB_012ce1c0;
LAB_012ce24c:
    FUN_01369ea0(&local_158,0);
  }
  if (local_158 == 0) {
    return;
  }
  lVar5 = *(long *)(local_38 + 0x370);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    local_168 = local_158;
    if (local_158 == 0) goto LAB_012ce274;
  }
  local_168 = local_158;
  (**(code **)(*(long *)(local_158 + 0x48) + 0x10))();
LAB_012ce274:
  local_170 = 0;
  FUN_0133b0c0(&local_160,lVar5,&local_168,&local_170);
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    local_170 = 0;
  }
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
    local_168 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  fVar8 = (float)_DAT_02a6c120;
  fVar9 = (float)((ulong)_DAT_02a6c120 >> 0x20);
  fVar10 = (float)((ulong)uRam0000000002a6c128 >> 0x20);
  *(ulong *)(local_160 + 0xb8) =
       CONCAT44(fVar10 + fVar10,(float)uRam0000000002a6c128 + (float)uRam0000000002a6c128);
  *(ulong *)(local_160 + 0xb0) = CONCAT44(fVar9 + fVar9,fVar8 + fVar8);
  *(undefined1 *)(local_160 + 0xc0) = 1;
  lVar5 = *(long *)(local_38 + 0x358);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_1d0 = &local_160;
  local_1c8 = &local_38;
  local_1e0 = &LAB_012d4aa0;
  local_1d8 = &LAB_012d4ab0;
  local_a0[0] = &local_1f0;
  local_1f0 = &LAB_012d48f0;
  local_1e8 = FUN_012d4a90;
  local_c0 = PTR_LAB_02727690;
  local_b8 = (code *)PTR_FUN_02727698;
  local_b0 = PTR_LAB_027276a0;
  local_a8 = PTR_LAB_027276a8;
  FUN_01306a00(lVar5,&local_c0);
  pcVar4 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar4)(local_a0);
  }
  pcVar4 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (undefined1 *)0x0;
    local_1f0 = (undefined1 *)0x0;
    local_1e8 = (code *)0x0;
    (*pcVar4)(&local_1d0);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar5 = *(long *)(local_38 + 0x3e0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_1f8 = local_160;
  if (local_160 != 0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x10))();
  }
  FUN_01336080(lVar5,&local_1f8);
  if (local_1f8 != 0) {
    (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
    local_1f8 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_160 != 0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
    local_160 = 0;
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
  }
  return;
}


