/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc0cb0; name: FUN_00dc0cb0
 */


void FUN_00dc0cb0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_2 + 0x460);
  for (plVar2 = *(long **)(param_2 + 0x458); plVar2 != plVar3; plVar2 = plVar2 + 0x30) {
    if ((*plVar2 == *param_3) && (lVar1 = FUN_00794780(plVar2[0x24]), lVar1 != 0)) {
      FUN_019d6670(param_1);
    }
  }
  return;
}


