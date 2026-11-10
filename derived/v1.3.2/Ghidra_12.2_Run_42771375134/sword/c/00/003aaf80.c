/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aaf80; name: FUN_003aaf80
 */


void FUN_003aaf80(long param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  code *pcVar13;
  long *plVar14;
  long local_88;
  uint local_80;
  long local_78;
  uint local_70;
  undefined8 *local_68;
  
  (**(code **)(**(long **)(param_1 + 0x58) + 0x10))(*(long **)(param_1 + 0x58),&local_88);
  if (local_70 != 0) {
    uVar12 = 0;
    do {
      puVar6 = (undefined8 *)(**(code **)(**(long **)(local_78 + uVar12 * 8) + 0x20))();
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6);
        *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + -1;
        *puVar6 = *(undefined8 *)(param_1 + 0x290);
        *(undefined8 **)(param_1 + 0x290) = puVar6;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < local_70);
  }
  if (local_80 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        plVar14 = *(long **)(local_88 + uVar12 * 8);
        uVar2 = *(undefined4 *)(param_1 + 0x2a0);
        puVar6 = *(undefined8 **)(param_1 + 0x290);
        if (puVar6 == (undefined8 *)0x0) break;
        *(undefined8 *)(param_1 + 0x290) = *puVar6;
        *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + 1;
LAB_003ab150:
        FUN_003add20(puVar6,param_1,uVar2,plVar14);
        uVar4 = *(uint *)(param_1 + 0x2a0);
        local_68 = puVar6;
        if (uVar4 < (*(uint *)(param_1 + 0x2a4) & 0x7fffffff)) {
          *(undefined8 **)(*(long *)(param_1 + 0x298) + (ulong)uVar4 * 8) = puVar6;
          *(uint *)(param_1 + 0x2a0) = uVar4 + 1;
          uVar12 = uVar12 + 1;
          if (local_80 <= uVar12) {
            return;
          }
        }
        else {
          FUN_003ad480(param_1 + 0x298,&local_68);
          uVar12 = uVar12 + 1;
          if (local_80 <= uVar12) {
            return;
          }
        }
      }
      iVar3 = *(int *)(param_1 + 0x288);
      if (iVar3 == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        plVar7 = (long *)FUN_00400d30();
        pcVar13 = *(code **)(*plVar7 + 0x10);
        plVar8 = (long *)FUN_00400d60();
        uVar9 = (**(code **)(*plVar8 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ParticlePacketShape>::getName() [T = physx::Sc::ParticlePacketShape]"
        ;
        if ((uVar9 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar10 = (undefined8 *)
                  (*pcVar13)(plVar7,iVar3,pcVar1,
                             "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
      }
      uVar4 = *(uint *)(param_1 + 0x278);
      local_68 = puVar10;
      if (uVar4 < (*(uint *)(param_1 + 0x27c) & 0x7fffffff)) {
        *(undefined8 **)(*(long *)(param_1 + 0x270) + (ulong)uVar4 * 8) = puVar10;
        *(uint *)(param_1 + 0x278) = uVar4 + 1;
      }
      else {
        FUN_003ad2b0(param_1 + 0x68,&local_68);
      }
      if (puVar10 + (ulong)*(uint *)(param_1 + 0x280) * 0xc + -0xc < puVar10) {
        puVar6 = *(undefined8 **)(param_1 + 0x290);
      }
      else {
        puVar5 = puVar10 + (ulong)*(uint *)(param_1 + 0x280) * 0xc + -0xc;
        puVar11 = *(undefined8 **)(param_1 + 0x290);
        do {
          puVar6 = puVar5;
          *puVar6 = puVar11;
          puVar5 = puVar6 + -0xc;
          puVar11 = puVar6;
        } while (puVar10 <= puVar6 + -0xc);
        *(undefined8 **)(param_1 + 0x290) = puVar6;
      }
      *(undefined8 *)(param_1 + 0x290) = *puVar6;
      *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + 1;
      if (puVar6 != (undefined8 *)0x0) goto LAB_003ab150;
      local_68 = (undefined8 *)0x0;
      (**(code **)(*plVar14 + 0x28))(plVar14);
      uVar12 = uVar12 + 1;
    } while (uVar12 < local_80);
  }
  return;
}


