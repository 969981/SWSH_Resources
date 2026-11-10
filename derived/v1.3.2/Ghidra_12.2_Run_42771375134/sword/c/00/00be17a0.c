/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be17a0; name: FUN_00be17a0
 */


uint FUN_00be17a0(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_50;
  undefined4 local_48;
  char local_40 [4];
  undefined8 local_3c;
  undefined4 local_34;
  
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,400,0x10);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_009fe380(lVar3,param_2);
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 400;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 == 0) {
    uVar1 = 0;
    goto LAB_00be1944;
  }
  plVar6 = (long *)(lVar3 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  if (*(long *)(param_1 + 0x848) == 0x644) {
    uVar4 = FUN_009fe850(lVar3,param_1 + 0x48);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar6);
    if (((uVar4 & 1) == 0) || (lVar2 = *(long *)PTR_DAT_02710878, lVar2 == 0)) goto LAB_00be1930;
    FUN_01025d10(lVar2,param_2);
    FUN_01025bd0(local_40,lVar2);
    uVar4 = FUN_01025bc0(lVar2);
    uVar1 = 0;
    if ((local_40[0] != '\0') && ((uVar4 & 0xff) != 0)) {
      local_50 = local_3c;
      local_48 = local_34;
      uVar5 = FUN_009ff1a0(lVar3,&local_50);
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_009ff260(lVar3,uVar4 >> 0x20);
      }
    }
    if (local_40[0] != '\0') {
      local_40[0] = '\0';
    }
  }
  else {
    (**(code **)(*plVar6 + 0x18))(plVar6);
LAB_00be1930:
    uVar1 = 0;
  }
  (**(code **)(*plVar6 + 0x18))(plVar6);
LAB_00be1944:
  return uVar1 & 1;
}


