/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01460380; name: FUN_01460380
 */


void FUN_01460380(long param_1,ulong param_2,ulong param_3,uint param_4,uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_60 [24];
  long local_48;
  
  FUN_01461840(*(undefined8 *)(param_1 + 400),0);
  if ((param_3 & 1) == 0) {
    lVar1 = FUN_01457f50(param_1);
    FUN_0146a6b0(*(undefined8 *)(param_1 + 400),*(long *)(lVar1 + 0x700) + 0x10,
                 *(long *)(lVar1 + 0x700) + 0x14);
    FUN_0146a7f0(*(undefined8 *)(param_1 + 400));
    FUN_014616c0(*(undefined8 *)(param_1 + 400),0);
    if ((param_5 & 1) == 0) {
      FUN_01461600(*(undefined8 *)(param_1 + 400),0);
    }
  }
  if ((param_4 & 1) != 0) {
    FUN_01457f50(param_1);
    FUN_01453840();
  }
  if ((param_2 & 1) != 0) {
    FUN_01461f80(*(undefined8 *)(param_1 + 0x1a0),3);
  }
  FUN_01458960(param_1);
  FUN_006cf0a0(auStack_60,&DAT_026a27d8);
  FUN_016d3620(auStack_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if ((param_5 & 1) == 0) {
    uVar2 = 0xb;
  }
  else {
    FUN_00d94290(*(undefined8 *)PTR_DAT_02710868,0,0);
    uVar2 = 0x1c;
  }
  *(undefined4 *)(param_1 + 0x1b4) = uVar2;
  return;
}


