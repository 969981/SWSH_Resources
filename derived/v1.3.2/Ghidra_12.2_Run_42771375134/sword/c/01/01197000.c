/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01197000; name: FUN_01197000
 */


undefined8 FUN_01197000(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_011faab0(*(undefined8 *)PTR_DAT_02710940);
  if (((uVar2 & 1) == 0) || ((*(uint *)(param_1 + 0x7c) & 0xfffffffe) == 0x10)) {
    cVar1 = FUN_007a9cb0();
    if (cVar1 != '\x04') {
      return 0;
    }
    if (*(int *)(param_1 + 0x7c) == 0x10) {
      return 1;
    }
    uVar3 = 0x10;
  }
  else {
    if (*(uint *)(param_1 + 0x7c) == 0xf) {
      return 1;
    }
    uVar3 = 0xf;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  return 1;
}


