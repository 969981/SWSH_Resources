/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006743f0; name: FUN_006743f0
 */


void FUN_006743f0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  *(undefined **)(param_1 + 0xf0) = PTR_DAT_02713f98 + 0x10;
  puVar1 = (undefined8 *)(param_1 + 0x118);
  if (((*(byte *)(param_1 + 0x138) & 1) == 0) && (plVar5 = (long *)*puVar1, plVar5 != (long *)0x0))
  {
    plVar6 = *(long **)(param_1 + 0xf8);
    if (plVar6 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar6 + 0x50))(plVar6,plVar5);
      if (lVar3 != 0) {
        plVar7 = plVar5;
        do {
          if ((*(byte *)(plVar7 + 5) & 1) == 0) {
            if (plVar7[1] != 0) {
              plVar4 = (long *)*plVar7;
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x48))
                          (plVar4,plVar7[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
              }
              plVar7[1] = 0;
            }
            plVar7[1] = 0;
          }
          plVar7 = plVar7 + 6;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      (**(code **)(*plVar6 + 0x48))
                (plVar6,plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  plVar5 = (long *)(param_1 + 200);
  *puVar1 = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  puVar2 = PTR_DAT_02714328 + 0x10;
  *(undefined **)(param_1 + 0xa0) = puVar2;
  if (((*(byte *)(param_1 + 0xe8) & 1) == 0) && (*plVar5 != 0)) {
    plVar6 = *(long **)(param_1 + 0xa8);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x48))
                (plVar6,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar5 = 0;
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *plVar5 = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  plVar5 = (long *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x50) = puVar2;
  if (((*(byte *)(param_1 + 0x98) & 1) == 0) && (*plVar5 != 0)) {
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x48))
                (plVar6,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar5 = 0;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *plVar5 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  return;
}


