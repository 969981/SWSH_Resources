/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e46690; name: FUN_00e46690
 */


void FUN_00e46690(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = *(long *)PTR_DAT_02717c48;
  local_50 = *(undefined8 *)(lVar3 + 0xf0);
  local_48 = *(undefined8 *)(lVar3 + 0xf8);
  local_40 = *(undefined8 *)(lVar3 + 0x100);
  local_38 = *(long *)(lVar3 + 0x108);
  if (local_38 != 0) {
    plVar6 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_38 = 0;
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 == 0) {
    iVar2 = FUN_0100d1b0(0,&local_50);
  }
  else {
    plVar6 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    iVar2 = FUN_0100d1b0(lVar3,&local_50);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (iVar2 != 0) {
    if (*(long **)(param_1 + 0x1b8) == *(long **)(param_1 + 0x1c0)) {
      plVar6 = *(long **)(param_1 + 0x1e8);
      plVar4 = *(long **)(param_1 + 0x1f0);
      if (plVar6 != plVar4) {
        do {
          plVar7 = plVar6 + 1;
          if (*plVar6 == *(long *)PTR_DAT_0271f828) {
            return;
          }
          plVar6 = plVar7;
        } while (plVar4 != plVar7);
        plVar6 = plVar4;
      }
      if (plVar6 == *(long **)(param_1 + 0x1f8)) {
LAB_00e46840:
        FUN_015c3280(param_1 + 0x1e8,PTR_DAT_0271f828);
      }
      else {
LAB_00e467d0:
        uVar5 = *(undefined8 *)(param_1 + 0x200);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
        puVar1 = PTR_DAT_0271f828;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *plVar6 = *(long *)puVar1;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 8;
      }
    }
    else {
      plVar6 = *(long **)(param_1 + 0x1b8);
      do {
        plVar4 = plVar6 + 1;
        if (*plVar6 == *(long *)PTR_DAT_0271f828) {
          plVar6 = *(long **)(param_1 + 0x1f0);
          if (plVar6 != *(long **)(param_1 + 0x1f8)) goto LAB_00e467d0;
          goto LAB_00e46840;
        }
        plVar6 = plVar4;
      } while (*(long **)(param_1 + 0x1c0) != plVar4);
    }
  }
  return;
}


