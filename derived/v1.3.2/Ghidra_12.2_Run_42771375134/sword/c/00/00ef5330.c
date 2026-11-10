/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef5330; name: FUN_00ef5330
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00ef5330(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long local_38;
  
  if (((DAT_02a5e968 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02a5e968), iVar1 != 0)) {
    DAT_02a5e990 = 0;
    DAT_02a5e998 = 0;
    __cxa_guard_release(&DAT_02a5e968);
  }
  if (((DAT_02a5e970 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_02a5e970), iVar1 != 0)) {
    uRam0000000002a5e9a8 = _UNK_01d4b6c8;
    _DAT_02a5e9a0 = _DAT_01d4b6c0;
    __cxa_guard_release(&DAT_02a5e970);
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  uVar2 = FUN_01510f00(lVar5,0xa2ac4bfdb223d309);
  if ((uVar2 & 1) != 0) {
    FUN_01511120(lVar5,0xa2ac4bfdb223d309);
  }
  switch(*(undefined4 *)(param_1 + 0x90)) {
  case 1:
    uVar3 = *(undefined8 *)PTR_DAT_02710868;
    uVar4 = 8;
    goto LAB_00ef5480;
  case 2:
  case 4:
    goto switchD_00ef5410_caseD_2;
  case 3:
    FUN_00ef5b10(param_1);
    goto joined_r0x00ef545c;
  case 5:
    uVar3 = *(undefined8 *)PTR_DAT_02710868;
    uVar4 = 2;
LAB_00ef5480:
    FUN_00d940b0(uVar3,0,0,&DAT_02a5e990,&DAT_02a5e9a0,uVar4,1,1);
    goto joined_r0x00ef545c;
  case 6:
    local_50 = 0x531ade7230001a34;
    pcStack_48 = "Play_UI_Common_PM_Encount_FX";
    local_40 = 0x1c;
    local_38 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    uVar3 = *(undefined8 *)PTR_DAT_02710868;
    uVar4 = 0xc;
    break;
  case 7:
    uVar3 = *(undefined8 *)PTR_DAT_02710868;
    uVar4 = 0xe;
    break;
  case 8:
    local_50 = 0x531ade7230001a34;
    pcStack_48 = "Play_UI_Common_PM_Encount_FX";
    local_40 = 0x1c;
    local_38 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    uVar3 = *(undefined8 *)PTR_DAT_02710868;
    uVar4 = 0xf;
    break;
  case 9:
    local_50 = 0x6a31483e69636393;
    pcStack_48 = "Play_UI_bag_ananuke";
    local_40 = 0x13;
    local_38 = 0;
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    uVar3 = *(undefined8 *)PTR_DAT_02710868;
    uVar4 = 1;
    break;
  default:
    FUN_00d94290(*(undefined8 *)PTR_DAT_02710868,0,1);
joined_r0x00ef545c:
    if (lVar5 == 0) {
      return 3;
    }
    goto LAB_00ef5638;
  }
  FUN_00d940b0(uVar3,0,1,&DAT_02a5e990,&DAT_02a5e9a0,uVar4,1,1);
switchD_00ef5410_caseD_2:
  if (lVar5 != 0) {
LAB_00ef5638:
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return 3;
}


