/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b5b80; name: FUN_007b5b80
 */


void FUN_007b5b80(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_1a8 [384];
  undefined8 local_28;
  
  local_28 = param_3;
  FUN_007c1fa0(local_1a8,param_2,&local_28);
  uVar1 = FUN_007c1be0(local_1a8);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_007c2320(local_1a8);
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_007b98c0(*(long *)(param_1 + 0x58),uVar2,0x168);
    }
  }
  return;
}


