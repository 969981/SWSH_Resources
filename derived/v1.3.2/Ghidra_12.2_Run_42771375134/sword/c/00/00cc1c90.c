/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc1c90; name: FUN_00cc1c90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cc1c90(long param_1,long *param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_58;
  long local_48;
  
  if (*param_3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*param_3 != 1) {
      return;
    }
    uVar4 = 1;
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_00c58c20(&local_58,lVar5);
  if (local_58 == 0) {
    local_48 = 0;
    uVar6 = _DAT_00001588;
  }
  else {
    FUN_00c62ba0(&local_48);
    uVar6 = *(undefined8 *)(&DAT_00001588 + local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  uVar6 = FUN_00cbf660(uVar6);
  local_48 = *param_2;
  piVar1 = (int *)FUN_00c979d0(uVar6,&local_48,uVar4);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x2b) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x15];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 8) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0xf) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[7];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x11) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x13) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[9];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x15) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[10];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x19) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xc];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x17) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xb];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1b) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xd];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1d) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xe];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1f) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xf];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x21) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x10];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x23) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x11];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x25) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x12];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x27) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x13];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 0x29) {
    uVar4 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x14];
    uVar4 = 0;
    if (uVar2 != 0) {
      uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
    }
  }
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  puVar3 = (undefined8 *)(PTR_DAT_0271c670 + 0x18);
  if (((ulong)*param_3 < 2) && ((ulong)*param_4 < 3)) {
    puVar3 = (undefined8 *)(PTR_DAT_0271c670 + (ulong)*param_4 * 8 + (ulong)*param_3 * 0x18);
  }
  *(undefined8 *)(param_1 + 0x80) = *puVar3;
  return;
}


