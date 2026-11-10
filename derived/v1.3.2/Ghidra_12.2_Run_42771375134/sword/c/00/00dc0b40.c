/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0b40; name: FUN_00dc0b40
 */


void FUN_00dc0b40(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0x460);
  for (plVar2 = *(long **)(param_1 + 0x458); plVar2 != plVar3; plVar2 = plVar2 + 0x30) {
    if (*plVar2 == *param_2) {
      plVar2[0x25] = *param_3;
      plVar2[0x26] = param_3[1];
      plVar2[0x27] = param_3[2];
      lVar4 = param_3[3];
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar1 = plVar2[0x28];
      plVar2[0x28] = lVar4;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


