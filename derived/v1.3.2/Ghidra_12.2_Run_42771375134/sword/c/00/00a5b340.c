/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5b340; name: FUN_00a5b340
 */


void FUN_00a5b340(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  undefined1 auStack_28 [8];
  
  local_40 = param_3;
  FUN_0167c6f0(&local_38,param_2,&local_40);
  if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_40 = CONCAT44(local_40._4_4_,2);
  lVar1 = FUN_00a5bb50(auStack_28,*(undefined8 *)(param_1 + 0x60),&local_38,&local_40);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = lVar1;
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  lVar2 = *(long *)(lVar1 + 400);
  *(long *)(lVar1 + 400) = param_1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  uVar3 = FUN_00786910(local_38,&DAT_01cfd40c);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar3 = FUN_00786910(local_38,"L_cursor_00");
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  uVar3 = FUN_00786930(local_38,&DAT_01d06e6b);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  uVar3 = FUN_00786930(local_38,&DAT_01d21b11);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  (**(code **)(**(long **)(param_1 + 0x68) + 0x30))
            (*(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x80));
  (**(code **)(**(long **)(param_1 + 0x68) + 0x30))
            (*(long **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x88));
  local_40 = 0xd0cdad5eec10b0ca;
  FUN_0167ba30(param_2,&local_40);
  local_40 = 0xbb0f72b98efaaaec;
  FUN_0167ba30(param_2,&local_40);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


