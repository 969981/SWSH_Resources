/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006500e0; name: FUN_006500e0
 */


undefined8 FUN_006500e0(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  plVar4 = *(long **)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x40);
  plVar3 = plVar4;
  if (plVar2 != plVar4) {
    plVar1 = (long *)(param_1 + 0x60);
    if (((*(byte *)(param_1 + 0x80) & 1) == 0) && (*plVar1 != 0)) {
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        plVar3 = *(long **)(param_1 + 8);
      }
      *plVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(long **)(param_1 + 0x40) = plVar4;
  }
  plVar4 = *(long **)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x88) = 1;
  plVar2 = plVar3;
  if (plVar4 != plVar3) {
    plVar1 = (long *)(param_1 + 0xb8);
    if (((*(byte *)(param_1 + 0xd8) & 1) == 0) && (*plVar1 != 0)) {
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        plVar2 = *(long **)(param_1 + 8);
      }
      *plVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(long **)(param_1 + 0x98) = plVar3;
  }
  plVar4 = *(long **)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe0) = 2;
  plVar3 = plVar2;
  if (plVar4 != plVar2) {
    plVar1 = (long *)(param_1 + 0x110);
    if (((*(byte *)(param_1 + 0x130) & 1) == 0) && (*plVar1 != 0)) {
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x48))
                  (plVar4,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        plVar3 = *(long **)(param_1 + 8);
      }
      *plVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(long **)(param_1 + 0xf0) = plVar2;
  }
  plVar2 = *(long **)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x138) = 3;
  if (plVar2 != plVar3) {
    plVar4 = (long *)(param_1 + 0x168);
    if (((*(byte *)(param_1 + 0x188) & 1) == 0) && (*plVar4 != 0)) {
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*plVar4,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
      }
      *plVar4 = 0;
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(long **)(param_1 + 0x148) = plVar3;
  }
  return 1;
}


