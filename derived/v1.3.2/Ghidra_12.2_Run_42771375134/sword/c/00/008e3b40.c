/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3b40; name: FUN_008e3b40
 */


undefined8 FUN_008e3b40(long param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  
  if (((*(byte *)(param_1 + 0xa0) & 7) != 0) && (bVar2 = FUN_008ed270(), bVar2 != 0)) {
    if (((*(byte *)(param_1 + 0x110) & 7) == 0) &&
       (((*(long *)(param_1 + 0x460) == 0 ||
         (uVar3 = FUN_00932f50(*(long *)(param_1 + 0x460),*(undefined2 *)(param_1 + 0x338)),
         (uVar3 & 1) != 0)) ||
        (uVar3 = FUN_00932f40(*(undefined8 *)(param_1 + 0x460)), (uVar3 & 1) == 0)))) {
      cVar4 = '\x01';
      if (*(short *)(param_1 + 0x338) == 0x30) {
        cVar4 = '\x02';
      }
    }
    else {
      cVar4 = '\x01';
    }
    bVar1 = *(char *)(param_1 + 0x1fa) + cVar4;
    *(byte *)(param_1 + 0x1fa) = bVar1;
    if (bVar2 <= bVar1) {
      return 1;
    }
  }
  return 0;
}


