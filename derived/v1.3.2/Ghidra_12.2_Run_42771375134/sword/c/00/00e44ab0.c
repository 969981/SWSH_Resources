/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e44ab0; name: FUN_00e44ab0
 */


bool FUN_00e44ab0(long param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x360) == 0) {
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x360) + 0x80);
    bVar1 = false;
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(int *)(lVar4 + 0x54) == 0) {
        bVar1 = false;
      }
      else {
        puVar5 = *(undefined8 **)(lVar4 + 0x60);
        plVar2 = (long *)(**(code **)*puVar5)(puVar5);
        lVar4 = FUN_006cb2c0();
        for (; plVar2 != (long *)lVar4; plVar2 = (long *)*plVar2) {
        }
        bVar1 = puVar5[0x22] != 0;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  return bVar1;
}


