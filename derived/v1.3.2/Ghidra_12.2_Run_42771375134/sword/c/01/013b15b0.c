/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b15b0; name: FUN_013b15b0
 */


/* WARNING: Removing unreachable block (ram,0x013b1928) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_013b15b0(long param_1,undefined8 param_2)

{
  uint uVar1;
  float fVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  float fVar9;
  uint local_2d4;
  code *local_2d0;
  undefined *puStack_2c8;
  undefined *local_2c0;
  undefined1 **ppuStack_2b8;
  undefined1 *local_2b0;
  code *local_2a8;
  undefined1 *local_2a0;
  undefined1 *puStack_298;
  long local_290;
  undefined4 *puStack_288;
  undefined8 *local_280;
  undefined8 *local_278;
  undefined8 *puStack_270;
  undefined8 **local_268;
  undefined4 local_224;
  undefined1 *local_220;
  code *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined1 *local_1a0;
  code *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined8 *local_180 [12];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined *local_100;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined1 **local_e0 [14];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
    local_108 = param_2;
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar5 = FUN_0132d9a0();
    for (; param_2 = local_108, plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        local_110 = puVar7 + -10;
        lVar5 = puVar7[0x61];
        goto joined_r0x013b1a38;
      }
    }
  }
  local_110 = (undefined8 *)0x0;
  lVar5 = lRam0000000000000358;
  local_108 = param_2;
joined_r0x013b1a38:
  uStack_118 = 0;
  local_120 = 0;
  if (lVar5 != 0) {
    uStack_118 = 0;
    local_120 = 0;
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_180[0] = &uStack_118;
  local_1a0 = &LAB_013b2ef0;
  local_198 = FUN_013b2f30;
  local_e0[0] = &local_1a0;
  local_190 = &LAB_013b2f40;
  local_188 = &LAB_013b2f50;
  local_100 = PTR_LAB_02727810;
  local_f8 = (code *)PTR_FUN_02727818;
  local_f0 = PTR_LAB_02727820;
  local_e8 = PTR_LAB_02727828;
  FUN_01306a00(lVar5,&local_100);
  pcVar3 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar3)(local_e0);
  }
  pcVar3 = local_198;
  if (local_198 != (code *)0x0) {
    local_190 = (undefined1 *)0x0;
    local_188 = (undefined1 *)0x0;
    local_1a0 = (undefined1 *)0x0;
    local_198 = (code *)0x0;
    (*pcVar3)(local_180);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar5 = local_110[0x6b];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_200 = &local_108;
  local_1f8 = &local_120;
  local_210 = &LAB_013b3240;
  local_208 = &LAB_013b3250;
  local_e0[0] = &local_220;
  local_220 = &LAB_013b2f60;
  local_218 = FUN_013b3230;
  local_100 = PTR_LAB_02727728;
  local_f8 = (code *)PTR_FUN_02727730;
  local_f0 = PTR_LAB_02727738;
  local_e8 = PTR_LAB_02727740;
  FUN_01306a00(lVar5,&local_100);
  pcVar3 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar3)(local_e0);
  }
  pcVar3 = local_218;
  if (local_218 != (code *)0x0) {
    local_210 = (undefined1 *)0x0;
    local_208 = (undefined1 *)0x0;
    local_220 = (undefined1 *)0x0;
    local_218 = (code *)0x0;
    (*pcVar3)(&local_200);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  fVar2 = DAT_01d4bec4;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x90)) goto LAB_013b186c;
  do {
    if (4 < iVar8) {
LAB_013b197c:
      puVar7 = local_110;
      *(undefined1 *)(param_1 + 0x95) = 1;
      FUN_013b1c80(&local_100,param_1,0x167ae16636f290cf);
      FUN_013b3260(puVar7[0xc],0x91f9ec803b4e9d02,&local_100,0);
      if (local_f0 != (undefined *)0x0) {
        (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
        local_f0 = (undefined *)0x0;
      }
      if (local_f8 != (code *)0x0) {
        (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
      }
      local_2d4 = 1;
LAB_013b19fc:
      return local_2d4 & 1;
    }
    while( true ) {
      local_224 = 9;
      puVar7 = (undefined8 *)FUN_012e3520(local_108);
      puStack_288 = &local_224;
      local_280 = &uStack_118;
      local_278 = &local_120;
      local_2b0 = &LAB_013b35a0;
      local_2a8 = FUN_013b3920;
      local_2a0 = &LAB_013b3a00;
      puStack_298 = &LAB_013b3a20;
      local_290 = param_1;
      puStack_270 = &local_108;
      local_268 = &local_110;
      FUN_012b81e0(&local_100,*puVar7,&local_2b0);
      pcVar3 = local_2a8;
      if (local_2a8 != (code *)0x0) {
        local_2a0 = (undefined1 *)0x0;
        puStack_298 = (undefined1 *)0x0;
        local_2b0 = (undefined1 *)0x0;
        local_2a8 = (code *)0x0;
        (*pcVar3)(&local_290);
      }
      if ((char)local_100 == '\0') {
        iVar8 = 5;
      }
      else {
        uVar6 = FUN_012e9430(local_108);
        if (((int)local_e0[0] != 1) || ((uVar6 & 1) != 0)) {
          uVar1 = *(int *)(param_1 + 0x90) + 1;
          *(uint *)(param_1 + 0x90) = uVar1;
          *(undefined4 *)(param_1 + (ulong)(uVar1 & 1) * 4 + 0x78) = local_224;
          local_2d0 = local_f8;
          puStack_2c8 = local_f0;
          local_2c0 = local_e8;
          ppuStack_2b8 = local_e0[0];
          local_2d4 = FUN_013b2130(param_1,local_108,&local_2d0);
          goto LAB_013b19fc;
        }
        iVar8 = iVar8 + 1;
      }
      if (*(int *)(param_1 + 0x90) < 1) break;
LAB_013b186c:
      fVar9 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
      if ((4 < iVar8) || (fVar9 < fVar2)) goto LAB_013b197c;
    }
  } while( true );
}


