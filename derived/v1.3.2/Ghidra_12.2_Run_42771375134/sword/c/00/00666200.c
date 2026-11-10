/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00666200; name: FUN_00666200
 */


void FUN_00666200(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_02714328 + 0x10;
  plVar3 = (long *)(param_1 + 0xe8);
  *(undefined **)(param_1 + 0xc0) = puVar1;
  if (((*(byte *)(param_1 + 0x108) & 1) == 0) && (*plVar3 != 0)) {
    plVar2 = *(long **)(param_1 + 200);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  plVar3 = (long *)(param_1 + 0x78);
  *(undefined **)(param_1 + 0x50) = puVar1;
  if (((*(byte *)(param_1 + 0x98) & 1) == 0) && (*plVar3 != 0)) {
    plVar2 = *(long **)(param_1 + 0x58);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar3 = 0;
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar3 = *(long **)(param_1 + 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x48))
                  (plVar3,*(long *)(param_1 + 0x10),"../../../../Include\\SiCore/SiCore_String.inl",
                   0xe1);
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


