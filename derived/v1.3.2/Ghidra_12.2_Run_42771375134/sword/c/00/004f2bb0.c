/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f2bb0; name: FUN_004f2bb0
 */


byte FUN_004f2bb0(long param_1,undefined4 *param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0xf0);
  if (puVar4 == param_2) {
    return 1;
  }
  puVar3 = *(undefined4 **)(param_1 + 0xf8);
  if (puVar3 == param_2) {
    return 1;
  }
  if ((*(uint *)(param_1 + 0x100) & param_2[0x19]) == 0) {
    return 1;
  }
  if ((puVar4 != (undefined4 *)0x0) && (*(long *)(puVar4 + 0x16) == *(long *)(param_2 + 0x16))) {
    return 1;
  }
  if ((puVar3 != (undefined4 *)0x0) && (*(long *)(puVar3 + 0x16) == *(long *)(param_2 + 0x16))) {
    return 1;
  }
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4) = *param_2;
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0x10) = param_2[1];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0x20) = param_2[2];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0x30) = param_2[3];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0x40) = param_2[4];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0x50) = param_2[5];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0x60) = param_2[6];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0x70) = param_2[7];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0x80) = param_2[8];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0x90) = param_2[9];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0xa0) = param_2[10];
  *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x104) * 4 + 0xb0) = param_2[0xb];
  iVar1 = *(int *)(param_1 + 0x104) + 1;
  *(int *)(param_1 + 0x104) = iVar1;
  if (iVar1 == 4) {
    bVar2 = FUN_004f2390(param_1);
    *(byte *)(param_1 + 0x108) = bVar2 & 1;
    *(undefined4 *)(param_1 + 0x104) = 0;
    return (bVar2 ^ 1) & 1;
  }
  return 1;
}


