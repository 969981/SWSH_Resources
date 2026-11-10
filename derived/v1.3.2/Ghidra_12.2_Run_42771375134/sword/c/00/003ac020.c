/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ac020; name: FUN_003ac020
 */


undefined8 FUN_003ac020(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  ulong uStack_78;
  long local_70;
  ulong uStack_68;
  
  local_80 = 0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_003ad680(&local_70,(int)param_2[1],&local_80);
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
                    /* try { // try from 003ac070 to 003ac07b has its CatchHandler @ 003ac264 */
  FUN_003ad870(&local_80,(int)param_2[1],&local_90);
  if ((int)param_2[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar10 = 0;
    do {
      lVar1 = local_80;
      lVar11 = *(long *)(*param_2 + uVar10 * 8);
      uVar5 = *(uint *)(lVar11 + 0x2a0);
      if (uVar5 == 0) {
        uVar5 = 0;
        puVar3 = (undefined8 *)0x0;
      }
      else {
                    /* try { // try from 003ac0b0 to 003ac0cf has its CatchHandler @ 003ac274 */
        plVar2 = (long *)FUN_00400d30();
        puVar3 = (undefined8 *)
                 (**(code **)(*plVar2 + 0x10))
                           (plVar2,(ulong)uVar5 << 3,"NonTrackedAlloc",
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/particles/ScParticleSystemSim.cpp"
                            ,0x329);
        uVar5 = *(uint *)(lVar11 + 0x2a0);
        uVar6 = (ulong)uVar5;
        if (uVar5 != 0) {
          if (uVar6 - 1 < 3) {
            lVar8 = 0;
          }
          else {
            lVar8 = 0;
            puVar9 = puVar3;
            do {
              lVar7 = lVar8 * 8;
              lVar8 = lVar8 + 4;
              *puVar9 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x298) + lVar7) + 0x50);
              puVar9[1] = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x298) + lVar7 + 8) + 0x50);
              puVar9[2] = *(undefined8 *)
                           (*(long *)(*(long *)(lVar11 + 0x298) + lVar7 + 0x10) + 0x50);
              puVar9[3] = *(undefined8 *)
                           (*(long *)(*(long *)(lVar11 + 0x298) + lVar7 + 0x18) + 0x50);
              puVar9 = puVar9 + 4;
            } while (uVar6 - (uVar6 & 3) != lVar8);
          }
          if ((uVar5 & 3) != 0) {
            lVar8 = lVar8 << 3;
            lVar7 = -(uVar6 & 3);
            do {
              *(undefined8 *)((long)puVar3 + lVar8) =
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x298) + lVar8) + 0x50);
              lVar8 = lVar8 + 8;
              lVar7 = lVar7 + 1;
            } while (lVar7 != 0);
          }
        }
      }
      plVar2 = (long *)(lVar1 + uVar10 * 0x10);
      *plVar2 = (long)puVar3;
      *(uint *)(plVar2 + 1) = uVar5;
      *(undefined8 *)(local_70 + uVar10 * 8) =
           *(undefined8 *)(*(long *)(*param_2 + uVar10 * 8) + 0x58);
      uVar6 = (ulong)*(uint *)(param_2 + 1);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
                    /* try { // try from 003ac1e0 to 003ac1ef has its CatchHandler @ 003ac254 */
  uVar4 = (**(code **)(*param_1 + 0x18))(param_1,local_70,local_80,uVar6,param_3);
  if ((-1 < (long)uStack_78) && ((uStack_78 & 0x7fffffff00000000) != 0)) {
                    /* try { // try from 003ac204 to 003ac20b has its CatchHandler @ 003ac250 */
    FUN_00401ce0(&local_80,local_80);
  }
  if ((-1 < (long)uStack_68) && ((uStack_68 & 0x7fffffff00000000) != 0)) {
                    /* try { // try from 003ac220 to 003ac227 has its CatchHandler @ 003ac24c */
    FUN_00401ce0(&local_70,local_70);
  }
  return uVar4;
}


