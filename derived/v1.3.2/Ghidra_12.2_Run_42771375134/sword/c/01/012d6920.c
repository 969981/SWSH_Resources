/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d6920; name: FUN_012d6920
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_012d6920(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  if ((param_1 >> 1 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_01020270(uVar4,0x8000);
  }
  if ((param_1 & 1) != 0) {
    uVar3 = FUN_01020270(uVar4,0x4000);
    uVar2 = FUN_01020270(uVar4,0x100);
    uVar1 = uVar1 | uVar3 | uVar2;
  }
  if ((param_1 >> 7 & 1) != 0) {
    uVar3 = FUN_01020270(uVar4,0x40);
    uVar1 = uVar1 | uVar3;
  }
  if ((param_1 >> 9 & 1) != 0) {
    uVar3 = FUN_01020270(uVar4,0x100);
    uVar1 = uVar1 | uVar3;
  }
  if ((param_1 >> 3 & 1) != 0) {
    uVar3 = FUN_01020270(uVar4,0x1000);
    uVar1 = uVar1 | uVar3;
  }
  if ((param_1 >> 2 & 1) != 0) {
    uVar3 = FUN_01020270(uVar4,0x2000);
    uVar1 = uVar1 | uVar3;
  }
  if ((param_1 >> 10 & 1) != 0) {
    uVar3 = FUN_01020270(uVar4,0x800);
    uVar1 = uVar1 | uVar3;
  }
  if ((param_1 >> 5 & 1) != 0) {
    uVar3 = FUN_01020270(uVar4,0x10);
    uVar1 = uVar1 | uVar3;
  }
  return uVar1 & 1;
}


