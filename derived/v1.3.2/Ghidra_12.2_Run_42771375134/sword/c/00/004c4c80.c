/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4c80; name: FUN_004c4c80
 */


bool FUN_004c4c80(long param_1,int param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  bVar1 = *(byte *)(param_1 + 0x28);
  if ((bVar1 | 0x10) != 0x90) {
    return true;
  }
  if (((*(long *)(param_1 + 0x18) != 0) && (*(long *)(*(long *)(param_1 + 0x18) + 0x10) != 0)) &&
     ((param_3 & 1) != 0)) {
    bVar3 = *(byte *)(param_1 + 0x30);
    if (((bVar3 >> 1 & 1) == 0) &&
       (*(int *)(param_1 + 0x2c) < (int)(uint)*(ushort *)PTR_DAT_02712ac0)) {
      if ((bVar1 == 0x80) || ((bVar1 == 0x90 && (*(char *)(param_1 + 0x2b) == '\0')))) {
        FUN_004c4d70(param_1);
        bVar3 = *(byte *)(param_1 + 0x30);
      }
      bVar3 = bVar3 | 2;
      *(byte *)(param_1 + 0x30) = bVar3;
    }
    if ((bVar3 & 1) == 0) {
      FUN_004c4e90(param_1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),
                   *(long *)(param_1 + 0x18) + 0x18);
      *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
    }
  }
  uVar2 = *(int *)(param_1 + 0x2c) - param_2;
  *(uint *)(param_1 + 0x2c) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  return ((*(byte *)(param_1 + 0x30) ^ 0xff) & 6) == 0;
}


