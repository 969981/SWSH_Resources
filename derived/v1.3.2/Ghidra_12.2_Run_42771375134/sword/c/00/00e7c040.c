/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7c040; name: FUN_00e7c040
 */


ulong FUN_00e7c040(long param_1)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined8 local_80 [16];
  
  pcVar6 = *(char **)(param_1 + 8);
  uVar4 = 0;
  uVar3 = 0;
  cVar1 = *pcVar6;
  while( true ) {
    while (cVar1 == '/') {
      uVar3 = 0;
      uVar4 = uVar4 + 1;
      local_80[0] = 0;
      cVar1 = pcVar6[uVar4];
    }
    if (cVar1 == '\0') break;
    if (uVar3 < 0x80) {
      *(char *)((long)local_80 + (ulong)uVar3) = cVar1;
    }
    uVar3 = uVar3 + 1;
    uVar4 = uVar4 + 1;
    cVar1 = pcVar6[uVar4];
  }
  if (uVar3 < 0x80) {
    *(undefined1 *)((long)local_80 + (ulong)uVar3) = 0;
  }
  uVar2 = 0xcbf29ce484222645;
  if ((byte)local_80[0] != 0) {
    pbVar5 = (byte *)((ulong)local_80 | 1);
    do {
      uVar2 = (uVar2 ^ (byte)local_80[0]) * 0x100000001b3;
      local_80[0]._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_80[0] != 0);
  }
  return uVar2;
}


