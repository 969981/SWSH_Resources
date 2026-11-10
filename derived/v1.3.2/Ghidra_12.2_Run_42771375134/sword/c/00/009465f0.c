/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009465f0; name: FUN_009465f0
 */


undefined8 FUN_009465f0(long param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0xb48);
  if (*(byte *)(param_1 + 0xb48) != 0) {
    uVar5 = 0;
    puVar4 = (undefined4 *)(param_1 + 0x5c);
    do {
      if ((puVar4[-0x13] != 0 && puVar4[-0x13] != 6) && (*(long *)(puVar4 + -0x15) != 0)) {
        cVar1 = FUN_008e0a00();
        if (cVar1 == param_2) {
          if (*(char *)((long)puVar4 + 5) == '\0') {
            uVar2 = FUN_00946d90(*puVar4,1);
            *puVar4 = uVar2;
            return 1;
          }
          return 0;
        }
        uVar3 = (ulong)*(byte *)(param_1 + 0xb48);
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0x18;
    } while (uVar5 < uVar3);
  }
  return 0;
}


