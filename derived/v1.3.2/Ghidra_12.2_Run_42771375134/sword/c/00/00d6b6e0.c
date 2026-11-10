/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6b6e0; name: FUN_00d6b6e0
 */


undefined8 FUN_00d6b6e0(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long local_28;
  
  switch(*(undefined4 *)(param_1 + 0x500)) {
  case 3:
  case 4:
    if (*(char *)(param_1 + 0x580) != '\0') {
      return 1;
    }
    FUN_00d14ea0(*(undefined8 *)(param_1 + 0x508));
    iVar2 = 5;
    goto LAB_00d6b864;
  case 5:
    lVar3 = *(long *)(param_1 + 0x508);
    if (*(int *)(lVar3 + 0x2c0) != 6) {
      return 0;
    }
    if (*(char *)(param_1 + 0x464) == '\0') {
      lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
      if (lVar3 == 0) {
        FUN_010672e0(&local_28,0,0);
      }
      else {
        plVar4 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        FUN_010672e0(&local_28,lVar3,0);
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      FUN_00700830(local_28,1,7);
      FUN_01052d20(local_28,*(undefined1 *)(param_1 + 0x581));
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      lVar3 = *(long *)(param_1 + 0x508);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x508) = 0;
    }
    break;
  case 6:
    uVar1 = FUN_008d42a0(param_1 + 0x510,0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    lVar3 = *(long *)PTR_DAT_0271e288;
    (**(code **)**(undefined8 **)(lVar3 + 8))();
    *(undefined8 *)(lVar3 + 8) = 0;
    (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))
              (*(long **)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),
               8);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    break;
  case 7:
    return 1;
  default:
    goto switchD_00d6b718_default;
  }
  iVar2 = *(int *)(param_1 + 0x500) + 1;
LAB_00d6b864:
  *(int *)(param_1 + 0x500) = iVar2;
switchD_00d6b718_default:
  return 0;
}


