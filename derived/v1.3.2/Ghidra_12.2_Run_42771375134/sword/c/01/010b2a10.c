/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b2a10; name: FUN_010b2a10
 */


void FUN_010b2a10(long param_1,uint param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5f0),param_2 & 1);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5f0),param_2 & 1);
  if ((param_2 & 1) == 0) {
    FUN_016b2eb0(*(undefined8 *)(param_1 + 0x5f0));
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x5f0) + 0x50))();
  uVar2 = *(undefined8 *)(param_1 + 0x5f0);
  uVar1 = FUN_016c0030(uVar2);
  FUN_016bff10(uVar2,uVar1,0);
  return;
}


