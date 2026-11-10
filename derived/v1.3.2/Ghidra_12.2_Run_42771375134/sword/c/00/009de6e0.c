/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009de6e0; name: FUN_009de6e0
 */


void FUN_009de6e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  FUN_00931a50(param_3);
  uVar1 = FUN_00934780();
  *(undefined1 *)(param_1 + 0xbb0) = uVar1;
  uVar2 = FUN_00931a10(param_3);
  FUN_009336e0(uVar2,0);
  uVar1 = FUN_009339e0();
  *(undefined1 *)(param_1 + 0xbb1) = uVar1;
  return;
}


