/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014fba80; name: FUN_014fba80
 */


ulong FUN_014fba80(long param_1,void *param_2,undefined1 param_3,undefined1 param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_68 [12];
  undefined1 local_5c;
  char local_58;
  short local_54;
  
  uVar4 = 0;
  while( true ) {
    uVar1 = uVar4 & 0xffff;
    lVar2 = param_1 + uVar1 * 0x1d0;
    if (*(char *)(lVar2 + 0x3f8) != '\0') break;
    uVar3 = (uint)uVar4;
    uVar4 = (ulong)(uVar3 | 1);
    uVar1 = uVar4 & 0xffff;
    lVar2 = param_1 + uVar1 * 0x1d0;
    if (*(char *)(lVar2 + 0x3f8) != '\0') break;
    uVar3 = uVar3 + 2;
    uVar4 = (ulong)uVar3;
    if (299 < (uVar3 & 0xffff)) {
      return 0xffff;
    }
  }
  param_1 = param_1 + uVar1 * 0x1d0;
  *(undefined1 *)(lVar2 + 0x3f8) = 0;
  memcpy((void *)(param_1 + 0x230),param_2,0x1c4);
  *(undefined1 *)(param_1 + 0x3f9) = 0;
  FUN_0102ad30(auStack_68);
  *(short *)(param_1 + 0x3fa) = local_54 + 0x76c;
  *(char *)(param_1 + 0x3fc) = local_58 + '\x01';
  *(undefined1 *)(param_1 + 0x3fd) = local_5c;
  *(undefined1 *)(param_1 + 0x3fe) = param_3;
  *(undefined1 *)(param_1 + 0x3ff) = param_4;
  return uVar4;
}


