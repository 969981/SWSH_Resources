/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006636d0; name: FUN_006636d0
 */


uint FUN_006636d0(undefined8 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0x21;
  if (1 < param_2) {
    uVar3 = 0;
  }
  uVar4 = uVar3 | 0x24;
  if (param_2 != 2) {
    uVar4 = uVar3;
  }
  uVar3 = uVar4 | 8;
  if (param_2 != 3) {
    uVar3 = uVar4;
  }
  uVar4 = param_3 >> 7 & 0x80;
  if ((param_3 & 0x20) != 0) {
    uVar4 = 0x80;
  }
  uVar1 = uVar3 & 0xf8 | uVar4;
  uVar2 = uVar1 | 4;
  uVar1 = uVar1 | 2;
  uVar3 = uVar3 | uVar4;
  if ((param_4 & 0x20000) != 0) {
    uVar1 = uVar2;
    uVar3 = uVar2;
  }
  if ((param_4 & 0x10000) != 0) {
    uVar3 = uVar1;
  }
  return uVar3;
}


