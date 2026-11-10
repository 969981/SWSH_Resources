/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b3250; name: FUN_003b3250
 */


undefined8 FUN_003b3250(long *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_24;
  
  local_40 = local_40 & 0xffffffff00000000;
  FUN_003b34d0(param_1 + 2,param_2[1],&local_40);
  local_50 = (ulong)local_50._4_4_ << 0x20;
  local_40 = 0;
  local_38 = 0;
  FUN_001ed3f0(&local_40,param_2[1],&local_50);
  local_24 = 0;
  local_50 = 0;
  uStack_48 = 0;
                    /* try { // try from 003b32a8 to 003b32b3 has its CatchHandler @ 003b3488 */
  FUN_001ed3f0(&local_50,param_2[1],&local_24);
  if (param_2[1] != 0) {
    lVar5 = 0;
    puVar6 = (undefined4 *)(*(long *)(param_2 + 2) + 4);
    do {
      iVar1 = puVar6[-1];
      if (iVar1 == 0 || 4 < iVar1) {
                    /* try { // try from 003b33c8 to 003b33e7 has its CatchHandler @ 003b3440 */
        uVar8 = FUN_00400880();
        FUN_00400890(uVar8,4,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/cloth/ScClothFabricCore.cpp"
                     ,0xea,"createClothFabric() failed, invalid phase type specified");
        uVar8 = 0;
        if (uStack_48 < 0) goto LAB_003b33f4;
        goto LAB_003b33a0;
      }
      lVar7 = lVar5 * 4;
      lVar5 = lVar5 + 1;
      *(int *)(param_1[2] + lVar7) = iVar1;
      *(undefined4 *)(local_40 + lVar7) = *puVar6;
      puVar6 = puVar6 + 2;
    } while ((uint)lVar5 < (uint)param_2[1]);
  }
  lVar5 = *(long *)(param_2 + 6);
  uVar2 = *(uint *)(lVar5 + (ulong)(param_2[4] - 1) * 4);
                    /* try { // try from 003b3370 to 003b3383 has its CatchHandler @ 003b3450 */
  lVar5 = (**(code **)(**(long **)(*(long *)PTR_DAT_02711060 + 0x10) + 0x10))
                    (*(long **)(*(long *)PTR_DAT_02711060 + 0x10),*param_2,local_40,
                     local_40 + (local_38 & 0xffffffff) * 4,lVar5,
                     lVar5 + (ulong)(uint)param_2[4] * 4,*(long *)(param_2 + 10),
                     *(long *)(param_2 + 10) + (ulong)uVar2 * 4,*(long *)(param_2 + 8),
                     *(long *)(param_2 + 8) + (ulong)(uVar2 << 1) * 4,*(long *)(param_2 + 0xe),
                     *(long *)(param_2 + 0xe) + (ulong)(uint)param_2[0xc] * 4,
                     *(long *)(param_2 + 0x10),
                     *(long *)(param_2 + 0x10) + (ulong)(uint)param_2[0xc] * 4,
                     *(long *)(param_2 + 0x12),
                     *(long *)(param_2 + 0x12) + (ulong)(uint)(param_2[0x14] * 3) * 4);
  *param_1 = lVar5;
  uVar8 = 1;
  *(short *)(lVar5 + 8) = *(short *)(lVar5 + 8) + 1;
  if (-1 < uStack_48) {
LAB_003b33a0:
    lVar5 = local_50;
    if (((uStack_48._4_4_ & 0x7fffffff) != 0) && (local_50 != 0)) {
                    /* try { // try from 003b33b0 to 003b33c3 has its CatchHandler @ 003b343c */
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
    }
  }
LAB_003b33f4:
  uVar3 = local_40;
  if (((-1 < (long)local_38) && ((local_38 & 0x7fffffff00000000) != 0)) && (local_40 != 0)) {
                    /* try { // try from 003b340c to 003b341f has its CatchHandler @ 003b3438 */
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar3);
  }
  return uVar8;
}


