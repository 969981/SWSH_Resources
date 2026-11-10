/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0072ed30; name: FUN_0072ed30
 */


void FUN_0072ed30(long *param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  if ((undefined8 *)*param_1 != puVar1) {
    puVar2 = (undefined8 *)*param_1;
    do {
      puVar3 = puVar2 + 1;
      (**(code **)(*(long *)*puVar2 + 0x70))((long *)*puVar2,param_2 & 1,param_3);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
  }
  return;
}


