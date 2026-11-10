/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00945f90; name: FUN_00945f90
 */


undefined8 FUN_00945f90(long param_1,char param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0xb48);
  if (*(byte *)(param_1 + 0xb48) != 0) {
    uVar3 = 0;
    pcVar4 = (char *)(param_1 + 0x61);
    do {
      if ((*pcVar4 == '\0') && (*(long *)(pcVar4 + -0x59) != 0)) {
        cVar1 = FUN_008e0a00();
        if (cVar1 == param_2) {
          return 0;
        }
        uVar2 = (ulong)*(byte *)(param_1 + 0xb48);
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 0x60;
    } while (uVar3 < uVar2);
  }
  return 1;
}


