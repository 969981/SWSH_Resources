/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d9400; name: FUN_003d9400
 */


void FUN_003d9400(long param_1,uint param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x4a) != '\0') {
    uVar3 = FUN_003ade70(lVar4);
    FUN_003aa930(uVar3,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2 & 1,
                 param_3);
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  uVar2 = *(short *)(lVar4 + 0x4a) - 1;
  uVar1 = *(ushort *)(param_1 + 0x48);
  *(ushort *)(lVar4 + 0x4a) = uVar2;
  *(undefined8 *)(*(long *)(lVar4 + 0x40) + (ulong)uVar1 * 8) =
       *(undefined8 *)(*(long *)(lVar4 + 0x40) + (ulong)uVar2 * 8);
  if (uVar1 < uVar2) {
    *(ushort *)(*(long *)(*(long *)(lVar4 + 0x40) + (ulong)uVar1 * 8) + 0x48) = uVar1;
  }
  *(undefined2 *)(param_1 + 0x48) = 0xffff;
  return;
}


