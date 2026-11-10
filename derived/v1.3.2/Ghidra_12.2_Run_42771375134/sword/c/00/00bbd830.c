/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbd830; name: FUN_00bbd830
 */


void FUN_00bbd830(long param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  if (*(byte *)(param_1 + 0x691) == param_2) {
    FUN_00bc7960();
    if (*(long *)(param_1 + 0x4c0) != 0) {
      FUN_016d2080();
      return;
    }
  }
  else {
    uVar1 = FUN_00bc7d60();
    if (((uVar1 & 1) == 0) && (uVar1 = FUN_00bc7d60(param_1,param_2), (uVar1 & 1) == 0)) {
      *(char *)(param_1 + 0x692) = (char)param_2;
      FUN_006cf0a0(auStack_40,&DAT_02637c30);
      FUN_016d3620(auStack_40);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      uVar2 = 0xc;
    }
    else {
      FUN_00bc7960(param_1);
      FUN_00bc46a0(param_1,4,0);
      FUN_006cf0a0(auStack_40,&DAT_02637c48);
      FUN_016d3620(auStack_40);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      uVar2 = 8;
    }
    *(undefined4 *)(param_1 + 0x608) = uVar2;
  }
  return;
}


