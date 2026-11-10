/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e0430; name: FUN_001e0430
 */


void FUN_001e0430(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
    uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x58))();
    uVar2 = FUN_003c1520(param_1 + 0x38,uVar1);
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
  }
  return;
}


