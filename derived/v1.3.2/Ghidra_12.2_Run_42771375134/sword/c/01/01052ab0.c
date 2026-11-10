/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052ab0; name: FUN_01052ab0
 */


void FUN_01052ab0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x148);
  param_1[1] = *(undefined8 *)(lVar2 + 0x168);
  *param_1 = *(undefined8 *)(lVar2 + 0x160);
  uVar1 = *(undefined8 *)(lVar2 + 0x178);
  param_1[2] = *(undefined8 *)(lVar2 + 0x170);
  param_1[3] = uVar1;
  return;
}


