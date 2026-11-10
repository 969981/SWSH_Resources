/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155b0b0; name: FUN_0155b0b0
 */


void FUN_0155b0b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *local_28;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    iVar4 = FUN_015616d0();
    if (iVar4 == 2) {
      plVar2 = *(long **)(param_1 + 0xb8);
      for (plVar1 = *(long **)(param_1 + 0xb0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
        if ((*plVar1 != 0) && (*(int *)(*plVar1 + 0x54) != 0)) {
          FUN_0155e1a0(&local_28,*plVar1);
          (**(code **)(*local_28 + 0x40))();
          if (local_28 != (long *)0x0) {
            (**(code **)(local_28[9] + 0x18))();
            local_28 = (long *)0x0;
          }
        }
      }
      puVar3 = *(undefined8 **)(param_1 + 0x118);
      for (puVar5 = *(undefined8 **)(param_1 + 0x110); puVar5 != puVar3; puVar5 = puVar5 + 0x10) {
        (*(code *)*puVar5)(puVar5 + 4);
      }
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
  }
  return;
}


