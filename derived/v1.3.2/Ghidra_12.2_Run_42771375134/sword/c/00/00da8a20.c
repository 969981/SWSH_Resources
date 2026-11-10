/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da8a20; name: FUN_00da8a20
 */


void FUN_00da8a20(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  code *pcVar9;
  ulong uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_350;
  ulong uStack_348;
  undefined8 local_340;
  char *local_338;
  undefined8 local_330;
  long local_328;
  undefined **local_320 [4];
  undefined ***local_300;
  undefined **local_2f0 [4];
  undefined ***local_2d0;
  undefined **local_2c0 [4];
  undefined ***local_2a0;
  undefined **local_290 [4];
  undefined ***local_270;
  undefined **local_260 [4];
  undefined ***local_240;
  undefined **local_230 [4];
  undefined ***local_210;
  undefined **local_200 [4];
  undefined ***local_1e0;
  undefined **local_1d0 [4];
  undefined ***local_1b0;
  undefined **local_1a0 [4];
  undefined ***local_180;
  undefined **local_170 [4];
  undefined ***local_150;
  undefined **local_140 [4];
  undefined ***local_120;
  undefined **local_110 [4];
  undefined ***local_f0;
  undefined **local_e0 [4];
  undefined ***local_c0;
  undefined **local_b0 [4];
  undefined ***local_90;
  
  lVar1 = param_1 + 0xa0;
  lVar6 = lVar1 + (long)*(int *)(param_1 + 0x7c) * 0x4fb0;
  if (1 < *(int *)(param_1 + 0x7c)) {
    lVar6 = lVar1;
  }
  if ((int)*(uint *)(param_1 + 0x78) < 7) {
    uVar8 = *(uint *)(&DAT_02160578 + (ulong)*(uint *)(param_1 + 0x78) * 4);
  }
  else {
    uVar8 = 3;
  }
  uVar10 = (ulong)uVar8;
  pcVar2 = (char *)(param_1 + 0xad70);
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  lVar3 = param_1 + 0xa390;
  lVar4 = param_1 + 0xa470;
  local_b0[0] = &PTR_LAB_0264f2a8;
  local_90 = local_b0;
  FUN_00dab9a0(uVar11,param_1,0,lVar6 + (ulong)uVar8 * 0xff0 + 0x770,lVar4,lVar3,uVar10,local_b0,0);
  if (local_b0 == local_90) {
    pcVar9 = (code *)(*local_90)[4];
LAB_00da8b1c:
    (*pcVar9)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_90)[5];
    goto LAB_00da8b1c;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_e0[0] = &PTR_LAB_0264f2a8;
  local_c0 = local_e0;
  FUN_00dab9a0(uVar11,param_1,1,lVar6 + uVar10 * 0xff0 + 0x880,lVar4,lVar3,uVar10,local_e0,0);
  if (local_e0 == local_c0) {
    pcVar9 = (code *)(*local_c0)[4];
LAB_00da8b98:
    (*pcVar9)();
  }
  else if (local_c0 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_c0)[5];
    goto LAB_00da8b98;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_110[0] = &PTR_LAB_0264f2a8;
  local_f0 = local_110;
  FUN_00dab9a0(uVar11,param_1,2,lVar6 + uVar10 * 0xff0 + 0x990,lVar4,lVar3,uVar10,local_110,0);
  if (local_110 == local_f0) {
    pcVar9 = (code *)(*local_f0)[4];
LAB_00da8c14:
    (*pcVar9)();
  }
  else if (local_f0 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_f0)[5];
    goto LAB_00da8c14;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  lVar5 = param_1 + 0xa350;
  local_140[0] = &PTR_LAB_0264f2f0;
  local_120 = local_140;
  FUN_00dab9a0(uVar11,param_1,3,lVar6 + uVar10 * 0xff0 + 0xaa0,lVar5,lVar3,uVar10,local_140,0);
  if (local_140 == local_120) {
    pcVar9 = (code *)(*local_120)[4];
LAB_00da8ca0:
    (*pcVar9)();
  }
  else if (local_120 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_120)[5];
    goto LAB_00da8ca0;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_170[0] = &PTR_LAB_0264f338;
  local_150 = local_170;
  FUN_00dab9a0(uVar11,param_1,4,lVar6 + uVar10 * 0xff0 + 0xbb0,lVar5,lVar3,uVar10,local_170,0);
  if (local_170 == local_150) {
    pcVar9 = (code *)(*local_150)[4];
LAB_00da8d24:
    (*pcVar9)();
  }
  else if (local_150 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_150)[5];
    goto LAB_00da8d24;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_1a0[0] = &PTR_LAB_0264f338;
  local_180 = local_1a0;
  FUN_00dab9a0(uVar11,param_1,5,lVar6 + uVar10 * 0xff0 + 0xcc0,lVar5,param_1 + 0xa400,uVar10,
               local_1a0,0);
  if (local_1a0 == local_180) {
    pcVar9 = (code *)(*local_180)[4];
LAB_00da8da8:
    (*pcVar9)();
  }
  else if (local_180 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_180)[5];
    goto LAB_00da8da8;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_1d0[0] = &PTR_LAB_0264f338;
  local_1b0 = local_1d0;
  FUN_00dab9a0(uVar11,param_1,6,lVar6 + uVar10 * 0xff0 + 0xdd0,lVar5,lVar3,uVar10,local_1d0,0);
  if (local_1d0 == local_1b0) {
    pcVar9 = (code *)(*local_1b0)[4];
LAB_00da8e2c:
    (*pcVar9)();
  }
  else if (local_1b0 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_1b0)[5];
    goto LAB_00da8e2c;
  }
  if (*(char *)(param_1 + 0x80) == '\0') goto LAB_00da9218;
  lVar6 = param_1 + (long)*(int *)(param_1 + 0x8c) * 0x4fb0 + 0xa0;
  if (1 < *(int *)(param_1 + 0x8c)) {
    lVar6 = lVar1;
  }
  if ((int)*(uint *)(param_1 + 0x88) < 7) {
    uVar8 = *(uint *)(&DAT_02160578 + (ulong)*(uint *)(param_1 + 0x88) * 4);
  }
  else {
    uVar8 = 3;
  }
  uVar10 = (ulong)uVar8;
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_200[0] = &PTR_LAB_0264f2a8;
  local_1e0 = local_200;
  FUN_00dab9a0(uVar11,param_1,7,lVar6 + (ulong)uVar8 * 0xff0 + 0x770,lVar4,lVar3,uVar10,local_200,0)
  ;
  if (local_200 == local_1e0) {
    pcVar9 = (code *)(*local_1e0)[4];
LAB_00da8ef4:
    (*pcVar9)();
  }
  else if (local_1e0 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_1e0)[5];
    goto LAB_00da8ef4;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_230[0] = &PTR_LAB_0264f2a8;
  local_210 = local_230;
  FUN_00dab9a0(uVar11,param_1,8,lVar6 + uVar10 * 0xff0 + 0x880,lVar4,lVar3,uVar10,local_230,0);
  if (local_230 == local_210) {
    pcVar9 = (code *)(*local_210)[4];
LAB_00da8f78:
    (*pcVar9)();
  }
  else if (local_210 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_210)[5];
    goto LAB_00da8f78;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_260[0] = &PTR_LAB_0264f2a8;
  local_240 = local_260;
  FUN_00dab9a0(uVar11,param_1,9,lVar6 + uVar10 * 0xff0 + 0x990,lVar4,lVar3,uVar10,local_260,0);
  if (local_260 == local_240) {
    (*(code *)(*local_240)[4])();
  }
  else if (local_240 != (undefined ***)0x0) {
    (*(code *)(*local_240)[5])();
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_290[0] = &PTR_LAB_0264f2f0;
  local_270 = local_290;
  FUN_00dab9a0(uVar11,param_1,10,lVar6 + uVar10 * 0xff0 + 0xaa0,lVar5,lVar3,uVar10,local_290,0);
  if (local_290 == local_270) {
    pcVar9 = (code *)(*local_270)[4];
LAB_00da90a0:
    (*pcVar9)();
  }
  else if (local_270 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_270)[5];
    goto LAB_00da90a0;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_2c0[0] = &PTR_LAB_0264f338;
  local_2a0 = local_2c0;
  FUN_00dab9a0(uVar11,param_1,0xb,lVar6 + uVar10 * 0xff0 + 0xbb0,lVar5,lVar3,uVar10,local_2c0,0);
  if (local_2c0 == local_2a0) {
    pcVar9 = (code *)(*local_2a0)[4];
LAB_00da911c:
    (*pcVar9)();
  }
  else if (local_2a0 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_2a0)[5];
    goto LAB_00da911c;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_2f0[0] = &PTR_LAB_0264f338;
  local_2d0 = local_2f0;
  FUN_00dab9a0(uVar11,param_1,0xc,lVar6 + uVar10 * 0xff0 + 0xcc0,lVar5,param_1 + 0xa400,uVar10,
               local_2f0,0);
  if (local_2f0 == local_2d0) {
    pcVar9 = (code *)(*local_2d0)[4];
LAB_00da9198:
    (*pcVar9)();
  }
  else if (local_2d0 != (undefined ***)0x0) {
    pcVar9 = (code *)(*local_2d0)[5];
    goto LAB_00da9198;
  }
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  local_320[0] = &PTR_LAB_0264f338;
  local_300 = local_320;
  FUN_00dab9a0(uVar11,param_1,0xd,lVar6 + uVar10 * 0xff0 + 0xdd0,lVar5,lVar3,uVar10,local_320,0);
  if (local_320 == local_300) {
    pcVar9 = (code *)(*local_300)[4];
  }
  else {
    if (local_300 == (undefined ***)0x0) goto LAB_00da9218;
    pcVar9 = (code *)(*local_300)[5];
  }
  (*pcVar9)();
LAB_00da9218:
  puVar7 = PTR_PTR_02718e90;
  fVar12 = (float)(**(code **)PTR_PTR_02718e90)(*(undefined4 *)(param_1 + 0xa354));
  uVar11 = 0;
  if ((*pcVar2 != '\0') && (*(char *)(param_1 + 0x81) == '\0')) {
    uVar11 = *(undefined4 *)(param_1 + 0xa340);
  }
  fVar13 = (float)(**(code **)puVar7)(uVar11);
  if (*(long *)(param_1 + 0xae20) != 0) {
    fVar12 = (fVar12 * -0.5 + 1.0 + -0.5) * fVar13 + 0.5;
    local_350 = CONCAT44(fVar12,fVar12);
    local_340 = 0x207938654bef7fb4;
    uStack_348 = (ulong)(uint)fVar12;
    local_338 = "ProjectionConstant";
    local_330 = 0x12;
    local_328 = 0;
    FUN_00dd45b0(*(long *)(param_1 + 0xae20),&local_340,&local_350);
    if (local_328 != 0) {
      (**(code **)(*(long *)(local_328 + 0x48) + 0x18))();
    }
  }
  return;
}


