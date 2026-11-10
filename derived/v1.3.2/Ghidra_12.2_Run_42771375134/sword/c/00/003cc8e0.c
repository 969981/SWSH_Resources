/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cc8e0; name: FUN_003cc8e0
 */


undefined8 FUN_003cc8e0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  code *pcVar15;
  byte local_98 [8];
  undefined8 *local_90 [4];
  byte local_70 [24];
  byte local_58 [4];
  char local_54 [4];
  
  uVar4 = *(uint *)(param_2 + 3) >> 0x1d & 3;
  uVar5 = *(uint *)(param_3 + 3) >> 0x1d & 3;
  puVar13 = param_2;
  if (uVar4 <= uVar5) {
    puVar13 = param_3;
  }
  if (uVar4 <= uVar5) {
    param_3 = param_2;
  }
  uVar4 = *(uint *)(puVar13 + 3) >> 0x1d & 3;
  if (uVar4 == 0) {
    uVar9 = FUN_003cd1d0(param_1,puVar13,param_3,0,0,0);
    return uVar9;
  }
  if (uVar4 == 2) {
    if ((*(byte *)((long)param_3 + 0x1b) & 0x60) == 0) {
      uVar9 = FUN_003ae360(puVar13[4]);
      FUN_003b4110();
      FUN_003b17c0(local_98);
      if ((((local_98[0] >> 3 & 1) != 0) &&
          (FUN_003cce70(local_70,param_1,puVar13,param_3,0xffffffff,1), (local_70[0] & 3) == 0)) &&
         (uVar7 = FUN_003b68c0(uVar9,param_3), (uVar7 & 1) != 0)) {
        local_90[0] = param_3;
        plVar8 = (long *)FUN_003d6d40(param_1 + 0x1498,local_90,local_54);
        if (local_54[0] == '\0') {
          lVar14 = 0;
          plVar8[2] = 0;
          *plVar8 = (long)local_90[0];
          plVar8[1] = 0;
          puVar13 = *(undefined8 **)(param_1 + 0x1490);
        }
        else {
          lVar14 = plVar8[2];
          puVar13 = *(undefined8 **)(param_1 + 0x1490);
        }
        if (puVar13 == (undefined8 *)0x0) {
          iVar2 = *(int *)(param_1 + 0x1488);
          if (iVar2 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          else {
            plVar8 = (long *)FUN_00400d30();
            pcVar15 = *(code **)(*plVar8 + 0x10);
            plVar10 = (long *)FUN_00400d60();
            uVar7 = (**(code **)(*plVar10 + 0x28))();
            pcVar1 = 
            "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::NPhaseCore::ClothListElement>::getName() [T = physx::Sc::NPhaseCore::ClothListElement]"
            ;
            if ((uVar7 & 1) == 0) {
              pcVar1 = "<allocation names disabled>";
            }
            puVar11 = (undefined8 *)
                      (*pcVar15)(plVar8,iVar2,pcVar1,
                                 "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
          }
          uVar4 = *(uint *)(param_1 + 0x1478);
          if (uVar4 < (*(uint *)(param_1 + 0x147c) & 0x7fffffff)) {
            *(undefined8 **)(*(long *)(param_1 + 0x1470) + (ulong)uVar4 * 8) = puVar11;
            *(uint *)(param_1 + 0x1478) = uVar4 + 1;
          }
          else {
            local_90[0] = puVar11;
            FUN_003d6ec0(param_1 + 0x1268,local_90);
          }
          if (puVar11 + (ulong)*(uint *)(param_1 + 0x1480) * 2 + -2 < puVar11) {
            puVar13 = *(undefined8 **)(param_1 + 0x1490);
          }
          else {
            puVar6 = puVar11 + (ulong)*(uint *)(param_1 + 0x1480) * 2 + -2;
            puVar12 = *(undefined8 **)(param_1 + 0x1490);
            do {
              puVar13 = puVar6;
              *puVar13 = puVar12;
              puVar6 = puVar13 + -2;
              puVar12 = puVar13;
            } while (puVar11 <= puVar13 + -2);
            *(undefined8 **)(param_1 + 0x1490) = puVar13;
          }
        }
        *(undefined8 *)(param_1 + 0x1490) = *puVar13;
        *(int *)(param_1 + 0x1484) = *(int *)(param_1 + 0x1484) + 1;
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = uVar9;
          puVar13[1] = lVar14;
        }
        local_90[0] = param_3;
        plVar8 = (long *)FUN_003d6d40(param_1 + 0x1498,local_90,local_54);
        if (local_54[0] == '\0') {
          *plVar8 = (long)local_90[0];
          plVar8[1] = 0;
          plVar8[2] = 0;
        }
        plVar8[2] = (long)puVar13;
      }
    }
  }
  else if ((uVar4 == 1) && ((*(byte *)((long)param_3 + 0x1b) & 0x60) == 0)) {
    cVar3 = *(char *)(*(long *)(param_3[2] + 0x50) + 0xd);
    if (cVar3 == '\x04' || cVar3 == '\x01') {
      FUN_003ade70(puVar13);
      FUN_003aa4d0();
      FUN_003a9b40(local_58);
      if ((local_58[0] >> 1 & 1) == 0) {
        return 0;
      }
    }
    iVar2 = *(int *)(param_3[8] + 0x48);
    if (iVar2 - 5U < 2) {
      FUN_003adec0(puVar13,local_70);
      if (iVar2 == 5) {
        FUN_003fc170(param_3,local_90);
        uVar7 = FUN_002a6730(param_3[8] + 0x48,local_90,local_70);
      }
      else {
        if (iVar2 != 6) {
          return 0;
        }
        FUN_003fc170(param_3,local_90);
        uVar7 = FUN_002a8b40(param_3[8] + 0x48,local_90,local_70);
      }
      if ((uVar7 & 1) == 0) {
        return 0;
      }
    }
    uVar9 = FUN_003ccc30(param_1,puVar13,param_3,param_4);
    return uVar9;
  }
  return 0;
}


