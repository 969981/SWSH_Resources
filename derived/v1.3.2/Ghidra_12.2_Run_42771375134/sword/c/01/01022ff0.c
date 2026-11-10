/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01022ff0; name: FUN_01022ff0
 */


void FUN_01022ff0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long *plStack_48;
  
  lVar1 = *param_1;
  if ((ulong)(param_1[2] - lVar1 >> 6) < param_2) {
    lVar2 = param_1[1];
    local_50 = 0;
    plStack_48 = param_1 + 3;
    local_68 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 6,8);
    if (local_68 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
    }
    local_60 = local_68 + (lVar2 - lVar1 >> 6) * 0x40;
    local_50 = local_68 + param_2 * 0x40;
    local_58 = local_60;
    FUN_01024960(param_1,&local_68);
    lVar2 = local_60;
    lVar1 = local_58;
    while (lVar1 != lVar2) {
      local_58 = lVar1 + -0x40;
      if ((*(long *)(lVar1 + -0x20) != 0) && (*(long *)(lVar1 + -0x38) != 0)) {
        (**(code **)(*(long *)(*(long *)(lVar1 + -0x38) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + -0x38) = 0;
      }
      *(undefined8 *)(lVar1 + -0x38) = 0;
      *(undefined8 *)(lVar1 + -0x30) = 0xcbf29ce484222645;
      *(undefined1 **)(lVar1 + -0x28) = &DAT_01d38550;
      *(undefined8 *)(lVar1 + -0x20) = 0;
      if (*(long *)(lVar1 + -0x18) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + -0x18) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + -0x18) = 0;
      }
      *(undefined8 *)(lVar1 + -0x18) = 0;
      *(undefined4 *)(lVar1 + -0x10) = 0;
      lVar1 = local_58;
    }
    if (local_68 != 0) {
      local_58 = lVar1;
      (**(code **)(*(long *)*plStack_48 + 0x18))((long *)*plStack_48,local_68,local_50 - local_68,8)
      ;
    }
  }
  return;
}


