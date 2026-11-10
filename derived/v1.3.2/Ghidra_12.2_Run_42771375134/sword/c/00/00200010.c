/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00200010; name: FUN_00200010
 */


void FUN_00200010(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  
  if (param_2 != 0) {
    uVar2 = param_2 * 0x18;
    if ((uVar2 < 0xc1) && (*(char *)(param_1 + 0x30) == '\0')) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      uVar2 = param_1[0x34];
      puVar5 = param_1;
      goto joined_r0x002000c0;
    }
    if (uVar2 != 0) {
      plVar6 = (long *)FUN_00400d30();
      pcVar9 = *(code **)(*plVar6 + 0x10);
      plVar3 = (long *)FUN_00400d60();
      uVar4 = (**(code **)(*plVar3 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::PxBounds3>::getName() [T = physx::PxBounds3]"
      ;
      if ((uVar4 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar5 = (undefined4 *)
               (*pcVar9)(plVar6,uVar2,pcVar1,
                         "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
      uVar2 = param_1[0x34];
      goto joined_r0x002000c0;
    }
  }
  uVar2 = param_1[0x34];
  puVar5 = (undefined4 *)0x0;
joined_r0x002000c0:
  if (uVar2 != 0) {
    puVar7 = *(undefined4 **)(param_1 + 0x32);
    puVar8 = puVar5;
    do {
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
      puVar8[3] = puVar7[3];
      puVar8[4] = puVar7[4];
      puVar8[5] = puVar7[5];
      puVar8 = puVar8 + 6;
      puVar7 = puVar7 + 6;
    } while (puVar8 < puVar5 + (ulong)uVar2 * 6);
  }
  if (-1 < (int)param_1[0x35]) {
    puVar8 = *(undefined4 **)(param_1 + 0x32);
    if (param_1 == puVar8) {
      *(undefined1 *)(param_1 + 0x30) = 0;
    }
    else if (puVar8 != (undefined4 *)0x0) {
      plVar6 = (long *)FUN_00400d30();
      (**(code **)(*plVar6 + 0x18))(plVar6,puVar8);
    }
  }
  *(undefined4 **)(param_1 + 0x32) = puVar5;
  param_1[0x35] = param_2;
  return;
}


