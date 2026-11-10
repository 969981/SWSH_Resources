/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f9760; name: FUN_001f9760
 */


void FUN_001f9760(long param_1,long *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *local_68;
  
  lVar4 = (**(code **)(*param_2 + 0x68))(param_2);
  if (param_1 != lVar4) {
    uVar5 = FUN_00400880();
    FUN_00400890(uVar5,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/NpScene.cpp"
                 ,0x5b,
                 "%s not assigned to scene or assigned to another scene. Call will be ignored!",
                 "PxScene::removeAggregate(): Aggregate");
    return;
  }
  lVar6 = (**(code **)(*param_2 + 0x68))(param_2);
  puVar2 = PTR_DAT_02711080;
  if (lVar6 == lVar4) {
    uVar1 = *(uint *)(param_2 + 8);
    if (uVar1 != 0) {
      uVar9 = 0;
      do {
        while( true ) {
          plVar8 = *(long **)(param_2[9] + uVar9 * 8);
          iVar3 = (**(code **)(*plVar8 + 0x30))(plVar8);
          if (iVar3 != 4) break;
          lVar4 = (**(code **)(*plVar8 + 0x38))(plVar8);
          if (lVar4 != 0) {
            plVar8 = (long *)plVar8[0x30];
            lVar4 = plVar8[0x11];
            iVar3 = (**(code **)(*plVar8 + 0xd8))(plVar8);
            if (iVar3 != 0) {
              uVar10 = 0;
              do {
                FUN_001e50a0(param_2 + 2,*(long *)(lVar4 + uVar10 * 8) + 0x60,0);
                uVar10 = uVar10 + 1;
                uVar7 = (**(code **)(*plVar8 + 0xd8))(plVar8);
              } while (uVar10 < (uVar7 & 0xffffffff));
            }
            FUN_001f9390(param_1,plVar8,param_3 & 1,0);
          }
          uVar9 = uVar9 + 1;
          if (uVar9 == uVar1) goto LAB_001f9908;
        }
        FUN_001e50a0(param_2 + 2,
                     (long)plVar8 + *(long *)(puVar2 + (ulong)*(ushort *)(plVar8 + 1) * 8 + 0x98),0)
        ;
        FUN_001f7fa0(param_1,plVar8,param_3 & 1,0);
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar1);
    }
LAB_001f9908:
    FUN_001cea40(param_1 + 0x10,param_2 + 2);
    local_68 = param_2;
    FUN_001cae10(param_1 + 0x2630,&local_68);
  }
  return;
}


