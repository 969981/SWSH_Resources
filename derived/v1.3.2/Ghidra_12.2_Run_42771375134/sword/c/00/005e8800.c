/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e8800; name: FUN_005e8800
 */


void FUN_005e8800(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  FUN_005e8be0(*(undefined8 *)(param_1 + 8),param_1 + 0x18,0);
  puVar6 = (undefined8 *)(param_1 + 0x78);
  uVar3 = *puVar6;
  if (0 < (int)uVar3) {
    lVar4 = 0;
    lVar5 = 0x28;
    do {
      lVar7 = *(long *)(param_1 + 0x90);
      plVar1 = *(long **)(lVar7 + lVar5);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))();
        *(undefined8 *)(lVar7 + lVar5) = 0;
        uVar3 = *puVar6;
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x30;
    } while (lVar4 < (int)uVar3);
  }
  plVar1 = (long *)(param_1 + 0x130);
  if (((*(byte *)(param_1 + 0x150) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x110);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  plVar2 = (long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x150) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (((*(byte *)(param_1 + 0xb0) & 1) == 0) && (lVar4 = *plVar2, lVar4 != 0)) {
    plVar1 = *(long **)(param_1 + 0x70);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,lVar4);
      (**(code **)(*plVar1 + 0x48))(plVar1,lVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  plVar1 = (long *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *plVar2 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (((*(byte *)(param_1 + 0x100) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0xc0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  return;
}


