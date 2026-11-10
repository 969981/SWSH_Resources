/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01576cc0; name: FUN_01576cc0
 */


void FUN_01576cc0(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_02710860;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar2 + 0x80) < 0x10) {
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_3;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*param_3 + 0x10))(param_3,0x100,0x10);
    if (lVar3 == 0) {
      (**(code **)(*param_3 + 0xb8))(param_3);
    }
    FUN_01577840(lVar3,param_3,param_4);
    *(long **)(lVar3 + 8) = param_3;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x100;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    *param_1 = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))((long *)(lVar3 + 0x48));
    }
    if (*(char *)(param_2 + 0x420) == '\0') {
      plVar4 = *(long **)(param_2 + 0x3c8);
      if (plVar4 == *(long **)(param_2 + 0x3d0)) {
        param_2 = param_2 + 0x3c0;
        goto LAB_01576e94;
      }
      uVar5 = *(undefined8 *)(param_2 + 0x3d8);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar2 + 0x80) < 0x10) {
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        lVar3 = *param_1;
        *plVar4 = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        *(long *)(param_2 + 0x3c8) = *(long *)(param_2 + 0x3c8) + 8;
        return;
      }
    }
    else {
      plVar4 = *(long **)(param_2 + 0x3f8);
      if (plVar4 == *(long **)(param_2 + 0x400)) {
        param_2 = param_2 + 0x3f0;
LAB_01576e94:
        FUN_015774c0(param_2,param_1);
        return;
      }
      uVar5 = *(undefined8 *)(param_2 + 0x408);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar2 + 0x80) < 0x10) {
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar5;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        lVar3 = *param_1;
        *plVar4 = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        *(long *)(param_2 + 0x3f8) = *(long *)(param_2 + 0x3f8) + 8;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


