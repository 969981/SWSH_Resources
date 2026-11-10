/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c9d80; name: FUN_014c9d80
 */


void FUN_014c9d80(long param_1,uint param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  uVar4 = (ulong)param_2;
  *(undefined4 *)(*(long *)(param_1 + 0x200) + uVar4 * 8) = param_3;
  *(undefined4 *)(*(long *)(param_1 + 0x200) + uVar4 * 8 + 4) = 1;
  local_80 = 0xb059dd7e20c2c317;
  local_78 = "script/place_name.dat";
  local_70 = 0x15;
  local_68 = 0;
  FUN_014bfd20(local_60,&local_80,10);
  uVar1 = FUN_014c7640(param_1,*(undefined8 *)(param_1 + 0x170),local_60,param_3);
  if (param_2 < *(uint *)(param_1 + 0x198)) {
    uVar2 = *(undefined8 *)(param_1 + 0x170);
    lVar3 = uVar4 * 0x18;
    *(ulong *)(*(long *)(param_1 + 0x1a0) + lVar3 + 8) = uVar1 & 0xffff | 0x20000;
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar3),uVar2);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + lVar3 + 0x10) = 0;
    lVar3 = *(long *)(param_1 + 0x1a0) + lVar3;
    *(ushort *)(lVar3 + 0x12) = *(ushort *)(lVar3 + 0x12) & 0xfffe;
  }
  if ((local_48 != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  local_40 = 0;
  local_38 = 0;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  lVar3 = *(long *)(param_1 + 0x1a0) + uVar4 * 0x18;
  *(ushort *)(lVar3 + 0x12) = *(ushort *)(lVar3 + 0x12) | 1;
  return;
}


