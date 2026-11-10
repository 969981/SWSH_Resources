/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148e720; name: FUN_0148e720
 */


void FUN_0148e720(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 local_38;
  
  uVar1 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5e0));
  uVar2 = FUN_0087d610(uVar1,2);
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_0087ee60(uVar1), (uVar2 & 1) == 0)) {
    uVar2 = FUN_0087eea0(uVar1);
    local_38 = 0x46c0ead0c0d2bd7f;
    lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
    if ((uVar2 & 1) == 0) {
      pcVar4 = "anime_L_pokerus_00_check_00";
    }
    else {
      pcVar4 = "anime_L_pokerus_00_check_01";
    }
    FUN_00ffcf80(param_1 + 0x100,pcVar4);
  }
  else {
    local_38 = 0x46c0ead0c0d2bd7f;
    lVar3 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_38);
    *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
  }
  return;
}


