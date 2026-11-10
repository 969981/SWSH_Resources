/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e3520; name: FUN_004e3520
 */


void FUN_004e3520(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)(param_1 + 0x28);
  uVar3 = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(byte **)(param_1 + 0x38) = pbVar5;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = pbVar5 + 1;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(byte **)(param_1 + 0x38) = pbVar4;
    bVar2 = *pbVar5;
    uVar3 = bVar2 & 0x7f;
    *(uint *)(param_1 + 0x40) = uVar3;
    if ((char)bVar2 < '\0') {
      pbVar4 = pbVar5 + 2;
      *(uint *)(param_1 + 0x40) = uVar3 << 7;
      *(byte **)(param_1 + 0x38) = pbVar4;
      bVar2 = pbVar5[1];
      uVar3 = uVar3 << 7 | bVar2 & 0x7f;
      *(uint *)(param_1 + 0x40) = uVar3;
      if ((char)bVar2 < '\0') {
        pbVar4 = pbVar5 + 3;
        *(uint *)(param_1 + 0x40) = uVar3 << 7;
        *(byte **)(param_1 + 0x38) = pbVar4;
        bVar2 = pbVar5[2];
        uVar3 = uVar3 << 7 | bVar2 & 0x7f;
        *(uint *)(param_1 + 0x40) = uVar3;
        if ((char)bVar2 < '\0') {
          pbVar4 = pbVar5 + 4;
          *(uint *)(param_1 + 0x40) = uVar3 << 7;
          *(byte **)(param_1 + 0x38) = pbVar4;
          uVar3 = uVar3 << 7 | pbVar5[3] & 0x7f;
          uVar1 = uVar3;
          if ((pbVar5[3] & 0x80) != 0) {
            uVar1 = 0xffffffff;
          }
          *(uint *)(param_1 + 0x40) = uVar1;
          if (uVar1 == 0xffffffff) {
            *(undefined4 *)(param_1 + 0x5c) = 0;
            *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
            *(undefined8 *)(param_1 + 100) = 0;
            return;
          }
        }
      }
    }
    if (pbVar4 < *(byte **)(param_1 + 0x30)) {
      *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(pbVar4 + 4);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)pbVar4;
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(uint *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 100) = 0;
  return;
}


