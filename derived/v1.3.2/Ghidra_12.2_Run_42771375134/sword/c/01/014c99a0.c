/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c99a0; name: FUN_014c99a0
 */


void FUN_014c99a0(long param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  
  switch(param_4 + param_5 * 2) {
  case 1:
  case 5:
    local_80 = 0x66fe45b25b2ddbbb;
    local_78 = "common/itemname_plural.dat";
    local_70 = 0x1a;
    goto LAB_014c9a30;
  case 2:
    local_80 = 0x405425fc16f32062;
    local_78 = "common/itemname_classified.dat";
    local_70 = 0x1e;
    break;
  case 3:
  case 7:
    local_80 = 0x914e4c5f68d6e6d;
    local_78 = "common/itemname_plural_classified.dat";
    local_70 = 0x25;
LAB_014c9a30:
    local_68 = 0;
    FUN_014bfd20(local_60,&local_80,10);
    uVar1 = FUN_014c7640(param_1,*(undefined8 *)(param_1 + 0x170),local_60,param_3);
    if (*(uint *)(param_1 + 0x198) <= param_2) goto LAB_014c9b88;
    uVar3 = 0x60000;
    goto LAB_014c9b40;
  case 4:
    local_80 = 0x8fdfb282ee289b08;
    local_78 = "common/itemname_acc.dat";
    local_70 = 0x17;
    break;
  case 6:
    local_80 = 0xebdc52d126d88f34;
    local_78 = "common/itemname_acc_classified.dat";
    local_70 = 0x22;
    break;
  default:
    local_80 = 0xb4cc9d0257902b6e;
    local_78 = "common/itemname.dat";
    local_70 = 0x13;
  }
  local_68 = 0;
  FUN_014bfd20(local_60,&local_80,10);
  uVar1 = FUN_014c7640(param_1,*(undefined8 *)(param_1 + 0x170),local_60,param_3);
  if (param_2 < *(uint *)(param_1 + 0x198)) {
    uVar3 = 0x20000;
LAB_014c9b40:
    uVar2 = *(undefined8 *)(param_1 + 0x170);
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) = uVar3 | uVar1 & 0xffff;
    FUN_0077d4d0(*(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18),uVar2);
    *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar4 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar4 + 0x12) = *(ushort *)(lVar4 + 0x12) & 0xfffe;
  }
LAB_014c9b88:
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
  return;
}


