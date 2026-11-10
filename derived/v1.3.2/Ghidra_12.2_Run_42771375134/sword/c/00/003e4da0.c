/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e4da0; name: FUN_003e4da0
 */


void FUN_003e4da0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined1 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [40];
  long local_b0;
  char local_a8;
  undefined1 *local_a0;
  char local_98;
  undefined1 *local_90;
  char local_88;
  int local_7c;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_58;
  int local_54;
  
  puVar8 = auStack_e0;
  uVar3 = *(undefined4 *)(*(long *)(param_1 + 0x738) + 0xb4);
  FUN_0011e630(*(undefined8 *)(param_1 + 0x720),&local_54,&local_58,&local_7c);
  uVar4 = local_54 * 0x10;
  local_88 = 0x400 < uVar4;
  if (uVar4 < 0x401) {
    puVar8 = auStack_e0 + -((ulong)uVar4 + 0xf & 0x1fffffff0);
    local_90 = puVar8;
  }
  else {
                    /* try { // try from 003e4e00 to 003e4e13 has its CatchHandler @ 003e5254 */
    local_90 = (undefined1 *)
               FUN_00401b30(auStack_d8,uVar4,
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                            ,0xe45);
  }
  uVar4 = local_58 * 0x10;
  local_98 = 0x400 < uVar4;
  if (uVar4 < 0x401) {
    puVar8 = puVar8 + -((ulong)uVar4 + 0xf & 0x1fffffff0);
    local_a0 = puVar8;
  }
  else {
                    /* try { // try from 003e4e58 to 003e4e6b has its CatchHandler @ 003e5244 */
    local_a0 = (undefined1 *)
               FUN_00401b30(auStack_d8,uVar4,
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                            ,0xe46);
  }
  uVar4 = local_7c * 0x10;
  local_a8 = 0x400 < uVar4;
  if (uVar4 < 0x401) {
    local_b0 = (long)puVar8 - ((ulong)uVar4 + 0xf & 0x1fffffff0);
  }
  else {
                    /* try { // try from 003e4eb0 to 003e4ec3 has its CatchHandler @ 003e5234 */
    local_b0 = FUN_00401b30(auStack_d8,uVar4,
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                            ,0xe47);
  }
                    /* try { // try from 003e4ef8 to 003e4eff has its CatchHandler @ 003e5264 */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0xa8))(auStack_d8);
  uVar4 = *(uint *)(param_1 + 0x110c);
                    /* try { // try from 003e4f14 to 003e4f23 has its CatchHandler @ 003e5274 */
  FUN_0011e660(*(undefined8 *)(param_1 + 0x720),local_90,&local_54,local_a0,&local_58,local_b0,
               &local_7c);
  if (0 < local_54) {
    lVar14 = 0;
    lVar15 = 8;
    do {
      lVar13 = *(long *)(local_90 + lVar15);
                    /* try { // try from 003e4f48 to 003e4f87 has its CatchHandler @ 003e52c4 */
      FUN_003ce740(*(undefined8 *)(param_1 + 0x1048),lVar13,uVar3,1,auStack_d8);
      FUN_003fb100(lVar13,uVar3,1,auStack_d8,uVar4 >> 4 & 1);
      if ((*(byte *)(lVar13 + 0x42) >> 2 & 1) == 0) {
        FUN_00114380(*(undefined8 *)(param_1 + 0x748),*(undefined4 *)(lVar13 + 0x60));
      }
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0x10;
    } while (lVar14 < local_54);
  }
  if (0 < local_58) {
    lVar14 = 0;
    lVar15 = 8;
    do {
      lVar13 = *(long *)(local_a0 + lVar15);
                    /* try { // try from 003e4fc8 to 003e506f has its CatchHandler @ 003e52b4 */
      uVar5 = FUN_003fb250(lVar13,uVar3,1,auStack_d8,uVar4 >> 4 & 1);
      if (((uVar5 & 1) != 0) && ((*(byte *)(lVar13 + 0x42) >> 2 & 1) == 0)) {
        lVar6 = FUN_003fc7b0(*(undefined8 *)(lVar13 + 0x28));
        local_70 = FUN_003fc7b0(*(undefined8 *)(lVar13 + 0x30));
        local_68 = *(undefined4 *)(lVar6 + 0x58);
        uStack_64 = *(undefined4 *)(local_70 + 0x58);
        local_78 = lVar6;
        if (*(uint *)(param_1 + 0x1180) < (*(uint *)(param_1 + 0x1184) & 0x7fffffff)) {
          plVar9 = (long *)(*(long *)(param_1 + 0x1178) + (ulong)*(uint *)(param_1 + 0x1180) * 0x18)
          ;
          plVar9[2] = CONCAT44(uStack_64,local_68);
          plVar9[1] = local_70;
          *plVar9 = lVar6;
          *(int *)(param_1 + 0x1180) = *(int *)(param_1 + 0x1180) + 1;
        }
        else {
          FUN_003f75f0(param_1 + 0x1178,&local_78);
        }
      }
      FUN_00114490(*(undefined8 *)(param_1 + 0x748),*(undefined4 *)(lVar13 + 0x60));
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0x10;
    } while (lVar14 < local_58);
  }
  if (0 < local_7c) {
    lVar14 = 0;
    lVar15 = 8;
    iVar7 = local_7c;
    do {
      if ((*(byte *)(*(long *)(local_b0 + lVar15) + 0x40) >> 5 & 1) != 0) {
                    /* try { // try from 003e50a8 to 003e50c3 has its CatchHandler @ 003e5294 */
        FUN_003f9c50(*(long *)(local_b0 + lVar15),0x20,0,0,uVar3,0,auStack_d8);
        iVar7 = local_7c;
      }
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0x10;
    } while (lVar14 < iVar7);
  }
                    /* try { // try from 003e50d8 to 003e50e3 has its CatchHandler @ 003e5274 */
  FUN_003e5320(param_1,uVar3);
  uVar4 = *(uint *)(param_1 + 0x830);
  lVar14 = *(long *)(param_1 + 0x728) + 0x70;
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      uVar10 = *(ulong *)(param_1 + 0x828);
      puVar1 = (undefined8 *)(uVar10 + uVar5 * 8);
      uVar2 = (int)uVar5 + 8;
      if (uVar2 < uVar4) {
        uVar10 = *(ulong *)(uVar10 + (ulong)uVar2 * 8);
        uVar12 = uVar10 + 0x1ff >> 6;
        uVar11 = uVar10 >> 6;
        uVar2 = ((int)uVar12 + 1) - (int)uVar11;
        lVar15 = (1 - uVar11) + uVar12;
        if ((uVar2 & 7) != 0) {
          lVar13 = -((ulong)uVar2 & 7);
          do {
            Hint_Prefetch(uVar10,0,0,0);
            uVar10 = uVar10 + 0x40;
            lVar15 = lVar15 + -1;
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0);
        }
        if (6 < uVar12 - uVar11) {
          do {
            Hint_Prefetch(uVar10,0,0,0);
            Hint_Prefetch(uVar10 + 0x40,0,0,0);
            lVar15 = lVar15 + -8;
            Hint_Prefetch(uVar10 + 0x80,0,0,0);
            Hint_Prefetch(uVar10 + 0xc0,0,0,0);
            Hint_Prefetch(uVar10 + 0x100,0,0,0);
            Hint_Prefetch(uVar10 + 0x140,0,0,0);
            Hint_Prefetch(uVar10 + 0x180,0,0,0);
            Hint_Prefetch(uVar10 + 0x1c0,0,0,0);
            uVar10 = uVar10 + 0x200;
          } while (lVar15 != 0);
        }
      }
                    /* try { // try from 003e5188 to 003e518f has its CatchHandler @ 003e52a4 */
      FUN_003bf520(uVar10,*puVar1,lVar14);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  if (*(int *)(param_1 + 0x89c) != 0) {
    lVar15 = *(long *)(param_1 + 0x870);
    uVar5 = 0;
    do {
                    /* try { // try from 003e51b4 to 003e51bb has its CatchHandler @ 003e5284 */
      FUN_003bbbb0(**(undefined8 **)(lVar15 + uVar5 * 8),lVar14);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x89c));
  }
  if (local_a8 != '\0') {
                    /* try { // try from 003e51d8 to 003e51df has its CatchHandler @ 003e5230 */
    FUN_00401ce0(&local_b0,local_b0);
  }
  if (local_98 != '\0') {
                    /* try { // try from 003e51ec to 003e51f3 has its CatchHandler @ 003e522c */
    FUN_00401ce0(&local_a0,local_a0);
  }
  if (local_88 != '\0') {
                    /* try { // try from 003e5200 to 003e5207 has its CatchHandler @ 003e5228 */
    FUN_00401ce0(&local_90,local_90);
  }
  return;
}


