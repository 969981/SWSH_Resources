/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00191550; name: FUN_00191550
 */


void FUN_00191550(long param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar2 = ((long)param_2 << 0x20 ^ 0xffffffffffffffffU) + (long)param_2;
  uVar2 = uVar2 ^ uVar2 >> 0x16;
  uVar2 = uVar2 + (uVar2 << 0xd ^ 0xffffffffffffffff);
  uVar2 = (uVar2 ^ uVar2 >> 8) * 9;
  uVar2 = uVar2 ^ uVar2 >> 0xf;
  uVar2 = uVar2 + (uVar2 << 0x1b ^ 0xffffffffffffffff);
  puVar3 = *(undefined4 **)(param_1 + ((ulong)((uint)(uVar2 >> 0x1f) ^ (uint)uVar2) & 0x3ff) * 8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar4 = *(undefined4 **)(puVar3 + 10);
    if (*(undefined4 **)(puVar3 + 10) == (undefined4 *)0x0) {
    }
    else {
      do {
        if (*(undefined4 **)(puVar3 + 8) == param_2) break;
        puVar1 = (undefined8 *)(puVar4 + 10);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar1;
      } while ((undefined4 *)*puVar1 != (undefined4 *)0x0);
    }
  }
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  puVar3[2] = param_2[2];
  puVar3[3] = param_2[3];
  puVar3[4] = param_2[4];
  puVar3[5] = param_2[5];
  puVar3[6] = param_2[6];
  return;
}


