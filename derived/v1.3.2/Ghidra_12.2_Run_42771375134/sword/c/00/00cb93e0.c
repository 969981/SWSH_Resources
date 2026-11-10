/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb93e0; name: FUN_00cb93e0
 */


void FUN_00cb93e0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  uVar2 = (**(code **)(*param_1 + 0x80))();
  if ((uVar2 & 1) != 0) {
    lVar3 = param_1[0x23];
    local_28 = param_1[0x24];
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    plVar1 = param_1 + 0x29;
    FUN_00c81c80(lVar3,&local_28,plVar1);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    lVar3 = FUN_00c84420(*plVar1,0x15);
    if (0 < *(int *)(lVar3 + 8)) {
      if (*(long *)(*(long *)(lVar3 + 0x38) + 0x48) == 0) goto LAB_00cb94d8;
      *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x40) + 8) =
           *(undefined8 *)(*(long *)PTR_DAT_0271bf90 + 0x248);
    }
    lVar3 = FUN_00c84420(*plVar1,0x17);
    if (0 < *(int *)(lVar3 + 8)) {
      if (*(long *)(*(long *)(lVar3 + 0x38) + 0x48) == 0) {
LAB_00cb94d8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x38) + 0x40) + 8) =
           *(undefined8 *)(*(long *)PTR_DAT_0271bf90 + 0x268);
    }
    *(undefined4 *)(param_1 + 0xf) = 3;
  }
  return;
}


