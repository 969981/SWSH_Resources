/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008be000; name: FUN_008be000
 */


void FUN_008be000(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long local_40 [3];
  long local_28;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x80) + 0x810);
  if (uVar1 != 0xffffffff) {
    *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x810) = 0xffffffff;
    *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc) = 0;
    if (uVar1 < 2) {
      *(uint *)(param_1 + 0xac) = uVar1;
      FUN_008be300(param_1);
      FUN_008a6a20(local_40,*(undefined8 *)(param_1 + 0x90),5);
      if (*(long *)(param_1 + 0xa0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      *(long *)(param_1 + 0xa0) = local_40[0];
      if (local_40[0] != 0) {
        uVar2 = FUN_008c8c30(*(undefined8 *)(param_1 + 0x80),
                             *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x90) + 0xa8) + 0x1c));
        FUN_016a66b0(local_40[0],uVar2);
      }
      FUN_006cf0a0(local_40,&DAT_02617fc8);
      FUN_016d3620(local_40);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      uVar3 = 1;
      FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
    }
    else {
      if (uVar1 != 2) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      FUN_01038270(*(undefined8 *)(param_1 + 0x88),1);
      uVar3 = 4;
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
  }
  return;
}


