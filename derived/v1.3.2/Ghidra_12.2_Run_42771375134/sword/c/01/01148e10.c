/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01148e10; name: FUN_01148e10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01148e10(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 local_34;
  
  *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 0x248);
  if (*(long *)PTR_DAT_02710848 != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    lVar5 = _DAT_00000060;
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar5 = *(long *)(lVar3 + 0x60);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if (lVar5 == 0) {
      return;
    }
    local_34 = 0;
    lVar3 = param_1 + 0x248;
    uVar1 = FUN_016b1890(*(undefined8 *)(lVar5 + 0x630),0);
    if ((uVar1 & 1) != 0) {
      puVar6 = *(undefined4 **)(param_1 + 0x250);
      if (puVar6 == *(undefined4 **)(param_1 + 600)) {
        FUN_0114e950(lVar3,&local_34);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x260);
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_0114905c;
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar7;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *puVar6 = local_34;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        *(long *)(param_1 + 0x250) = *(long *)(param_1 + 0x250) + 4;
      }
    }
    FUN_016b1790(*(undefined8 *)(lVar5 + 0x630),local_34,0);
    local_34 = 1;
    uVar1 = FUN_016b1890(*(undefined8 *)(lVar5 + 0x630),1);
    if ((uVar1 & 1) != 0) {
      puVar6 = *(undefined4 **)(param_1 + 0x250);
      if (puVar6 == *(undefined4 **)(param_1 + 600)) {
        FUN_0114e950(lVar3,&local_34);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x260);
        lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_0114905c;
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar7;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
        *puVar6 = local_34;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
        *(long *)(param_1 + 0x250) = *(long *)(param_1 + 0x250) + 4;
      }
    }
    FUN_016b1790(*(undefined8 *)(lVar5 + 0x630),local_34,0);
    local_34 = 2;
    uVar1 = FUN_016b1890(*(undefined8 *)(lVar5 + 0x630),2);
    if ((uVar1 & 1) != 0) {
      puVar6 = *(undefined4 **)(param_1 + 0x250);
      if (puVar6 == *(undefined4 **)(param_1 + 600)) {
        FUN_0114e950(lVar3,&local_34);
      }
      else {
        uVar7 = *(undefined8 *)(param_1 + 0x260);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0114905c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar7;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *puVar6 = local_34;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        *(long *)(param_1 + 0x250) = *(long *)(param_1 + 0x250) + 4;
      }
    }
    FUN_016b1790(*(undefined8 *)(lVar5 + 0x630),local_34,0);
  }
  return;
}


