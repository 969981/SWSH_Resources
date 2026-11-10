/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c7fe0; name: FUN_014c7fe0
 */


void FUN_014c7fe0(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  long local_78;
  long local_70 [2];
  undefined1 *local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  
  if (param_3 < 0x62) {
    puVar5 = *(undefined8 **)(param_1 + 0x1c0);
    puVar6 = *(undefined8 **)(param_1 + 0x1a0);
    FUN_0077d2f0(*puVar5,*puVar6);
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
    *(undefined2 *)(puVar5 + 2) = *(undefined2 *)(puVar6 + 2);
    *(ushort *)((long)puVar5 + 0x12) =
         *(ushort *)((long)puVar5 + 0x12) & 0xfffe | *(ushort *)((long)puVar6 + 0x12) & 1;
    uVar1 = FUN_00864910(*(undefined8 *)(param_1 + 0x170),param_4);
    if (*(int *)(param_1 + 0x198) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x170);
      *(ulong *)(*(long *)(param_1 + 0x1a0) + 8) = uVar1 & 0xffff | 0x20000;
      FUN_0077d4d0(**(undefined8 **)(param_1 + 0x1a0),uVar2);
      *(undefined2 *)(*(long *)(param_1 + 0x1a0) + 0x10) = 0;
      *(ushort *)(*(long *)(param_1 + 0x1a0) + 0x12) =
           *(ushort *)(*(long *)(param_1 + 0x1a0) + 0x12) & 0xfffe;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x178);
    local_90 = 0x75608af7ff084381;
    local_88 = "common/another_name.dat";
    local_80 = 0x17;
    local_78 = 0;
    FUN_014bfd20(local_70,&local_90,10);
    FUN_014c7640(param_1,uVar2,local_70,param_3);
    if ((local_58 != 0) && (local_70[0] != 0)) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    }
    local_70[0] = 0;
    local_70[1] = 0xcbf29ce484222645;
    local_60 = &DAT_01d38550;
    local_58 = 0;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    }
    local_50 = 0;
    local_48 = 0;
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x178);
    uVar3 = *(undefined8 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
    *(undefined2 *)(param_1 + 0x230) = 0;
    FUN_014c6330(param_1,uVar2);
    FUN_0077d660(uVar3);
    FUN_014c6750(param_1,uVar3,uVar2,0,0);
    puVar5 = *(undefined8 **)(param_1 + 0x1c0);
    puVar6 = *(undefined8 **)(param_1 + 0x1a0);
    FUN_0077d2f0(*puVar6,*puVar5);
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
    *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 2);
    *(ushort *)((long)puVar6 + 0x12) =
         *(ushort *)((long)puVar6 + 0x12) & 0xfffe | *(ushort *)((long)puVar5 + 0x12) & 1;
    if (*(uint *)(param_1 + 0x198) <= param_2) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) = 0;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18);
  }
  else {
    uVar1 = FUN_00864910(*(undefined8 *)(param_1 + 0x170),param_4);
    if (*(uint *)(param_1 + 0x198) <= param_2) {
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x170);
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 8) = uVar1 & 0xffff | 0x20000;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18);
  }
  FUN_0077d4d0(uVar2,uVar3);
  *(undefined2 *)(*(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18 + 0x10) = 0;
  lVar4 = *(long *)(param_1 + 0x1a0) + (ulong)param_2 * 0x18;
  *(ushort *)(lVar4 + 0x12) = *(ushort *)(lVar4 + 0x12) & 0xfffe;
  return;
}


