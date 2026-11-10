/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cb420; name: FUN_006cb420
 */


void FUN_006cb420(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  uVar2 = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x180) = uVar1;
  *(undefined8 *)(param_1 + 0x188) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  uVar2 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 400) = uVar1;
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  return;
}


