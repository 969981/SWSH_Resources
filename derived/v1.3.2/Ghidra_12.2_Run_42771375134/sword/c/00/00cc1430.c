/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc1430; name: FUN_00cc1430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00cc1430(long *param_1,char *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long local_50;
  long local_48;
  
  puVar2 = (undefined8 *)FUN_00cbd3c0();
  uVar4 = *puVar2;
  if (*param_2 == '\0') {
    uVar5 = 0;
  }
  else {
    if (*param_2 != '\x01') {
      return uVar4;
    }
    uVar5 = 1;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN_00c58c20(&local_50,lVar6);
  if (local_50 == 0) {
    local_48 = 0;
    uVar7 = _DAT_00001588;
  }
  else {
    FUN_00c62ba0(&local_48);
    uVar7 = *(undefined8 *)(&DAT_00001588 + local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  uVar7 = FUN_00cbf660(uVar7);
  local_48 = *param_1;
  piVar3 = (int *)FUN_00c979d0(uVar7,&local_48,uVar5);
  if (piVar3 == (int *)0x0) {
    return uVar4;
  }
  switch(param_3) {
  case 0:
    if (0x2a < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0x15];
joined_r0x00cc1730:
      if ((ulong)uVar1 != 0) {
        return *(undefined8 *)((long)piVar3 + (ulong)uVar1);
      }
    }
    break;
  case 1:
    if (0xe < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[7];
      goto joined_r0x00cc1730;
    }
    break;
  case 2:
    if (0x10 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[8];
      goto joined_r0x00cc1730;
    }
    break;
  case 3:
    if (0x12 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[9];
      goto joined_r0x00cc1730;
    }
    break;
  case 4:
    if (0x14 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[10];
      goto joined_r0x00cc1730;
    }
    break;
  case 5:
    if (0x18 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0xc];
      goto joined_r0x00cc1730;
    }
    break;
  case 6:
    if (0x16 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0xb];
      goto joined_r0x00cc1730;
    }
    break;
  case 7:
    if (0x1a < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0xd];
      goto joined_r0x00cc1730;
    }
    break;
  case 8:
    if (0x1c < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0xe];
      goto joined_r0x00cc1730;
    }
    break;
  case 9:
    if (0x1e < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0xf];
      goto joined_r0x00cc1730;
    }
    break;
  case 10:
    if (0x20 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0x10];
      goto joined_r0x00cc1730;
    }
    break;
  case 0xb:
    if (0x22 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0x11];
      goto joined_r0x00cc1730;
    }
    break;
  case 0xc:
    if (0x24 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0x12];
      goto joined_r0x00cc1730;
    }
    break;
  case 0xd:
    if (0x26 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0x13];
      goto joined_r0x00cc1730;
    }
    break;
  case 0xe:
    if (0x28 < *(ushort *)((long)piVar3 - (long)*piVar3)) {
      uVar1 = ((ushort *)((long)piVar3 - (long)*piVar3))[0x14];
      goto joined_r0x00cc1730;
    }
    break;
  default:
    goto switchD_00cc153c_default;
  }
  uVar4 = 0;
switchD_00cc153c_default:
  return uVar4;
}


