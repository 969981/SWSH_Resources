/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011d790; name: FUN_0011d790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011d790(long param_1,undefined8 *param_2,long param_3,byte param_4,byte param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined2 uVar14;
  undefined8 *puVar15;
  code *pcVar16;
  undefined8 *local_38;
  
  if ((param_3 != 0) && (*(char *)(param_1 + 0xa40) != '\0')) {
    if (PTR_DAT_02710c38[(ulong)param_5 + (ulong)(uint)param_4 * 7] == '\0') {
      *param_2 = 0;
      *(undefined1 *)((long)param_2 + 0xb) = 0;
    }
    else if ((param_4 < 5) && (param_5 < 5)) {
      if ((param_4 == 0) || (param_5 == 0)) {
        puVar13 = *(undefined8 **)(param_1 + 0x668);
        if (puVar13 == (undefined8 *)0x0) {
          iVar2 = *(int *)(param_1 + 0x660);
          if (iVar2 == 0) {
            puVar12 = (undefined8 *)0x0;
          }
          else {
            plVar9 = (long *)FUN_00400d30();
            pcVar16 = *(code **)(*plVar9 + 0x10);
            plVar10 = (long *)FUN_00400d60();
            uVar11 = (**(code **)(*plVar10 + 0x28))();
            pcVar1 = 
            "static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::SpherePersistentContactManifold>::getName() [T = physx::Gu::SpherePersistentContactManifold]"
            ;
            if ((uVar11 & 1) == 0) {
              pcVar1 = "<allocation names disabled>";
            }
            puVar12 = (undefined8 *)
                      (*pcVar16)(plVar9,iVar2,pcVar1,
                                 "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
          }
          uVar3 = *(uint *)(param_1 + 0x650);
          if (uVar3 < (*(uint *)(param_1 + 0x654) & 0x7fffffff)) {
            *(undefined8 **)(*(long *)(param_1 + 0x648) + (ulong)uVar3 * 8) = puVar12;
            *(uint *)(param_1 + 0x650) = uVar3 + 1;
          }
          else {
            local_38 = puVar12;
            FUN_0011ffd0(param_1 + 0x440,&local_38);
          }
          if (puVar12 + (ulong)*(uint *)(param_1 + 0x658) * 0xe + -0xe < puVar12) {
            puVar13 = *(undefined8 **)(param_1 + 0x668);
          }
          else {
            puVar8 = puVar12 + (ulong)*(uint *)(param_1 + 0x658) * 0xe + -0xe;
            puVar15 = *(undefined8 **)(param_1 + 0x668);
            do {
              puVar13 = puVar8;
              *puVar13 = puVar15;
              puVar8 = puVar13 + -0xe;
              puVar15 = puVar13;
            } while (puVar12 <= puVar13 + -0xe);
            *(undefined8 **)(param_1 + 0x668) = puVar13;
          }
        }
        *(undefined8 *)(param_1 + 0x668) = *puVar13;
        *(int *)(param_1 + 0x65c) = *(int *)(param_1 + 0x65c) + 1;
        uVar14 = 0x100;
      }
      else {
        puVar13 = *(undefined8 **)(param_1 + 0x430);
        if (puVar13 == (undefined8 *)0x0) {
          iVar2 = *(int *)(param_1 + 0x428);
          if (iVar2 == 0) {
            puVar12 = (undefined8 *)0x0;
          }
          else {
            plVar9 = (long *)FUN_00400d30();
            pcVar16 = *(code **)(*plVar9 + 0x10);
            plVar10 = (long *)FUN_00400d60();
            uVar11 = (**(code **)(*plVar10 + 0x28))();
            pcVar1 = 
            "static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::LargePersistentContactManifold>::getName() [T = physx::Gu::LargePersistentContactManifold]"
            ;
            if ((uVar11 & 1) == 0) {
              pcVar1 = "<allocation names disabled>";
            }
            puVar12 = (undefined8 *)
                      (*pcVar16)(plVar9,iVar2,pcVar1,
                                 "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
          }
          uVar3 = *(uint *)(param_1 + 0x418);
          if (uVar3 < (*(uint *)(param_1 + 0x41c) & 0x7fffffff)) {
            *(undefined8 **)(*(long *)(param_1 + 0x410) + (ulong)uVar3 * 8) = puVar12;
            *(uint *)(param_1 + 0x418) = uVar3 + 1;
          }
          else {
            local_38 = puVar12;
            FUN_001201a0(param_1 + 0x208,&local_38);
          }
          if (puVar12 + (ulong)*(uint *)(param_1 + 0x420) * 0x20 + -0x20 < puVar12) {
            puVar13 = *(undefined8 **)(param_1 + 0x430);
          }
          else {
            puVar8 = puVar12 + (ulong)*(uint *)(param_1 + 0x420) * 0x20 + -0x20;
            puVar15 = *(undefined8 **)(param_1 + 0x430);
            do {
              puVar13 = puVar8;
              *puVar13 = puVar15;
              puVar8 = puVar13 + -0x20;
              puVar15 = puVar13;
            } while (puVar12 <= puVar13 + -0x20);
            *(undefined8 **)(param_1 + 0x430) = puVar13;
          }
        }
        *(undefined8 *)(param_1 + 0x430) = *puVar13;
        *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + 1;
        uVar14 = 0x400;
      }
      *(undefined2 *)(puVar13 + 4) = uVar14;
      uVar7 = _UNK_01d4b8f8;
      uVar6 = _DAT_01d4b8f0;
      uVar5 = _UNK_01d4b578;
      uVar4 = _DAT_01d4b570;
      *(undefined1 *)((long)puVar13 + 0x22) = 0;
      puVar13[1] = uVar5;
      *puVar13 = uVar4;
      puVar13[3] = uVar7;
      puVar13[2] = uVar6;
      puVar13[6] = puVar13 + 8;
      *(byte *)((long)param_2 + 0xb) = *(byte *)((long)param_2 + 0xb) | 1;
      uVar6 = _UNK_01d4b8f8;
      uVar5 = _DAT_01d4b8f0;
      *param_2 = puVar13;
      *(undefined1 *)((long)puVar13 + 0x22) = 0;
      *(undefined1 *)(puVar13 + 4) = 0;
      uVar4 = _DAT_01d4b570;
      puVar13[1] = _UNK_01d4b578;
      *puVar13 = uVar4;
      puVar13[3] = uVar6;
      puVar13[2] = uVar5;
    }
    else {
      *param_2 = 0;
      *(byte *)((long)param_2 + 0xb) = *(byte *)((long)param_2 + 0xb) | 3;
    }
  }
  return;
}


