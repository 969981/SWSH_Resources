/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be880; name: FUN_003be880
 */


void FUN_003be880(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 *param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar4 = (undefined4 *)param_2[0x16];
  uVar6 = (undefined4)param_1;
  if (puVar4 == (undefined4 *)0x0) {
    uVar2 = FUN_003bdd30(param_2,param_3,1,1);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_00400880();
      FUN_00400890(uVar3,0x10,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScBodyCore.cpp"
                   ,0x22b,"PxRigidDynamic: setting kinematic target failed, not enough memory.");
      *(undefined4 *)((long)param_2 + 0x9c) = uVar6;
      lVar5 = *param_2;
    }
    else {
      puVar4 = (undefined4 *)param_2[0x16];
      *puVar4 = *param_4;
      puVar4[1] = param_4[1];
      puVar4[2] = param_4[2];
      puVar4[3] = param_4[3];
      puVar4[4] = param_4[4];
      puVar4[5] = param_4[5];
      puVar4[6] = param_4[6];
      *(undefined1 *)(puVar4 + 7) = 1;
      *(undefined4 *)((long)param_2 + 0x9c) = uVar6;
      lVar5 = *param_2;
    }
  }
  else {
    *puVar4 = *param_4;
    puVar4[1] = param_4[1];
    puVar4[2] = param_4[2];
    puVar4[3] = param_4[3];
    puVar4[4] = param_4[4];
    puVar4[5] = param_4[5];
    puVar4[6] = param_4[6];
    *(undefined1 *)(puVar4 + 7) = 1;
    if (*param_2 != 0) {
      FUN_003bf2b0();
    }
    *(undefined4 *)((long)param_2 + 0x9c) = uVar6;
    lVar5 = *param_2;
  }
  if (lVar5 == 0) {
    return;
  }
  plVar1 = *(long **)(*(long *)(lVar5 + 0x48) + 0x760);
  (**(code **)(*plVar1 + 0x30))(plVar1,lVar5 + 0x60,*(uint *)(lVar5 + 0xb0) >> 6);
  FUN_003bfeb0(lVar5);
  FUN_003bfac0(param_1,lVar5,1);
  return;
}


