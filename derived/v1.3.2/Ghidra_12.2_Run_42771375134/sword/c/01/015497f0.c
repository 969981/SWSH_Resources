/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015497f0; name: FUN_015497f0
 */


undefined8 FUN_015497f0(long param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x1662);
  while ((*(uint *)(param_2 + 8) != (uint)*(ushort *)(pcVar2 + -2) ||
         (*pcVar2 != *(char *)(param_2 + 0x13)))) {
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 4;
    if (0x31 < uVar1) {
      return 0;
    }
  }
  return 1;
}


