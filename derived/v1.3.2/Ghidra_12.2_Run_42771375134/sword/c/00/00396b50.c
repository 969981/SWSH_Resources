/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00396b50; name: FUN_00396b50
 */


void FUN_00396b50(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x40);
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x48);
        if (*(long *)(lVar4 + uVar3 * 8) != 0) {
          uVar1 = (**(code **)*param_2)(param_2,0x80000000);
          *(undefined8 *)(lVar4 + uVar3 * 8) = uVar1;
          uVar2 = *(uint *)(param_1 + 0x40);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  return;
}


