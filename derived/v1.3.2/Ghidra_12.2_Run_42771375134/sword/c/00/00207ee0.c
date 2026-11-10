/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207ee0; name: FUN_00207ee0
 */


void FUN_00207ee0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 8);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      while (*(short *)(param_1 + 0x18) == 1) {
        if (((long *)(param_1 + 0x10))[uVar2] == 0xffffffff) goto LAB_00207f2c;
LAB_00207f4c:
        FUN_0039a730(param_2);
        uVar2 = uVar2 + 1;
        if (uVar1 == uVar2) {
          return;
        }
      }
      if (*(long *)(*(long *)(param_1 + 0x10) + uVar2 * 8) != 0xffffffff) goto LAB_00207f4c;
LAB_00207f2c:
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}


