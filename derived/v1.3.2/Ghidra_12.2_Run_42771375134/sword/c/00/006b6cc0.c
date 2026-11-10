/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6cc0; name: FUN_006b6cc0
 */


void FUN_006b6cc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_006b9b70(0,*(undefined8 *)(param_1 + 0xf0));
  uVar1 = FUN_006b9b60(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0xf0));
  uVar2 = FUN_006b9b60(*(undefined8 *)(param_1 + 0xf0));
  FUN_006ac4a0(uVar1,uVar2);
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN_006b6cc0();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    FUN_006b8220();
    FUN_006b6cc0();
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  uVar3 = FUN_006b9b40(*(undefined8 *)(param_1 + 0xf0));
  if ((uVar3 & 1) == 0) {
    return;
  }
  FUN_006b9e30(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 8));
  return;
}


