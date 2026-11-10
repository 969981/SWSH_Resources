/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012e780; name: FUN_0012e780
 */


void FUN_0012e780(uint param_1,long param_2,long param_3,undefined8 param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auStack_24 [4];
  
  iVar1 = *(int *)(param_3 + 0x1230);
  *(undefined1 *)(param_2 + 0x18) = (char)iVar1;
  bVar4 = 1;
  if (iVar1 != 0) {
    bVar4 = 2;
  }
  bVar4 = bVar4 | *(byte *)(param_2 + 0x1a) & 0xfc;
  if (iVar1 == 0) {
    *(byte *)(param_2 + 0x1a) = bVar4;
    *(undefined2 *)(param_2 + 0x18) = 0;
    return;
  }
  *(int *)(param_3 + 0x1c1c) = *(int *)(param_3 + 0x1c1c) + 1;
  iVar2 = iVar1 << 2;
  *(byte *)(param_2 + 0x1a) = bVar4;
  if (((param_1 & 1) == 0) && (*(char *)(param_3 + 0x1c12) == '\0')) {
    uVar3 = (param_1 & 0xffff) >> 8 & 1;
  }
  else {
    uVar3 = 1;
  }
  if (uVar3 == 0 && (param_5 & 1) == 0) {
    iVar2 = 0;
  }
  FUN_00128bb0(param_3 + 0x230,iVar1,param_3,(undefined1 *)(param_2 + 0x18),param_2,param_2 + 8,
               auStack_24,param_2 + 0x10,iVar2,*(undefined8 *)(param_3 + 0x1c58),
               (byte)(param_1 >> 7) & 1,0,param_4,param_2 + 0x19,0,0,0,
               *(undefined1 *)(param_3 + 0x1c13),*(undefined8 *)(param_3 + 0x1c38),
               *(undefined8 *)(param_3 + 0x1c40),*(undefined8 *)(param_3 + 0x1c48),param_5 & 1);
  if ((*(int *)(param_3 + 0x1230) != 0) && (*(char *)(param_2 + 0x18) == '\0')) {
    *(byte *)(param_2 + 0x1a) = *(byte *)(param_2 + 0x1a) & 0xfc | 1;
    *(undefined2 *)(param_2 + 0x18) = 0;
    *(int *)(param_3 + 0x1c1c) = *(int *)(param_3 + 0x1c1c) + -1;
  }
  return;
}


