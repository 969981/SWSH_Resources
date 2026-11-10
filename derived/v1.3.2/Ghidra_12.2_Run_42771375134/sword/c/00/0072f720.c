/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072f720; name: FUN_0072f720
 */


void FUN_0072f720(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)param_1[1];
  for (param_1 = (long *)*param_1; param_1 != plVar1; param_1 = param_1 + 1) {
    lVar3 = *param_1;
    *(undefined8 *)(lVar3 + 0x80) = *param_2;
    *(undefined8 *)(lVar3 + 0x88) = param_2[1];
    *(undefined8 *)(lVar3 + 0x90) = param_2[2];
    lVar4 = param_2[3];
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar3 + 0x98);
    *(long *)(lVar3 + 0x98) = lVar4;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  return;
}


