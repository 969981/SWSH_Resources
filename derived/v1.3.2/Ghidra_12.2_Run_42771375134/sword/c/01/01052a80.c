/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052a80; name: FUN_01052a80
 */


void FUN_01052a80(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x148);
  uVar2 = param_2[1];
  *(undefined8 *)(lVar1 + 0x178) = param_2[3];
  uVar3 = *param_2;
  uVar4 = param_2[2];
  *(undefined8 *)(lVar1 + 0x168) = uVar2;
  *(undefined8 *)(lVar1 + 0x170) = uVar4;
  *(undefined8 *)(lVar1 + 0x160) = uVar3;
  return;
}


