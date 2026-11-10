/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d1650; name: FUN_005d1650
 */


void FUN_005d1650(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  puVar4 = (ulong *)(param_1 + 0x78);
  uVar3 = *puVar4;
  plVar1 = (long *)(param_1 + 0x90);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      plVar2 = *(long **)(*plVar1 + uVar5 * 8);
      if (plVar2 != (long *)0x0) {
        *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
        (**(code **)(*plVar2 + 0x18))();
        uVar3 = *puVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (((*(byte *)(param_1 + 0xb0) & 1) == 0) && (*plVar1 != 0)) {
    plVar2 = *(long **)(param_1 + 0x70);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x48))
                (plVar2,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar1 = 0;
  }
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}


