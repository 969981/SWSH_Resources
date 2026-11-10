/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020adc0; name: FUN_0020adc0
 */


undefined8 FUN_0020adc0(long param_1,uint param_2,undefined1 *param_3,int param_4)

{
  int *piVar1;
  long *plVar2;
  uint *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined1 auStack_d0 [4];
  uint local_cc;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  byte local_90;
  undefined1 *local_88;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined1 local_66;
  
  uVar9 = (ulong)param_2;
  piVar1 = (int *)(param_1 + (ulong)param_2 * 4 + 0x54);
  if (param_3 == (undefined1 *)0x0) {
    uVar11 = *piVar1 + 1;
    if (uVar11 < 0x41) {
      puVar6 = auStack_d0 + -((ulong)uVar11 * 0x18 + 0xf & 0x3ffffffff0);
      uVar11 = 1;
    }
    else {
      puVar6 = (undefined1 *)
               FUN_00401b30(&local_b0,(ulong)uVar11 * 0x18,
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpVolumeCache.cpp"
                            ,0xc1);
      if (puVar6 == (undefined1 *)0x0) {
        *(undefined1 *)(param_1 + uVar9 + 0x90) = 1;
        uVar8 = FUN_00400880();
        FUN_00400890(uVar8,0x10,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpVolumeCache.cpp"
                     ,0xc5,
                     "PxVolumeCache::fill(): Fallback memory allocation failed, mMaxShapeCount = %d. Try reducing the cache size."
                     ,*piVar1);
        return 3;
      }
      uVar11 = 0;
    }
  }
  else {
    uVar11 = 0;
    puVar6 = param_3;
  }
  lVar4 = param_1 + uVar9 * 0x10;
  plVar2 = (long *)(lVar4 + 0x68);
  local_b0 = (undefined *)0x0;
  local_a8 = 0;
  FUN_0020b0a0(plVar2,0,&local_b0);
  local_68 = 1;
  if (param_2 != 0) {
    local_68 = 2;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_66 = 0;
  local_98 = 0xffffffff;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = puVar6;
  local_80 = *piVar1 + 1;
  local_7c = 0;
  local_b0 = PTR_DAT_02711238 + 0x10;
  if (param_3 == (undefined1 *)0x0) {
    plVar7 = (long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x68) + -0x10);
                    /* try { // try from 0020af1c to 0020af2b has its CatchHandler @ 0020b094 */
    (**(code **)(*plVar7 + 0x308))(plVar7,param_1 + 8,param_1 + 0x38,&local_b0,&local_78,0);
    param_4 = local_7c + (uint)local_90;
    if (param_4 <= *piVar1) goto LAB_0020af44;
  }
  else if (param_4 <= *piVar1) {
LAB_0020af44:
    local_cc = uVar11;
    local_c8 = uVar9;
    if (0 < param_4) {
      lVar12 = 0;
      puVar3 = (uint *)(lVar4 + 0x70);
      puVar10 = (undefined8 *)(puVar6 + 8);
      do {
        while( true ) {
          local_c0 = 0;
          local_b8 = 0;
          local_c0 = puVar10[-1];
          local_b8 = *puVar10;
          if ((*(uint *)(lVar4 + 0x74) & 0x7fffffff) <= *puVar3) break;
          puVar5 = (undefined8 *)(*plVar2 + (ulong)*puVar3 * 0x10);
          puVar5[1] = local_b8;
          *puVar5 = local_c0;
          *puVar3 = *puVar3 + 1;
          lVar12 = lVar12 + 1;
          puVar10 = puVar10 + 3;
          if (param_4 <= lVar12) goto LAB_0020afe4;
        }
                    /* try { // try from 0020afc8 to 0020afd3 has its CatchHandler @ 0020b098 */
        FUN_0020da70(plVar2,&local_c0);
        lVar12 = lVar12 + 1;
        puVar10 = puVar10 + 3;
      } while (lVar12 < param_4);
    }
LAB_0020afe4:
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x2c);
    }
    else {
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(*(long *)(param_1 + 0x60) + 0x5c);
    }
    *(undefined1 *)(param_1 + local_c8 + 0x90) = 0;
    if ((local_cc & 1) == 0 && puVar6 != param_3) {
                    /* try { // try from 0020b024 to 0020b02f has its CatchHandler @ 0020b08c */
      FUN_00401ce0(&local_c0,puVar6);
      return 0;
    }
    return 0;
  }
  if (uVar11 == 0 && puVar6 != param_3) {
                    /* try { // try from 0020aee8 to 0020aef3 has its CatchHandler @ 0020b090 */
    FUN_00401ce0(&local_c0,puVar6);
  }
  *(undefined1 *)(param_1 + uVar9 + 0x90) = 1;
  return 1;
}


