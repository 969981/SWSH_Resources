/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cb220; name: FUN_005cb220
 */


void FUN_005cb220(long param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar7 = (undefined8 *)(param_1 + 0x90);
  uVar3 = *puVar7;
  if ((int)uVar3 < 1) {
    bVar1 = *(byte *)(param_1 + 200);
  }
  else {
    plVar5 = *(long **)(param_1 + 8);
    plVar2 = (long *)(param_1 + 0xa8);
    if (plVar5 == (long *)0x0) {
      lVar8 = 0;
      do {
        if (*(long *)(param_1 + 0x120) <= lVar8) {
          *(undefined8 *)(*plVar2 + lVar8 * 8) = 0;
          uVar3 = *puVar7;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uVar3);
    }
    else {
      lVar8 = 0;
      do {
        if (*(long *)(param_1 + 0x120) <= lVar8) {
          puVar4 = (undefined8 *)(*plVar2 + lVar8 * 8);
          puVar6 = (undefined8 *)*puVar4;
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6);
            (**(code **)(*plVar5 + 0x48))
                      (plVar5,puVar6,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiCore/Source/SiCore_Reflection.cpp",
                       0x50);
            puVar4 = (undefined8 *)(*plVar2 + lVar8 * 8);
          }
          *puVar4 = 0;
          uVar3 = *puVar7;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uVar3);
    }
    bVar1 = *(byte *)(param_1 + 200);
  }
  if ((bVar1 & 1) == 0) {
    lVar8 = *(long *)(param_1 + 0xa8);
    if (lVar8 != 0) {
      plVar2 = *(long **)(param_1 + 0x88);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,lVar8,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *(long *)(param_1 + 0xa8) = 0;
    }
  }
  *puVar7 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  plVar2 = (long *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (((*(byte *)(param_1 + 0x118) & 1) == 0) && (*plVar2 != 0)) {
    plVar5 = *(long **)(param_1 + 0xd8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x48))
                (plVar5,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar2 = 0;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}


