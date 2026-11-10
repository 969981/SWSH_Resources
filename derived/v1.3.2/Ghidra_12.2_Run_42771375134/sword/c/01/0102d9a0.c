/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102d9a0; name: FUN_0102d9a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0102d9a0(long *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long local_48;
  long local_38;
  
  *param_1 = 0;
  lVar3 = 0;
  if (*(long **)(param_2 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x148) + 0x10))(&local_38);
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
    *param_1 = local_38;
    lVar3 = local_38;
  }
  if (lVar3 != 0) {
    while (FUN_0102e8a0(&local_38), local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      if (*param_1 == 0) {
        if (*(long *)(_DAT_00000060 + 0x60) != 0) goto LAB_0102da64;
        lVar3 = 0;
      }
      else {
        FUN_0102e8a0(&local_38);
        lVar3 = *(long *)(*(long *)(local_38 + 0x60) + 0x60);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
LAB_0102da64:
          FUN_0102e8a0(&local_48,*param_1);
          (**(code **)(**(long **)(*(long *)(local_48 + 0x60) + 0x60) + 0x10))(&local_38);
          lVar3 = local_38;
          local_38 = 0;
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            local_48 = 0;
          }
        }
      }
      uVar1 = (*(code *)*param_3)(param_3 + 4,param_1);
      if ((uVar1 & 1) != 0) {
        if (lVar3 == 0) {
          return;
        }
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        return;
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar2 = *param_1;
      *param_1 = lVar3;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      if (*param_1 == 0) {
        return;
      }
    }
  }
  return;
}


