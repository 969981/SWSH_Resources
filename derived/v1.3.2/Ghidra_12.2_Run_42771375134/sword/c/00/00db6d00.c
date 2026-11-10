/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db6d00; name: FUN_00db6d00
 */


void FUN_00db6d00(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*param_2 + 0x78);
  uVar1 = *(undefined8 *)(*param_2 + 0x70);
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  uVar2 = *(undefined8 *)(*param_2 + 0x88);
  uVar1 = *(undefined8 *)(*param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  uVar2 = *(undefined8 *)(*param_2 + 0x98);
  uVar1 = *(undefined8 *)(*param_2 + 0x90);
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  return;
}


